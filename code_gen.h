#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

char* get_next_reg(char* reg);
void asm_print_class_table(char *class, node_t* list1, node_t* list2);
void asm_function_enter(char *class_name, char *func_name, long var_counter);
char* get_byte_reg(char* name);
char* get_parameter_reg(int index);
void asm_return_expr(void);
void asm_return_val_expr(char* reg);
void asm_move_from_to(char* src, char* dest);
void asm_move_val(long val, char *dest);
void asm_move_from_stack(long offset, char *dst);
void asm_not(char* reg);
void asm_add(char* src, char* dest);
void asm_add_val(long val, char* dest);
void asm_mul(char* src, char* dest);
void asm_mul_val(long val, char* dest);
void asm_sub(char* src, char* dest);
void asm_sub_val_1(long val, char* dest);
void asm_sub_val_2(char* dest, long val);
void asm_and(char* src, char* dest);
void asm_and_val(long val, char* dest);
void asm_less(char* first, char* second, char* dest);
void asm_less_val_1(long val, char *second, char* dest);
void asm_less_val_2(char *first, long val, char* dest);
void asm_equal(char* first, char* second, char* dest);
void asm_equal_val(long val, char* second, char* dest);
void asm_move_from_obj_var(int offset, char *dest);
void asm_move_val_to_obj_var(int offset, long val);
void asm_move_reg_to_obj_var(int offset, char *reg);
void asm_move_val_to_stack(long val, long offset);
void asm_mov_reg_to_stack(char *reg, long offset);