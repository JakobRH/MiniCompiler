%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"
#include "code_gen.h"
#include "tree.h"

extern int yylex();
extern void burm_reduce(NODEPTR_TYPE, int);
extern void burm_label(NODEPTR_TYPE);

void yyerror(char const*);

%}

%token INTERFACE END CLASS IMPLEMENTS VAR METHOD INT RETURN IF THEN ELSE WHILE DO NOT AND NEW THIS NUL ASSIGN NUM ID

@autoinh ids
@autoinh classname
@autosyn tree
@autosyn local_var_num

@attributes { char *name; } ID
@attributes { int val; } NUM
@attributes { node_t *in;} Program 
@attributes { node_t *in; node_t *methods; char* classname; } Multmembers 
@attributes { node_t *in; char* name; } Class Par
@attributes { node_t *in; node_t* out; } Interface Abstractmethod Pars Helppars 
@attributes { node_t *in; node_t* out; node_t* method; char* classname; } Member
@attributes { node_t *in; node_t* out; long local_var_num; } Stats
@attributes { node_t *in; node_t* out; tree_t *tree; long local_var_num; } Stat
@attributes { node_t *ids; } Type Abstractmethodtype Multids Multexpr  
@attributes { node_t *ids; tree_t *tree; } Expr Notterm Term Multterm Plusterm Andterm Otherop


@traversal @postorder vis
@traversal @preorder reg
@traversal @preorder classtable
@traversal @postorder gen

%start Program


%%

Program :
    @{
        @i @Program.in@ = new_list();
    @}

    | Program Interface ';'
    @{
        @i @Interface.in@ = @Program.1.in@;
        @i @Program.0.in@ = @Interface.out@;
    @}

    | Program Class ';'
    @{
        @i @Class.in@ = @Program.1.in@;
        @i @Program.0.in@ = append(@Program.1.in@, @Class.name@, CLASS_T);
    @}
;

Interface :
    INTERFACE ID ':' Abstractmethod END
    @{
        @i @Abstractmethod.in@ = append(@Interface.in@, @ID.name@, INTERFACE_T);
        @i @Interface.out@ = @Abstractmethod.out@;
    @}
;

Abstractmethod :
    @{
        @i @Abstractmethod.out@ = @Abstractmethod.in@;
    @}

    | ID '(' ')' ':' Type Abstractmethod
    @{
        @i @Abstractmethod.1.in@ = append(@Abstractmethod.0.in@, @ID.name@, METHOD_T);
        @i @Abstractmethod.0.out@ = @Abstractmethod.1.out@;
        @i @Type.ids@ = @Abstractmethod.0.in@;
    @}

    | ID '(' Abstractmethodtype Type ')' ':' Type Abstractmethod
    @{
        @i @Abstractmethod.1.in@ = append(@Abstractmethod.0.in@, @ID.name@, METHOD_T);
        @i @Abstractmethod.0.out@ = @Abstractmethod.1.out@;
        @i @Type.0.ids@ = @Abstractmethod.0.in@;
        @i @Type.1.ids@ = @Abstractmethod.0.in@;
        @i @Abstractmethodtype.ids@ = @Abstractmethod.0.in@;
    @}
;

Abstractmethodtype :
    | Abstractmethodtype Type  ','
;

Class :
    CLASS ID IMPLEMENTS Multids ':' Multmembers END
    @{
        @i @Class.name@ = @ID.name@;
        @i @Multids.ids@ = @Class.in@;
        @i @Multmembers.in@ = append_ignore_dup(duplicate_list(@Class.in@), @ID.name@, CLASS_T);
        @i @Multmembers.classname@ = @ID.name@;

        @classtable fprintf(stdout, ".globl %s \n%s: ",@ID.name@,@ID.name@); asm_print_class_table(@Class.name@, @Class.in@, @Multmembers.methods@); fprintf(stdout, "\n");
    @}
;

Multids :
    | Multids ID
    @{ 
        @vis is_visible(@Multids.ids@, @ID.name@, INTERFACE_T); 
    @}
;

Multmembers :
    @{
        @i @Multmembers.0.methods@ = new_list();
        
    @}
    | Member ';' Multmembers
    @{
        @i @Member.in@ = @Multmembers.0.in@;
        @i @Multmembers.1.in@ = merge(@Multmembers.0.in@, @Member.out@);
        @i @Multmembers.0.methods@ = merge(@Multmembers.1.methods@, @Member.method@);
        
    @}
;

Member :
    VAR ID ':' Type
    @{
        @i @Type.ids@ = @Member.in@;
        @i @Member.out@ = append(new_list(), @ID.name@, OBJ_VARIABLE_T);
        @i @Member.method@ = new_list();
    @}

    | METHOD ID  '(' Pars ')' Stats END
    @{ 
        @vis is_visible(@Member.in@, @ID.name@, METHOD_T); 

        @i @Member.method@ = append(new_list(), @ID.name@, METHOD_T);
        @i @Pars.in@ = @Member.in@;
        @i @Stats.in@ = merge(@Pars.out@, @Member.in@);
        @i @Member.out@ = new_list();

        @gen @revorder(1) asm_function_enter(@Member.classname@, @ID.name@, @Stats.local_var_num@);
    @}
