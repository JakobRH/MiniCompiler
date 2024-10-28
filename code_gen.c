#include "code_gen.h"

int local_variable_present = 0;

void asm_print_class_table(char *class, node_t* list1, node_t* list2){

    node_t* temp = list1;

    while(temp != NULL){

		if(temp->type == METHOD_T){
            if(get_index(list2, temp->name, METHOD_T)!=-1){
			    fprintf(stdout, ".quad %s_%s\n",class, temp->name);
            }
            else{
                fprintf(stdout, ".quad 0\n");
            }
		}
		temp = temp->next;
	}
}

void asm_function_enter(char *class_name, char *func_name, long var_counter){

     fprintf(stdout, "%s_%s: \n",class_name,func_name);

     if(var_counter > 0){
         fprintf(stdout, "\tenter\t$%li, $0\n", var_counter * 8);
         local_variable_present = 1;
     }
     else{
         local_variable_present = 0;
     }
}

char* get_next_reg(char* reg) {

    if (reg == NULL) {
        return "rax";
    }
    
    char *registers[] = { "rax", "r11", "r10", "r9", "r8", "rcx", "rdx", "rsi", "rdi" };

    for (int i = 0; i < 8; i++) {
        if (strcmp(registers[i], reg) == 0) {
            return registers[i+1];
        }
    }

    fprintf(stderr, "No register found or given register name is not correct! '%s'\n", reg);
    exit(3);
}

char* get_byte_reg(char* name) {
   
    if (name == NULL) {
        return "al";
    }
    
   char *registers[] = { "rax", "r11", "r10", "r9", "r8", "rcx", "rdx", "rsi", "rdi" };
   char *byteRegisters[] = { "al", "r11b", "r10b", "r9b", "r8b", "cl", "dl", "sil", "dil"  };


   for (int i = 0; i < 8; i++) {
        if (strcmp(registers[i], name) == 0) {
            return byteRegisters[i];
        }
   }

   fprintf(stderr, "Byte register not found");
   exit(3);
}

char* get_parameter_reg(int index) {     
    char *registers[] = { "rdi", "rsi", "rdx", "rcx", "r8", "r9" };

    if (index >= 0 && index <= 5) {
        return registers[index];
    }

    fprintf(stderr, "Invalid register index specified for getParameterRegister");
    exit(3);
}

void asm_return_val_expr(char* reg) {

    if( reg != NULL && (strncmp(reg, "rax",3) != 0)) {
        asm_move_from_to(reg,"rax");
    }

    asm_return_expr();
}

void asm_return_expr(void) {

    if(local_variable_present) {
        fprintf(stdout, "\tleave\n");
    }

    fprintf(stdout, "\tret\n");
}

void asm_move_from_to(char* src, char* dest) {
    fprintf(stdout, "\tmovq\t%%%s, %%%s\n",src,dest);
}

void asm_move_val(long val, char *dest) {
    fprintf(stdout, "\tmovq\t$%ld, %%%s\n",val,dest);
}

void asm_move_from_stack(long offset, char *dst)
{
    fprintf(stdout, "\tmovq\t%ld(%%rsp), %%%s\n", -offset*8, dst);
}

void asm_not(char* reg) {
    fprintf(stdout, "\tnotq\t%%%s\n",reg);
}

void asm_add(char* src, char* dest) {
    fprintf(stdout,"\taddq\t%%%s, %%%s\n",src,dest);
}

void asm_add_val(long val, char* dest) {
    fprintf(stdout,"\taddq\t$%ld, %%%s\n",val, dest);
}

void asm_mul(char* src, char* dest) {
    fprintf(stdout, "\timulq\t%%%s, %%%s\n",src,dest);
}

void asm_mul_val(long val, char* dest) {
    fprintf(stdout, "\timulq\t$%ld, %%%s\n",val,dest);
}

void asm_sub(char* src, char* dest) {
    fprintf(stdout, "\tsubq\t%%%s, %%%s\n",src, dest);
}

void asm_sub_val_1(long val, char* dest) {
    fprintf(stdout, "\tsubq\t$%ld, %%%s\n",val,dest);
}

void asm_sub_val_2(char* dest, long val) {
    fprintf(stdout, "\tsubq\t$%ld, %%%s\n",val,dest);
    asm_mul_val(-1,dest);
}

void asm_and(char* src, char* dest) {
    fprintf(stdout, "\tandq\t%%%s, %%%s\n",src,dest);
}

void asm_and_val(long val, char* dest) {
    fprintf(stdout, "\tandq\t$%ld, %%%s\n",val,dest);
}

void asm_less(char* reg1, char* reg2, char* dest) {
    fprintf(stdout, "\tcmpq\t%%%s, %%%s\n",reg1,reg2);
    fprintf(stdout, "\tsetg\t%%%s\n",get_byte_reg(dest));
    asm_and_val(1,dest);
    asm_mul_val(-1,dest);
}

void asm_less_val_1(long val, char *reg2, char* dest) {
    fprintf(stdout, "\tcmpq\t$%ld, %%%s\n",val,reg2);
    fprintf(stdout, "\tsetg\t%%%s\n",get_byte_reg(dest));
    asm_and_val(1,dest);
    asm_mul_val(-1,dest);
}

void asm_less_val_2(char *reg1, long val, char* dest) {
    fprintf(stdout, "\tcmpq\t$%ld, %%%s\n",val,reg1);
    fprintf(stdout, "\tsetl\t%%%s\n",get_byte_reg(dest));
    asm_and_val(1,dest);
    asm_mul_val(-1,dest);
}

void asm_equal(char* reg1, char* reg2, char* dest) {
    fprintf(stdout, "\tcmpq\t%%%s, %%%s\n",reg1,reg2);
    fprintf(stdout, "\tsete\t%%%s\n",get_byte_reg(dest));
    asm_and_val(1,dest);
    asm_mul_val(-1,dest);
}

void asm_equal_val(long val, char* reg2, char* dest) {
    fprintf(stdout, "\tcmpq\t$%ld, %%%s\n",val,reg2);
    fprintf(stdout, "\tsete\t%%%s\n",get_byte_reg(dest));
    asm_and_val(1,dest);
    asm_mul_val(-1,dest);
}

void asm_move_from_obj_var(int offset, char *dest){
    int temp_offset = 8 + (8 * offset);
    char* this_reg = "rdi";

    fprintf(stdout, "\tmovq\t%d(%%%s), %%%s\n", temp_offset, this_reg, dest);
}

void asm_move_val_to_obj_var(int offset, long val){
    int temp_offset = 8 + (8 * offset);
    char* this_reg = "rdi";

    fprintf(stdout, "\tmovq\t$%ld, %d(%%%s)\n", val, temp_offset, this_reg);
}

void asm_move_reg_to_obj_var(int offset, char *reg){
    int temp_offset = 8 + (8 * offset);
    char* this_reg = "rdi";

    fprintf(stdout, "\tmovq\t%%%s, %d(%%%s)\n", reg, temp_offset, this_reg);
}
void asm_move_val_to_stack(long val, long offset){
    fprintf(stdout,"\tmovq\t$%ld, %ld(%%rsp)\n", val, -offset * 8);
}

void asm_mov_reg_to_stack(char *reg, long offset){
    printf("\tmovq\t%%%s, %ld(%%rsp)\n", reg, -offset * 8);
}