;

Type :
    INT

    | ID 
    @{ 
        @vis is_visible(@Type.ids@, @ID.name@, INTERFACE_T); 
    @}
;

Pars :
    @{
        @i @Pars.out@ = new_list();
    @}

    | Helppars Par
    @{
        @i @Par.in@ = @Pars.in@;
        @i @Helppars.in@ = @Pars.in@;
        @i @Pars.out@ = append(@Helppars.out@, @Par.name@, PARAMETER_T);
    @}
;

Helppars :
    @{
        @i @Helppars.out@ = new_list();
    @}

    | Helppars Par ','
    @{
        @i @Par.in@ = @Helppars.0.in@;
        @i @Helppars.1.in@ = @Helppars.0.in@;  
        @i @Helppars.0.out@ = append(@Helppars.1.out@, @Par.name@, PARAMETER_T);
    @}
;

Par :
    ID ':' Type
    @{
        @i @Type.ids@ = @Par.in@;
        @i @Par.name@ = @ID.name@;
    @}
;

Stats :
    @{
        @i @Stats.out@ = new_list();
        @i @Stats.local_var_num@ = 0
        ;
    @}
    | Stat ';' Stats
    @{
        @i @Stats.out@ = new_list();
        @i @Stat.in@ = @Stats.0.in@;
        @i @Stats.1.in@ = merge(@Stats.0.in@, @Stat.out@);

        @i @Stats.0.local_var_num@ = @Stats.1.local_var_num@ + @Stat.local_var_num@; 

        @gen @revorder(1) if(@Stat.tree@ != NULL) {burm_label(@Stat.tree@); burm_reduce(@Stat.tree@,1);}
    @}
;

Stat :
    RETURN Expr
    @{
        @i @Expr.ids@ = @Stat.in@;
        @i @Stat.out@ = new_list();

        @i @Stat.local_var_num@ = 0;

        @i @Stat.tree@ = new_node(OP_RETURN, @Expr.tree@, NULL);
        @reg @Stat.tree@->reg = "rax"; @Expr.tree@->reg = @Stat.tree@->reg;
    @}
    | IF Expr THEN Stats ELSE Stats END
    @{
        @i @Expr.ids@ = @Stat.in@;
        @i @Stats.0.in@ = @Stat.in@;
        @i @Stats.1.in@ = @Stat.in@;
        @i @Stat.out@ = merge(@Stats.0.out@, @Stats.1.out@);

        @i @Stat.local_var_num@ = 0;

        @i @Stat.tree@ = NULL;
    @}
    | IF Expr THEN Stats END
    @{
        @i @Expr.ids@ = @Stat.in@;
        @i @Stats.0.in@ = @Stat.in@;
        @i @Stat.out@ = @Stats.out@;

        @i @Stat.local_var_num@ = 0;

        @i @Stat.tree@ = NULL;
    @}
    | WHILE Expr DO Stats END
    @{
        @i @Expr.ids@ = @Stat.in@;
        @i @Stats.in@ = @Stat.in@;
        @i @Stat.out@ = @Stats.out@;

        @i @Stat.local_var_num@ = 0;

        @i @Stat.tree@ = NULL;
    @}
    | VAR ID ':' Type ASSIGN Expr
    @{
        @i @Stat.out@ = append(new_list(), @ID.name@, VARIABLE_T);
        @i @Expr.ids@ = @Stat.in@;
        @i @Type.ids@ = @Stat.in@;

        @i @Stat.local_var_num@ = 1;

        @i @Stat.tree@ = new_node(OP_ASSIGN, new_leaf_id_var(merge( @Stat.in@, @Stat.out@), @ID.name@), @Expr.tree@);

        @reg @Stat.tree@->reg = "rax"; @Expr.tree@->reg = @Stat.tree@->reg;
    @}
    | ID ASSIGN Expr
    @{
        @i @Expr.ids@ = @Stat.in@;
        @vis is_visible_var(@Stat.in@, @ID.name@); 
        @i @Stat.out@ = new_list();

        @i @Stat.local_var_num@ = 0;

        @i @Stat.tree@ = new_node(OP_ASSIGN, new_leaf_id_var(@Stat.in@, @ID.name@), @Expr.tree@);

        @reg @Stat.tree@->reg = "rax"; @Expr.tree@->reg = @Stat.tree@->reg;
    @}
    | Expr
    @{
        @i @Expr.ids@ = @Stat.in@;
        @i @Stat.out@ = new_list();

        @i @Stat.local_var_num@ = 0;

        @i @Stat.tree@ = NULL;
    @}
;

Expr :
    Notterm 
    @{
        @reg @Notterm.tree@->reg = @Expr.tree@->reg; 
    @}
    | Plusterm
    @{
        @reg @Plusterm.tree@->reg = @Expr.tree@->reg; 
    @}
    | Multterm
    @{
        @reg @Multterm.tree@->reg = @Expr.tree@->reg; 
    @}
    | Andterm
    @{
        @reg @Andterm.tree@->reg = @Expr.tree@->reg; 
    @}
    | Otherop 
    @{
        @reg @Otherop.tree@->reg = @Expr.tree@->reg; 
    @}
    | Term
    @{
        @reg @Term.tree@->reg = @Expr.tree@->reg; 
    @}
    | NEW ID
    @{
        @i @Expr.tree@ = NULL;

        @vis is_visible(@Expr.ids@, @ID.name@, CLASS_T);
    @}
;

Plusterm :
    Term '+' Term
    @{
        @i @Plusterm.tree@ = new_node(OP_ADD, @Term.0.tree@, @Term.1.tree@);
        @reg @Term.0.tree@->reg = @Plusterm.tree@->reg; @Term.1.tree@->reg = get_next_reg(@Plusterm.tree@->reg);
    @}
    | Plusterm '+' Term
    @{
        @i @Plusterm.0.tree@ = new_node(OP_ADD, @Plusterm.1.tree@, @Term.tree@);
        @reg @Plusterm.1.tree@->reg = @Plusterm.0.tree@->reg; @Term.tree@->reg = get_next_reg(@Plusterm.0.tree@->reg);
    @}
;

Multterm :
    Term '*' Term
    @{
        @i @Multterm.tree@ = new_node(OP_MUL, @Term.0.tree@, @Term.1.tree@);
        @reg @Term.0.tree@->reg = @Multterm.tree@->reg; @Term.1.tree@->reg = get_next_reg(@Multterm.tree@->reg);
    @}
    | Multterm '*' Term
    @{
        @i @Multterm.0.tree@ = new_node(OP_MUL, @Multterm.1.tree@, @Term.tree@);
        @reg @Multterm.1.tree@->reg = @Multterm.0.tree@->reg; @Term.tree@->reg = get_next_reg(@Multterm.0.tree@->reg);
    @}
;

Andterm : 
    Term AND Term
    @{
        @i @Andterm.0.tree@ = new_node(OP_AND, @Term.0.tree@, @Term.1.tree@);
        @reg @Term.0.tree@->reg = @Andterm.tree@->reg; @Term.1.tree@->reg = get_next_reg(@Andterm.tree@->reg);
    @}
    | Andterm AND Term
    @{
        @i @Andterm.0.tree@ = new_node(OP_AND, @Andterm.1.tree@, @Term.tree@);
        @reg @Andterm.1.tree@->reg = @Andterm.0.tree@->reg; @Term.tree@->reg = get_next_reg(@Andterm.0.tree@->reg);
    @}
;

Otherop :
    Term '-' Term
    @{
        @i @Otherop.tree@ = new_node(OP_SUB,@Term.0.tree@,@Term.1.tree@);
        @reg @Term.0.tree@->reg = @Otherop.tree@->reg; @Term.1.tree@->reg = get_next_reg(@Otherop.tree@->reg);        
    @}
    | Term '<' Term
    @{
        @i @Otherop.tree@ = new_node(OP_LESS,@Term.0.tree@,@Term.1.tree@);
        @reg @Term.0.tree@->reg = @Otherop.tree@->reg; @Term.1.tree@->reg = get_next_reg(@Otherop.tree@->reg);        
    @}
    | Term '=' Term
    @{
        @i @Otherop.tree@ = new_node(OP_EQUAL,@Term.0.tree@,@Term.1.tree@);
        @reg @Term.0.tree@->reg = @Otherop.tree@->reg; @Term.1.tree@->reg = get_next_reg(@Otherop.tree@->reg);        
    @}
;

Notterm :
    NOT Term
    @{
        @i @Notterm.tree@ = new_node(OP_NOT, @Term.tree@,NULL);
        @reg @Term.tree@->reg = @Notterm.tree@->reg;
    @}
    | NOT Notterm
    @{
        @i @Notterm.0.tree@ = new_node(OP_NOT, @Notterm.1.tree@,NULL);
        @reg @Notterm.1.tree@->reg = @Notterm.0.tree@->reg;     
    @}
;

Term :
    '(' Expr ')'
    | NUM
    @{
        @i @Term.tree@ = new_leaf_num(@NUM.val@);
    @}
    | THIS
    @{
        @i @Term.tree@ = new_node(OP_THIS, NULL, NULL);      
    @}
    | NUL ID
    @{
        @i @Term.tree@ = new_leaf_num(0);

        @vis is_visible(@Term.ids@, @ID.name@, INTERFACE_T);
    @}
    | ID
    @{
        @i @Term.tree@ = new_leaf_id_var(@Term.ids@, @ID.name@); 
           
        @vis is_visible_var(@Term.ids@, @ID.name@);
    @}
    | Term '.' ID '(' ')'
    @{
        @i @Term.0.tree@ = NULL; 

        @vis is_visible(@Term.ids@, @ID.name@, METHOD_T);
    @}
    | Term '.' ID '(' Multexpr Expr ')'
    @{
        @i @Term.0.tree@ = NULL;
        
        @vis is_visible(@Term.ids@, @ID.name@, METHOD_T);
    @}
;

Multexpr:
    | Multexpr Expr ','
;

%%

int main(void){
    yyparse();
}