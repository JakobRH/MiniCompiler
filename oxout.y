/* output from Ox version G1.04 */
%{
%}
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






 
 
  
  
  
     
 
 
 
      
       







%start yyyAugNonterm



%{


struct yyyT1 { char *name; }; 
typedef struct yyyT1 *yyyP1; 


struct yyyT2 { int val; }; 
typedef struct yyyT2 *yyyP2; 


struct yyyT3 { node_t *in;}; 
typedef struct yyyT3 *yyyP3; 


struct yyyT4 { node_t *in; node_t *methods; char* classname; }; 
typedef struct yyyT4 *yyyP4; 


struct yyyT5 { node_t *in; char* name; }; 
typedef struct yyyT5 *yyyP5; 


struct yyyT6 { node_t *in; node_t* out; }; 
typedef struct yyyT6 *yyyP6; 


struct yyyT7 { node_t *in; node_t* out; node_t* method; char* classname; }; 
typedef struct yyyT7 *yyyP7; 


struct yyyT8 { node_t *in; node_t* out; long local_var_num; }; 
typedef struct yyyT8 *yyyP8; 


struct yyyT9 { node_t *in; node_t* out; tree_t *tree; long local_var_num; }; 
typedef struct yyyT9 *yyyP9; 


struct yyyT10 { node_t *ids; }; 
typedef struct yyyT10 *yyyP10; 


struct yyyT11 { node_t *ids; tree_t *tree; }; 
typedef struct yyyT11 *yyyP11; 
                                                      /*custom*/  
typedef unsigned char yyyWAT; 
typedef unsigned char yyyRCT; 
typedef unsigned short yyyPNT; 
typedef unsigned char yyyWST; 

#include <limits.h>
#define yyyR UCHAR_MAX  

 /* funny type; as wide as the widest of yyyWAT,yyyWST,yyyRCT  */ 
typedef unsigned short yyyFT;

                                                      /*stock*/  




struct yyyGenNode {void *parent;  
                   struct yyyGenNode **cL; /* child list */ 
                   yyyRCT *refCountList; 
                   yyyPNT prodNum;                      
                   yyyWST whichSym; /* which child of parent? */ 
                  }; 

typedef struct yyyGenNode yyyGNT; 



struct yyyTB {int isEmpty; 
              int typeNum; 
              int nAttrbs; 
              char *snBufPtr; 
              yyyWAT *startP,*stopP; 
             };  




extern struct yyyTB yyyTermBuffer; 
extern yyyWAT yyyLRCIL[]; 
extern void yyyGenLeaf(); 


%}

%{
#include <stdio.h>

int yyyYok = 1;
int yyyInitDone = 0;
char *yyySTsn;
yyyGNT *yyySTN;
int yyyGNSz = sizeof(yyyGNT);
int yyyProdNum,yyyRHSlength,yyyNattrbs,yyyTypeNum; 

extern yyyFT yyyRCIL[];

void yyyExecuteRRsection();
void yyyYoxInit();
void yyyYoxReset();
void yyyDecorate();
void yyyGenIntNode();
void yyyAdjustINRC();
void yyyPrune();
void yyyUnsolvedInstSearchTrav();
void yyyUnsolvedInstSearchTravAux();
void yyyerror();
void yyyShift();



#define yyyRSU(NUM1,NUM2,NUM3,NUM4) \
   yyyProdNum=NUM1;yyyRHSlength=NUM2;yyyNattrbs=NUM3;yyyTypeNum=NUM4;\
   if ((yychar <= 0) && (!yyyTermBuffer.isEmpty)) yyyShift(); 
%}


%%

yyyAugNonterm 
	:	{if (!yyyInitDone) 
		    {yyyYoxInit(); 
		     yyyInitDone = 1;
		    }
		 yyyYoxReset();
		}
		Program
		{
		 yyyDecorate(); yyyExecuteRRsection();
		}
	;
Program :
    {if(yyyYok){
yyyRSU(1,0,1,3);
yyyGenIntNode();
 (((yyyP3)yyySTsn)->in) = new_list();
    yyyAdjustINRC(yyyRCIL+0,yyyRCIL+3);}}

    | Program Interface ';'
    {if(yyyYok){
yyyRSU(2,3,1,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+3,yyyRCIL+9);/*yyyPrune(2);*/}}

    | Program Class ';'
    {if(yyyYok){
yyyRSU(3,3,1,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+9,yyyRCIL+15);/*yyyPrune(3);*/}}
;

Interface :
    INTERFACE ID ':' Abstractmethod END
    {if(yyyYok){
yyyRSU(4,5,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+15,yyyRCIL+21);}}
;

Abstractmethod :
    {if(yyyYok){
yyyRSU(5,0,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+21,yyyRCIL+24);}}

    | ID '(' ')' ':' Type Abstractmethod
    {if(yyyYok){
yyyRSU(6,6,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+24,yyyRCIL+33);}}

    | ID '(' Abstractmethodtype Type ')' ':' Type Abstractmethod
    {if(yyyYok){
yyyRSU(7,8,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+33,yyyRCIL+48);}}
;

Abstractmethodtype :
    {if(yyyYok){
yyyRSU(8,0,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+48,yyyRCIL+48);}}| Abstractmethodtype Type  ','
{if(yyyYok){
yyyRSU(9,3,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+48,yyyRCIL+54);}};

Class :
    CLASS ID IMPLEMENTS Multids ':' Multmembers END
    {if(yyyYok){
yyyRSU(10,7,2,5);
yyyGenIntNode();
 (((yyyP5)yyySTsn)->name) = (((yyyP1)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name);
         (((yyyP4)(((char *)((yyySTN->cL)[5]))+yyyGNSz))->classname) = (((yyyP1)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name);

        yyyAdjustINRC(yyyRCIL+54,yyyRCIL+66);}}
;

Multids :
    {if(yyyYok){
yyyRSU(11,0,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+66,yyyRCIL+66);}}| Multids ID
    {if(yyyYok){
yyyRSU(12,2,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+66,yyyRCIL+69);}}
;

Multmembers :
    {if(yyyYok){
yyyRSU(13,0,3,4);
yyyGenIntNode();
 (((yyyP4)yyySTsn)->methods) = new_list();
        
    yyyAdjustINRC(yyyRCIL+69,yyyRCIL+72);}}
    | Member ';' Multmembers
    {if(yyyYok){
yyyRSU(14,3,3,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+72,yyyRCIL+87);}}
;

Member :
    VAR ID ':' Type
    {if(yyyYok){
yyyRSU(15,4,4,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->method) = new_list();
     (((yyyP7)yyySTsn)->out) = append(new_list(), (((yyyP1)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name), OBJ_VARIABLE_T);
        yyyAdjustINRC(yyyRCIL+87,yyyRCIL+96);}}

    | METHOD ID  '(' Pars ')' Stats END
    {if(yyyYok){
yyyRSU(16,7,4,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->out) = new_list();

         (((yyyP7)yyySTsn)->method) = append(new_list(), (((yyyP1)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name), METHOD_T);
        yyyAdjustINRC(yyyRCIL+96,yyyRCIL+108);}}
;

Type :
    INT

    {if(yyyYok){
yyyRSU(17,1,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+108,yyyRCIL+108);/*yyyPrune(17);*/}}| ID 
    {if(yyyYok){
yyyRSU(18,1,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+108,yyyRCIL+108);/*yyyPrune(18);*/}}
;

Pars :
    {if(yyyYok){
yyyRSU(19,0,2,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = new_list();
    yyyAdjustINRC(yyyRCIL+108,yyyRCIL+111);}}

    | Helppars Par
    {if(yyyYok){
yyyRSU(20,2,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+111,yyyRCIL+120);}}
;

Helppars :
    {if(yyyYok){
yyyRSU(21,0,2,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = new_list();
    yyyAdjustINRC(yyyRCIL+120,yyyRCIL+123);}}

    | Helppars Par ','
    {if(yyyYok){
yyyRSU(22,3,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+123,yyyRCIL+132);}}
;

Par :
    ID ':' Type
    {if(yyyYok){
yyyRSU(23,3,2,5);
yyyGenIntNode();
 (((yyyP5)yyySTsn)->name) = (((yyyP1)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->name);
    yyyAdjustINRC(yyyRCIL+132,yyyRCIL+138);}}
;

Stats :
    {if(yyyYok){
yyyRSU(24,0,3,8);
yyyGenIntNode();
 (((yyyP8)yyySTsn)->out) = new_list();
         (((yyyP8)yyySTsn)->local_var_num) = 0
        ;
    yyyAdjustINRC(yyyRCIL+138,yyyRCIL+144);}}
    | Stat ';' Stats
    {if(yyyYok){
yyyRSU(25,3,3,8);
yyyGenIntNode();
 (((yyyP8)yyySTsn)->out) = new_list();
        yyyAdjustINRC(yyyRCIL+144,yyyRCIL+156);}}
;

Stat :
    RETURN Expr
    {if(yyyYok){
yyyRSU(26,2,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->out) = new_list();

         (((yyyP9)yyySTsn)->local_var_num) = 0;

        yyyAdjustINRC(yyyRCIL+156,yyyRCIL+168);}}
    | IF Expr THEN Stats ELSE Stats END
    {if(yyyYok){
yyyRSU(27,7,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->local_var_num) = 0;

         (((yyyP9)yyySTsn)->tree) = NULL;
    yyyAdjustINRC(yyyRCIL+168,yyyRCIL+186);}}
    | IF Expr THEN Stats END
    {if(yyyYok){
yyyRSU(28,5,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->local_var_num) = 0;

         (((yyyP9)yyySTsn)->tree) = NULL;
    yyyAdjustINRC(yyyRCIL+186,yyyRCIL+201);}}
    | WHILE Expr DO Stats END
    {if(yyyYok){
yyyRSU(29,5,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->local_var_num) = 0;

         (((yyyP9)yyySTsn)->tree) = NULL;
    yyyAdjustINRC(yyyRCIL+201,yyyRCIL+216);}}
    | VAR ID ':' Type ASSIGN Expr
    {if(yyyYok){
yyyRSU(30,6,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->local_var_num) = 1;

         (((yyyP9)yyySTsn)->out) = append(new_list(), (((yyyP1)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name), VARIABLE_T);
        yyyAdjustINRC(yyyRCIL+216,yyyRCIL+231);}}
    | ID ASSIGN Expr
    {if(yyyYok){
yyyRSU(31,3,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->out) = new_list();

         (((yyyP9)yyySTsn)->local_var_num) = 0;

        yyyAdjustINRC(yyyRCIL+231,yyyRCIL+243);}}
    | Expr
    {if(yyyYok){
yyyRSU(32,1,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->out) = new_list();

         (((yyyP9)yyySTsn)->local_var_num) = 0;

         (((yyyP9)yyySTsn)->tree) = NULL;
    yyyAdjustINRC(yyyRCIL+243,yyyRCIL+255);}}
;

Expr :
    Notterm 
    {if(yyyYok){
yyyRSU(33,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+255,yyyRCIL+261);}}
    | Plusterm
    {if(yyyYok){
yyyRSU(34,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+261,yyyRCIL+267);}}
    | Multterm
    {if(yyyYok){
yyyRSU(35,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+267,yyyRCIL+273);}}
    | Andterm
    {if(yyyYok){
yyyRSU(36,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+273,yyyRCIL+279);}}
    | Otherop 
    {if(yyyYok){
yyyRSU(37,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+279,yyyRCIL+285);}}
    | Term
    {if(yyyYok){
yyyRSU(38,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+285,yyyRCIL+291);}}
    | NEW ID
    {if(yyyYok){
yyyRSU(39,2,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = NULL;

        yyyAdjustINRC(yyyRCIL+291,yyyRCIL+294);/*yyyPrune(39);*/}}
;

Plusterm :
    Term '+' Term
    {if(yyyYok){
yyyRSU(40,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+294,yyyRCIL+303);}}
    | Plusterm '+' Term
    {if(yyyYok){
yyyRSU(41,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+303,yyyRCIL+312);}}
;

Multterm :
    Term '*' Term
    {if(yyyYok){
yyyRSU(42,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+312,yyyRCIL+321);}}
    | Multterm '*' Term
    {if(yyyYok){
yyyRSU(43,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+321,yyyRCIL+330);}}
;

Andterm : 
    Term AND Term
    {if(yyyYok){
yyyRSU(44,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+330,yyyRCIL+339);}}
    | Andterm AND Term
    {if(yyyYok){
yyyRSU(45,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+339,yyyRCIL+348);}}
;

Otherop :
    Term '-' Term
    {if(yyyYok){
yyyRSU(46,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+348,yyyRCIL+357);}}
    | Term '<' Term
    {if(yyyYok){
yyyRSU(47,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+357,yyyRCIL+366);}}
    | Term '=' Term
    {if(yyyYok){
yyyRSU(48,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+366,yyyRCIL+375);}}
;

Notterm :
    NOT Term
    {if(yyyYok){
yyyRSU(49,2,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+375,yyyRCIL+381);}}
    | NOT Notterm
    {if(yyyYok){
yyyRSU(50,2,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+381,yyyRCIL+387);}}
;

Term :
    '(' Expr ')'
    {if(yyyYok){
yyyRSU(51,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+387,yyyRCIL+393);}}| NUM
    {if(yyyYok){
yyyRSU(52,1,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = new_leaf_num((((yyyP2)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->val));
    yyyAdjustINRC(yyyRCIL+393,yyyRCIL+396);/*yyyPrune(52);*/}}
    | THIS
    {if(yyyYok){
yyyRSU(53,1,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = new_node(OP_THIS, NULL, NULL);      
    yyyAdjustINRC(yyyRCIL+396,yyyRCIL+399);/*yyyPrune(53);*/}}
    | NUL ID
    {if(yyyYok){
yyyRSU(54,2,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = new_leaf_num(0);

        yyyAdjustINRC(yyyRCIL+399,yyyRCIL+402);/*yyyPrune(54);*/}}
    | ID
    {if(yyyYok){
yyyRSU(55,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+402,yyyRCIL+405);}}
    | Term '.' ID '(' ')'
    {if(yyyYok){
yyyRSU(56,5,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = NULL; 

        yyyAdjustINRC(yyyRCIL+405,yyyRCIL+411);}}
    | Term '.' ID '(' Multexpr Expr ')'
    {if(yyyYok){
yyyRSU(57,7,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = NULL;
        
        yyyAdjustINRC(yyyRCIL+411,yyyRCIL+423);}}
;

Multexpr:
    {if(yyyYok){
yyyRSU(58,0,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+423,yyyRCIL+423);}}| Multexpr Expr ','
{if(yyyYok){
yyyRSU(59,3,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+423,yyyRCIL+429);}};


%%

int main(void){
    yyparse();
}                                                      /*custom*/  
long yyyMaxNbytesNodeStg = 2000000; 
long yyyMaxNrefCounts =    500000; 
long yyyMaxNchildren =     60000; 
long yyyMaxStackSize =     2000; 
long yyySSALspaceSize =    20000; 
long yyyRSmaxSize =        1000; 
long yyyTravStackMaxSize = 2000; 


struct yyyTB yyyTermBuffer; 

char *yyyNodeAndStackSpace; 

char *yyyNodeSpace;
char *yyyNextNodeSpace; 
char *yyyAfterNodeSpace; 


 
struct yyyGenNode **yyyChildListSpace;  
struct yyyGenNode **yyyNextCLspace; 
struct yyyGenNode **yyyAfterChildListSpace; 



yyyRCT *yyyRefCountListSpace;
yyyRCT *yyyNextRCLspace;  
yyyRCT *yyyAfterRefCountListSpace;   



struct yyySolvedSAlistCell {yyyWAT attrbNum; 
                            long next; 
                           }; 
#define yyyLambdaSSAL 0 
long yyySSALCfreeList = yyyLambdaSSAL; 
long yyyNewSSALC = 1; 
 
struct yyySolvedSAlistCell *yyySSALspace; 


 
struct yyyStackItem {struct yyyGenNode *node; 
                     long solvedSAlist; 
                     struct yyyGenNode *oldestNode; 
                    };  

long yyyNbytesStackStg; 
struct yyyStackItem *yyyStack; 
struct yyyStackItem *yyyAfterStack; 
struct yyyStackItem *yyyStackTop; 



struct yyyRSitem {yyyGNT *node; 
                  yyyWST whichSym; 
                  yyyWAT wa;  
                 };  

struct yyyRSitem *yyyRS;  
struct yyyRSitem *yyyRSTop;  
struct yyyRSitem *yyyAfterRS;  
 





yyyFT yyyRCIL[] = {
yyyR,0,0, yyyR,0,1, 1,0,1, yyyR,0,2, 1,0,1, yyyR,1,1, 
3,0,1, yyyR,1,1, yyyR,1,1, 4,0,1, 5,0,1, yyyR,1,1, 
2,0,1, 3,0,1, 6,0,1, 7,0,1, 0,0,1, 1,0,1, 
yyyR,1,0, 3,0,1, 5,0,1, 5,2,0, 0,0,1, yyyR,1,0, 
yyyR,1,2, 0,0,1, 0,3,1, 2,0,2, 2,2,1, yyyR,1,0, 
yyyR,2,0, 3,0,1, yyyR,1,0, yyyR,2,0, 3,0,1, 5,0,2, 
yyyR,1,0, yyyR,1,2, 0,0,1, 1,0,1, yyyR,1,0, yyyR,1,2, 
0,0,1, 1,0,1, yyyR,1,0, 2,0,1, yyyR,1,0, yyyR,2,0, 
yyyR,1,0, yyyR,2,2, 0,0,1, 2,0,2, yyyR,1,0, yyyR,2,1, 
yyyR,3,0, 1,0,1, yyyR,1,2, yyyR,2,0, yyyR,3,0, 1,0,1, 
3,0,1, 5,0,1, yyyR,1,1, yyyR,2,0, yyyR,3,0, 1,0,1, 
3,0,1, yyyR,1,1, yyyR,2,0, yyyR,3,0, 1,0,1, 3,0,1, 
yyyR,1,0, yyyR,2,2, yyyR,3,0, 3,0,1, 5,0,1, yyyR,1,0, 
yyyR,2,2, yyyR,3,0, 2,0,1, yyyR,1,0, yyyR,2,0, yyyR,3,0, 
0,0,1, yyyR,1,1, 0,0,1, yyyR,1,1, 0,0,1, yyyR,1,1, 
0,0,1, yyyR,1,1, 0,0,1, yyyR,1,1, 0,0,1, yyyR,1,1, 
0,0,1, yyyR,1,0, yyyR,1,2, 0,0,1, 2,0,1, yyyR,1,2, 
0,0,1, 2,0,1, yyyR,1,2, 0,0,1, 2,0,1, yyyR,1,2, 
0,0,1, 2,0,1, yyyR,1,2, 0,0,1, 2,0,1, yyyR,1,2, 
0,0,1, 2,0,1, yyyR,1,2, 0,0,1, 2,0,1, yyyR,1,2, 
0,0,1, 2,0,1, yyyR,1,2, 0,0,1, 2,0,1, yyyR,1,1, 
1,0,1, yyyR,1,1, 1,0,1, yyyR,1,1, 1,0,1, yyyR,1,0, 
yyyR,1,0, yyyR,1,0, yyyR,1,1, yyyR,1,0, 0,0,1, yyyR,1,0, 
0,0,1, 4,0,1, 5,0,1, 0,0,1, 1,0,1, 
};

short yyyIIIEL[] = {0,
0,1,5,9,15,16,23,32,33,37,
45,46,49,50,54,59,67,69,71,72,
75,76,80,84,85,89,92,100,106,112,
119,123,125,127,129,131,133,135,137,140,
144,148,152,156,160,164,168,172,176,179,
182,186,188,190,193,195,201,209,210,
};

long yyyIIEL[] = {
0,1,2,3,5,5,6,7,9,9,11,11,
12,12,14,14,16,18,19,19,19,19,20,22,
24,25,25,26,27,27,27,28,30,31,32,33,
34,34,36,36,37,37,38,38,41,41,42,43,
44,45,48,51,55,55,58,62,62,63,63,64,
68,68,69,69,71,71,74,74,75,75,76,77,
79,81,83,85,87,89,91,93,93,95,96,96,
97,100,103,107,107,110,114,114,116,120,120,122,
122,125,125,128,128,132,132,134,134,137,137,141,
141,143,143,146,146,150,150,151,151,152,152,154,
158,159,159,161,165,167,169,171,173,175,177,179,
181,183,185,187,189,191,193,193,194,196,198,198,
200,202,204,204,206,208,210,210,212,214,216,216,
218,220,222,222,224,226,228,228,230,232,234,234,
236,238,240,240,242,244,246,246,248,250,250,252,
254,254,256,258,258,260,260,262,263,265,265,267,
267,268,270,271,273,275,275,276,276,276,278,280,
280,281,281,282,284,284,285,286,287,289,
};

long yyyIEL[] = {
0,0,0,2,2,4,4,8,
8,10,12,12,14,14,16,18,
18,22,22,24,24,24,26,34,
34,36,36,36,36,36,38,38,
42,42,42,46,46,52,52,52,
52,52,52,54,54,54,54,54,
54,58,58,62,62,64,66,66,
66,68,68,70,70,70,70,72,
72,76,76,76,76,78,78,80,
80,80,80,80,80,80,80,80,
84,84,84,86,86,88,88,88,
92,92,92,94,94,96,98,98,
100,100,100,100,100,104,104,104,
104,106,106,108,108,108,110,112,
112,112,112,112,114,120,120,120,
120,120,120,120,122,122,122,124,
124,128,128,128,128,128,128,128,
130,130,134,134,134,134,134,134,
134,136,136,142,142,142,142,146,
146,146,148,152,152,152,152,154,
154,156,158,158,158,158,158,158,
160,160,160,162,164,164,164,166,
168,168,168,170,172,172,172,174,
176,176,176,178,180,180,180,182,
182,182,182,186,186,186,188,188,
190,194,194,194,196,196,198,202,
202,202,204,204,206,210,210,210,
212,212,214,218,218,218,220,220,
222,226,226,226,228,228,230,234,
234,234,236,236,238,242,242,242,
244,244,246,250,250,250,252,252,
254,256,256,256,258,260,260,260,
262,264,264,264,266,266,266,268,
268,268,268,268,268,270,270,272,
274,274,274,274,274,280,280,280,
280,280,280,280,280,280,284,284,
284,284,
};

yyyFT yyyEntL[] = {
2,0,0,0,0,0,2,0,0,0,4,0,4,0,0,1,
0,1,5,0,6,0,6,0,0,1,3,0,7,0,4,0,
8,0,8,0,0,1,2,0,1,0,6,0,4,0,0,1,
6,2,6,0,1,0,3,0,1,0,3,2,1,3,3,0,
0,1,0,1,4,0,0,1,6,0,4,0,0,2,6,0,
1,0,2,0,0,1,0,1,1,0,2,0,0,1,0,1,
3,0,0,1,3,0,1,0,3,0,0,2,0,2,2,0,
0,2,6,0,4,0,2,0,0,1,0,1,4,0,2,0,
0,1,4,0,2,0,0,1,0,2,4,0,6,0,0,1,
0,2,0,2,0,2,3,0,0,2,0,2,1,0,1,0,
0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,
0,1,1,0,0,1,3,0,1,0,0,1,0,1,3,0,
1,0,0,1,0,1,3,0,1,0,0,1,0,1,3,0,
1,0,0,1,0,1,3,0,1,0,0,1,0,1,3,0,
1,0,0,1,0,1,3,0,1,0,0,1,0,1,3,0,
1,0,0,1,0,1,3,0,1,0,0,1,0,1,2,0,
0,1,2,0,0,1,2,0,0,1,0,1,0,1,0,1,
1,0,6,0,5,0,1,0,2,0,1,0,
};

#define yyyPermitUserAlloc  0 


void yyyfatal(msg)
  char *msg; 
{fprintf(stderr,msg);exit(-1);} 



#define yyyNSof   'n' 
#define yyyRCof   'r' 
#define yyyCLof   'c' 
#define yyySof    's' 
#define yyySSALof 'S' 
#define yyyRSof   'q' 
#define yyyTSof   't' 



void yyyHandleOverflow(which) 
  char which; 
  {char *msg1,*msg2; 
   long  oldSize,newSize; 
   switch(which) 
     {
      case yyyNSof   : 
           msg1 = "node storage overflow: ";
           oldSize = yyyMaxNbytesNodeStg; 
           break; 
      case yyyRCof   : 
           msg1 = "dependee count overflow: ";
           oldSize = yyyMaxNrefCounts; 
           break; 
      case yyyCLof   : 
           msg1 = "child list overflow: ";
           oldSize = yyyMaxNchildren; 
           break; 
      case yyySof    : 
           msg1 = "parse-tree stack overflow: ";
           oldSize = yyyMaxStackSize; 
           break; 
      case yyySSALof : 
           msg1 = "SSAL overflow: ";
           oldSize = yyySSALspaceSize; 
           break; 
      case yyyRSof   : 
           msg1 = "ready set overflow: ";
           oldSize = yyyRSmaxSize; 
           break; 
      case yyyTSof   : 
           msg1 = "traversal stack overflow: ";
           oldSize = yyyTravStackMaxSize; 
           break; 
      default        :;  
     }
   newSize = (3*oldSize)/2; 
   if (newSize < 100) newSize = 100; 
   fprintf(stderr,msg1); 
   fprintf(stderr,"size was %d.\n",oldSize); 
   if (yyyPermitUserAlloc) 
      msg2 = "     Try -Y%c%d option.\n"; 
      else 
      msg2 = "     Have to modify evaluator:  -Y%c%d.\n"; 
   fprintf(stderr,msg2,which,newSize); 
   exit(-1); 
  }



void yyySignalEnts(node,startP,stopP) 
  register yyyGNT *node; 
  register yyyFT *startP,*stopP;  
  {register yyyGNT *dumNode; 

   while (startP < stopP)  
     {
      if (!(*startP)) dumNode = node;  
         else dumNode = (node->cL)[(*startP)-1];   
      if (!(--((dumNode->refCountList)[*(startP+1)]
              ) 
           )
         ) 
         { 
          if (++yyyRSTop == yyyAfterRS) 
             {yyyHandleOverflow(yyyRSof); 
              break; 
             }
          yyyRSTop->node = dumNode; 
          yyyRSTop->whichSym = *startP;  
          yyyRSTop->wa = *(startP+1);  
         }  
      startP += 2;  
     }  
  } 




#define yyyCeiling(num,inc) (((inc) * ((num)/(inc))) + (((num)%(inc))?(inc):0)) 



int yyyAlignSize = 8;
int yyyNdSz[12];

int yyyNdPrSz[12];

typedef int yyyCopyType;

int yyyNdCopySz[12];
long yyyBiggestNodeSize = 0;

void yyyNodeSizeCalc()
  {int i;
   yyyGNSz = yyyCeiling(yyyGNSz,yyyAlignSize); 
   yyyNdSz[0] = 0;
   yyyNdSz[1] = sizeof(struct yyyT1);
   yyyNdSz[2] = sizeof(struct yyyT2);
   yyyNdSz[3] = sizeof(struct yyyT3);
   yyyNdSz[4] = sizeof(struct yyyT4);
   yyyNdSz[5] = sizeof(struct yyyT5);
   yyyNdSz[6] = sizeof(struct yyyT6);
   yyyNdSz[7] = sizeof(struct yyyT7);
   yyyNdSz[8] = sizeof(struct yyyT8);
   yyyNdSz[9] = sizeof(struct yyyT9);
   yyyNdSz[10] = sizeof(struct yyyT10);
   yyyNdSz[11] = sizeof(struct yyyT11);
   for (i=0;i<12;i++) 
       {yyyNdSz[i] = yyyCeiling(yyyNdSz[i],yyyAlignSize); 
        yyyNdPrSz[i] = yyyNdSz[i] + yyyGNSz;
        if (yyyBiggestNodeSize < yyyNdSz[i])
           yyyBiggestNodeSize = yyyNdSz[i];
        yyyNdCopySz[i] = yyyCeiling(yyyNdSz[i],sizeof(yyyCopyType)) / 
                         sizeof(yyyCopyType); 
       }
  }




void yyySolveAndSignal() {
register long yyyiDum,*yyypL;
register int yyyws,yyywa;
register yyyGNT *yyyRSTopN,*yyyRefN; 
register void *yyyRSTopNp; 


yyyRSTopNp = (yyyRSTopN = yyyRSTop->node)->parent;
yyyRefN= (yyyws = (yyyRSTop->whichSym))?((yyyGNT *)yyyRSTopNp):yyyRSTopN;
yyywa = yyyRSTop->wa; 
yyyRSTop--;
switch(yyyRefN->prodNum) {
case 1:  /***yacc rule 1***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 2:  /***yacc rule 2***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP6)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->out);
        break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 3:  /***yacc rule 3***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->in) = append((((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->in), (((yyyP5)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), CLASS_T);
        break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 4:  /***yacc rule 4***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->out) = (((yyyP6)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->out);
        break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->in) = append((((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in), (((yyyP1)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), INTERFACE_T);
            break;
    }
  break;
  }
break;
case 5:  /***yacc rule 5***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->out) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
        break;
    }
  break;
  }
break;
case 6:  /***yacc rule 6***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->out) = (((yyyP6)(((char *)((yyyRefN->cL)[5]))+yyyGNSz))->out);
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 5:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
        break;
    }
  break;
  case 6:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->in) = append((((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in), (((yyyP1)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name), METHOD_T);
            break;
    }
  break;
  }
break;
case 7:  /***yacc rule 7***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->out) = (((yyyP6)(((char *)((yyyRefN->cL)[7]))+yyyGNSz))->out);
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
        break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  case 7:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  case 8:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->in) = append((((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in), (((yyyP1)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name), METHOD_T);
            break;
    }
  break;
  }
break;
case 8:  /***yacc rule 8***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 9:  /***yacc rule 9***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 10:  /***yacc rule 10***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP5)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  case 6:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->in) = append_ignore_dup(duplicate_list((((yyyP5)(((char *)yyyRefN)+yyyGNSz))->in)), (((yyyP1)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), CLASS_T);
            break;
    }
  break;
  }
break;
case 11:  /***yacc rule 11***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 12:  /***yacc rule 12***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 13:  /***yacc rule 13***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 14:  /***yacc rule 14***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->methods) = merge((((yyyP4)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->methods), (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->method));
        
        break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    case 3:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->classname) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->classname);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->in) = merge((((yyyP4)(((char *)yyyRefN)+yyyGNSz))->in), (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->out));
            break;
    case 2:
(((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->classname) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->classname);
    break;
    }
  break;
  }
break;
case 15:  /***yacc rule 15***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 16:  /***yacc rule 16***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  case 6:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP8)(((char *)yyyRSTopN)+yyyGNSz))->in) = merge((((yyyP6)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->out), (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->in));
            break;
    }
  break;
  }
break;
case 17:  /***yacc rule 17***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 18:  /***yacc rule 18***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 19:  /***yacc rule 19***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 20:  /***yacc rule 20***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->out) = append((((yyyP6)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->out), (((yyyP5)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), PARAMETER_T);
        break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 21:  /***yacc rule 21***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 22:  /***yacc rule 22***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->out) = append((((yyyP6)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->out), (((yyyP5)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), PARAMETER_T);
        break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);  
            break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 23:  /***yacc rule 23***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP5)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 24:  /***yacc rule 24***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 25:  /***yacc rule 25***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP8)(((char *)yyyRSTopN)+yyyGNSz))->local_var_num) = (((yyyP8)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->local_var_num) + (((yyyP9)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->local_var_num); 

            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP8)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP8)(((char *)yyyRSTopN)+yyyGNSz))->in) = merge((((yyyP8)(((char *)yyyRefN)+yyyGNSz))->in), (((yyyP9)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->out));

            break;
    }
  break;
  }
break;
case 26:  /***yacc rule 26***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_RETURN, (((yyyP11)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), NULL);
            break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 27:  /***yacc rule 27***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->out) = merge((((yyyP8)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->out), (((yyyP8)(((char *)((yyyRefN->cL)[5]))+yyyGNSz))->out));

            break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP8)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  case 6:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP8)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 28:  /***yacc rule 28***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->out) = (((yyyP8)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->out);

            break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP8)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 29:  /***yacc rule 29***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->out) = (((yyyP8)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->out);

            break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP8)(((char *)yyyRSTopN)+yyyGNSz))->in) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 30:  /***yacc rule 30***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_ASSIGN, new_leaf_id_var(merge( (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in), (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->out)), (((yyyP1)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name)), (((yyyP11)(((char *)((yyyRefN->cL)[5]))+yyyGNSz))->tree));

            break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);

            break;
    }
  break;
  case 6:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 31:  /***yacc rule 31***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP9)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_ASSIGN, new_leaf_id_var((((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in), (((yyyP1)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)), (((yyyP11)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));

            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 32:  /***yacc rule 32***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP9)(((char *)yyyRefN)+yyyGNSz))->in);
            break;
    }
  break;
  }
break;
case 33:  /***yacc rule 33***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 34:  /***yacc rule 34***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 35:  /***yacc rule 35***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 36:  /***yacc rule 36***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 37:  /***yacc rule 37***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 38:  /***yacc rule 38***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 39:  /***yacc rule 39***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 40:  /***yacc rule 40***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_ADD, (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP11)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 41:  /***yacc rule 41***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_ADD, (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP11)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 42:  /***yacc rule 42***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_MUL, (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP11)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 43:  /***yacc rule 43***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_MUL, (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP11)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 44:  /***yacc rule 44***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_AND, (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP11)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 45:  /***yacc rule 45***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_AND, (((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP11)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 46:  /***yacc rule 46***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_SUB,(((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree),(((yyyP11)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 47:  /***yacc rule 47***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_LESS,(((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree),(((yyyP11)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 48:  /***yacc rule 48***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_EQUAL,(((yyyP11)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree),(((yyyP11)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 49:  /***yacc rule 49***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_NOT, (((yyyP11)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree),NULL);
            break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 50:  /***yacc rule 50***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_node(OP_NOT, (((yyyP11)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree),NULL);
            break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 51:  /***yacc rule 51***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP11)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 52:  /***yacc rule 52***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 53:  /***yacc rule 53***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 54:  /***yacc rule 54***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 55:  /***yacc rule 55***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->tree) = new_leaf_id_var((((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP1)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)); 
           
            break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 56:  /***yacc rule 56***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 57:  /***yacc rule 57***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    }
  break;
  case 5:  /**/
    switch (yyywa) {
    case 0:
(((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 6:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP11)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 58:  /***yacc rule 58***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 59:  /***yacc rule 59***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP10)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP11)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP10)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
} /* switch */ 

if (yyyws)  /* the just-solved instance was inherited. */ 
   {if (yyyRSTopN->prodNum) 
       {yyyiDum = yyyIIEL[yyyIIIEL[yyyRSTopN->prodNum]] + yyywa;
        yyySignalEnts(yyyRSTopN,yyyEntL + yyyIEL[yyyiDum],
                                yyyEntL + yyyIEL[yyyiDum+1]
                     );
       }
   } 
   else     /* the just-solved instance was synthesized. */ 
   {if ((char *)yyyRSTopNp >= yyyNodeSpace) /* node has a parent. */ 
       {yyyiDum = yyyIIEL[yyyIIIEL[((yyyGNT *)yyyRSTopNp)->prodNum] + 
                          yyyRSTopN->whichSym 
                         ] + 
                  yyywa;
        yyySignalEnts((yyyGNT *)yyyRSTopNp,
                      yyyEntL + yyyIEL[yyyiDum],
                      yyyEntL + yyyIEL[yyyiDum+1] 
                     );
       } 
       else   /* node is still on the stack--it has no parent yet. */ 
       {yyypL = &(((struct yyyStackItem *)yyyRSTopNp)->solvedSAlist); 
        if (yyySSALCfreeList == yyyLambdaSSAL) 
           {yyySSALspace[yyyNewSSALC].next = *yyypL; 
            if ((*yyypL = yyyNewSSALC++) == yyySSALspaceSize) 
               yyyHandleOverflow(yyySSALof); 
           }  
           else
           {yyyiDum = yyySSALCfreeList; 
            yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
            yyySSALspace[yyyiDum].next = *yyypL; 
            *yyypL = yyyiDum;  
           } 
        yyySSALspace[*yyypL].attrbNum = yyywa; 
       } 
   }

} /* yyySolveAndSignal */ 






#define condStg unsigned int conds;
#define yyyClearConds {yyyTST->conds = 0;}
#define yyySetCond(n) {yyyTST->conds += (1<<(n));}
#define yyyCond(n) ((yyyTST->conds & (1<<(n)))?1:0)



struct yyyTravStackItem {yyyGNT *node; 
                         char isReady;
                         condStg
                        };



void yyyDoTraversals()
{struct yyyTravStackItem *yyyTravStack,*yyyTST,*yyyAfterTravStack;
 register yyyGNT *yyyTSTn,**yyyCLptr1,**yyyCLptr2; 
 register int yyyi,yyyRL,yyyPass;

 if (!yyyYok) return;
 if ((yyyTravStack = 
                 ((struct yyyTravStackItem *) 
                  malloc((yyyTravStackMaxSize * 
                                  sizeof(struct yyyTravStackItem)
                                 )
                        )
                 )
     )
     == 
     (struct yyyTravStackItem *)NULL
    ) 
    {fprintf(stderr,"malloc error in traversal stack allocation\n"); 
     exit(-1); 
    } 

yyyAfterTravStack = yyyTravStack + yyyTravStackMaxSize; 
yyyTravStack++; 


for (yyyi=0; yyyi<4; yyyi++) {
yyyTST = yyyTravStack; 
yyyTST->node = yyyStack->node;
yyyTST->isReady = 0;
yyyClearConds

while(yyyTST >= yyyTravStack)
  {yyyTSTn = yyyTST->node;
   if (yyyTST->isReady)  
      {yyyPass = 1;
       goto yyyTravSwitch;
yyyTpop:
       yyyTST--;
      } 
      else 
      {yyyPass = 0;
       goto yyyTravSwitch;
yyyTpush:
       yyyTST->isReady = 1;  
       if (yyyTSTn->prodNum)
          if (yyyRL)
             {yyyCLptr2 = yyyTSTn->cL; 
              while 
                ((yyyCLptr2 != yyyNextCLspace)
                 &&
                 ((*yyyCLptr2)->parent == yyyTSTn) 
                )  
                {if (++yyyTST == yyyAfterTravStack)
                    yyyHandleOverflow(yyyTSof);
                    else
                    {yyyTST->node = *yyyCLptr2; 
                     yyyTST->isReady = 0; 
                     yyyClearConds
                    }
                 yyyCLptr2++; 
                } 
             } /* right to left */
             else  /* left to right */
             {yyyCLptr1 = yyyCLptr2 = yyyTSTn->cL; 
              while 
                ((yyyCLptr2 != yyyNextCLspace)
                 &&
                 ((*yyyCLptr2)->parent == yyyTSTn) 
                )  
                yyyCLptr2++; 
              while (yyyCLptr2-- > yyyCLptr1)
                if (++yyyTST == yyyAfterTravStack)
                   yyyHandleOverflow(yyyTSof);
                   else
                   {yyyTST->node = *yyyCLptr2; 
                    yyyTST->isReady = 0; 
                    yyyClearConds
                   }
             } /* left to right */
      } /* else */
   continue;
yyyTravSwitch:
				switch(yyyTSTn->prodNum)	{
case 1:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 2:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 3:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 4:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 5:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 6:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 7:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 8:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 9:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 10:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { fprintf(stdout, ".globl %s \n%s: ",(((yyyP1)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->name),(((yyyP1)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->name)); asm_print_class_table((((yyyP5)(((char *)yyyTSTn)+yyyGNSz))->name), (((yyyP5)(((char *)yyyTSTn)+yyyGNSz))->in), (((yyyP4)(((char *)((yyyTSTn->cL)[5]))+yyyGNSz))->methods)); fprintf(stdout, "\n");
    }
				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 11:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 12:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { is_visible((((yyyP10)(((char *)yyyTSTn)+yyyGNSz))->ids), (((yyyP1)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->name), INTERFACE_T); 
    }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 13:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 14:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 15:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 16:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { is_visible((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->in), (((yyyP1)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->name), METHOD_T); 

        }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if ( (1)) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { }
if (yyyCond(1) != yyyPass) { asm_function_enter((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->classname), (((yyyP1)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->name), (((yyyP8)(((char *)((yyyTSTn->cL)[5]))+yyyGNSz))->local_var_num));
    }
				break;
					}
		break;
			}

break;
case 17:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 18:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { is_visible((((yyyP10)(((char *)yyyTSTn)+yyyGNSz))->ids), (((yyyP1)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name), INTERFACE_T); 
    }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 19:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 20:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 21:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 22:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 23:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 24:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 25:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if ( (1)) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { }
if (yyyCond(1) != yyyPass) { if((((yyyP9)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree) != NULL) {burm_label((((yyyP9)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)); burm_reduce((((yyyP9)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree),1);}
    }
				break;
					}
		break;
			}

break;
case 26:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP9)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg = "rax"; (((yyyP11)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP9)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 27:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 28:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 29:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 30:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP9)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg = "rax"; (((yyyP11)(((char *)((yyyTSTn->cL)[5]))+yyyGNSz))->tree)->reg = (((yyyP9)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 31:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { is_visible_var((((yyyP9)(((char *)yyyTSTn)+yyyGNSz))->in), (((yyyP1)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name)); 
        }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP9)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg = "rax"; (((yyyP11)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = (((yyyP9)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 32:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 33:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; 
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 34:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; 
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 35:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; 
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 36:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; 
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 37:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; 
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 38:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; 
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 39:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { is_visible((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->ids), (((yyyP1)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->name), CLASS_T);
    }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 40:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; (((yyyP11)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = get_next_reg((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 41:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; (((yyyP11)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = get_next_reg((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 42:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; (((yyyP11)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = get_next_reg((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 43:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; (((yyyP11)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = get_next_reg((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 44:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; (((yyyP11)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = get_next_reg((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 45:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; (((yyyP11)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = get_next_reg((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 46:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; (((yyyP11)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = get_next_reg((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);        
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 47:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; (((yyyP11)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = get_next_reg((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);        
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 48:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg; (((yyyP11)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = get_next_reg((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);        
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 49:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 50:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP11)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;     
    }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 51:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 52:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 53:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 54:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { is_visible((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->ids), (((yyyP1)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->name), INTERFACE_T);
    }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 55:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { is_visible_var((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->ids), (((yyyP1)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name));
    }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 56:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { is_visible((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->ids), (((yyyP1)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->name), METHOD_T);
    }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 57:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { is_visible((((yyyP11)(((char *)yyyTSTn)+yyyGNSz))->ids), (((yyyP1)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->name), METHOD_T);
    }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 58:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 59:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
								} /* switch */ 
   if (yyyPass) goto yyyTpop; else goto yyyTpush; 
  } /* while */ 
 } /* for */ 
} /* yyyDoTraversals */ 

void yyyExecuteRRsection()  {
   int yyyi; 
   long yyynRefCounts; 
   long cycleSum = 0;
   long nNZrc = 0;

   if (!yyyYok) return; 
   yyynRefCounts = yyyNextRCLspace - yyyRefCountListSpace; 
   for (yyyi=0;yyyi<yyynRefCounts;yyyi++) 
     if (yyyRefCountListSpace[yyyi])
        {cycleSum += yyyRefCountListSpace[yyyi]; nNZrc++;} 
   if (nNZrc) 
      {
       fprintf(stderr,"\n\n\n**********\n");
       fprintf(stderr,
               "cycle detected in completed parse tree");
       fprintf(stderr,
               " after decoration.\n");
       fprintf(stderr,
         "searching parse tree for %d unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTravAux(yyyStackTop->node);
      }
   yyyDoTraversals();
} /* yyyExecuteRRsection */ 



yyyWAT yyyLRCIL[2] = {0,0,
};



void yyyYoxInit()                                  /*stock*/  
  { 

   yyyNodeSizeCalc(); 

   if ((yyyTermBuffer.snBufPtr = 
        (char *) malloc((yyyBiggestNodeSize + sizeof(yyyCopyType)))
       )  
       == 
       ((char *) NULL) 
      )   
      yyyfatal("malloc error in yyyTermBuffer allocation\n");  
  
  
   yyyNbytesStackStg = yyyMaxStackSize*sizeof(struct yyyStackItem); 
   yyyNbytesStackStg = ((yyyNbytesStackStg/yyyAlignSize)+1)*yyyAlignSize;  
   if ((yyyNodeAndStackSpace = 
        (char *) malloc((yyyNbytesStackStg + 
                                 yyyMaxNbytesNodeStg + 
                                 yyyGNSz + 
                                 yyyBiggestNodeSize + 
                                 sizeof(yyyCopyType) 
                                )
                       )
       )  
       == 
       ((char *) NULL) 
      )   
      yyyfatal("malloc error in ox node and stack space allocation\n");
   yyyStack = (struct yyyStackItem *) yyyNodeAndStackSpace; 
   yyyAfterStack = yyyStack + yyyMaxStackSize;  
   yyyNodeSpace = yyyNodeAndStackSpace + yyyNbytesStackStg;
   yyyAfterNodeSpace = yyyNodeSpace + yyyMaxNbytesNodeStg;
 
 
   if ((yyyRS = (struct yyyRSitem *) 
         malloc(((yyyRSmaxSize+1)*sizeof(struct yyyRSitem)))
       )  
       == 
       ((struct yyyRSitem *) NULL) 
      )   
      yyyfatal("malloc error in ox ready set space allocation\n");  
   yyyRS++; 
   yyyAfterRS = yyyRS + yyyRSmaxSize; 

 
   if ((yyyChildListSpace = 
        (yyyGNT **) malloc((yyyMaxNchildren*sizeof(yyyGNT *)))
       )  
       == 
       ((yyyGNT **) NULL) 
      )   
      yyyfatal("malloc error in ox child list space allocation\n");  
   yyyAfterChildListSpace = yyyChildListSpace + yyyMaxNchildren; 

 
   if ((yyyRefCountListSpace = 
        (yyyRCT *) malloc((yyyMaxNrefCounts * sizeof(yyyRCT)))
       )  
       == 
       ((yyyRCT *) NULL) 
      )   
      yyyfatal("malloc error in ox reference count list space allocation\n");  
   yyyAfterRefCountListSpace = yyyRefCountListSpace + yyyMaxNrefCounts;  
  
 
   if ((yyySSALspace = (struct yyySolvedSAlistCell *) 
          malloc(((yyySSALspaceSize+1) * 
                          sizeof(struct yyySolvedSAlistCell))
                         ) 
       ) 
       == 
       ((struct yyySolvedSAlistCell *) NULL) 
      ) 
      yyyfatal("malloc error in stack solved list space allocation\n"); 
  } /* yyyYoxInit */ 



void yyyYoxReset() 
  { 
   yyyTermBuffer.isEmpty = 1; 
   yyyStackTop = yyyStack; 
   while (yyyStackTop != yyyAfterStack) 
     (yyyStackTop++)->solvedSAlist = yyyLambdaSSAL; 
   yyyStackTop = yyyStack - 1; 
   yyyNextNodeSpace = yyyNodeSpace; 
   yyyRSTop = yyyRS - 1; 
   yyyNextCLspace = yyyChildListSpace;
   yyyNextRCLspace = yyyRefCountListSpace; 
  }  



void yyyDecorate() 
  { 
   while (yyyRSTop >= yyyRS) 
      yyySolveAndSignal();  
  } 



void yyyShift() 
  {yyyRCT *rcPdum; 
   register yyyCopyType *CTp1,*CTp2,*CTp3; 
   register yyyWAT *startP,*stopP;  

   if ((++yyyStackTop) == yyyAfterStack) 
      yyyHandleOverflow(yyySof);
   CTp2 = (yyyCopyType *)(yyyStackTop->oldestNode = 
                          yyyStackTop->node = 
                          (yyyGNT *)yyyNextNodeSpace 
                         ); 
   yyyTermBuffer.isEmpty = 1;
   ((yyyGNT *)CTp2)->parent = (void *)yyyStackTop; 
   ((yyyGNT *)CTp2)->cL = yyyNextCLspace;  
   rcPdum = ((yyyGNT *)CTp2)->refCountList = yyyNextRCLspace;  
   ((yyyGNT *)CTp2)->prodNum = 0; 
   if ((yyyNextRCLspace += yyyTermBuffer.nAttrbs) 
       > 
       yyyAfterRefCountListSpace 
      ) 
      yyyHandleOverflow(yyyRCof); 
   startP = yyyTermBuffer.startP;  
   stopP = yyyTermBuffer.stopP;  
   while (startP < stopP) rcPdum[*(startP++)] = 0; 
   if ((yyyNextNodeSpace += yyyNdPrSz[yyyTermBuffer.typeNum]) 
       > 
       yyyAfterNodeSpace 
      ) 
      yyyHandleOverflow(yyyNSof);  
   CTp1 = (yyyCopyType *)(yyyTermBuffer.snBufPtr); 
   CTp2 = (yyyCopyType *)(((char *)CTp2) + yyyGNSz); 
   CTp3 = CTp2 + yyyNdCopySz[yyyTermBuffer.typeNum]; 
   while (CTp2 < CTp3) *CTp2++ = *CTp1++; 
  } 



void yyyGenIntNode() 
  {register yyyWST i;
   register struct yyyStackItem *stDum;  
   register yyyGNT *gnpDum; 

   if ((stDum = (yyyStackTop -= (yyyRHSlength-1))) >= yyyAfterStack) 
      yyyHandleOverflow(yyySof);
   yyySTsn = ((char *)(yyySTN = (yyyGNT *)yyyNextNodeSpace)) + yyyGNSz; 
   yyySTN->parent       =  (void *)yyyStackTop;  
   yyySTN->cL           =  yyyNextCLspace; 
   yyySTN->refCountList =  yyyNextRCLspace; 
   yyySTN->prodNum      =  yyyProdNum; 
   if ((yyyNextCLspace+yyyRHSlength) > yyyAfterChildListSpace) 
      yyyHandleOverflow(yyyCLof); 
   for (i=1;i<=yyyRHSlength;i++) 
     {gnpDum = *(yyyNextCLspace++) = (stDum++)->node;  
      gnpDum->whichSym = i;  
      gnpDum->parent = (void *)yyyNextNodeSpace; 
     } 
   if ((yyyNextRCLspace += yyyNattrbs) > yyyAfterRefCountListSpace) 
      yyyHandleOverflow(yyyRCof); 
   if ((yyyNextNodeSpace += yyyNdPrSz[yyyTypeNum]) > yyyAfterNodeSpace) 
      yyyHandleOverflow(yyyNSof);  
  } 



#define yyyDECORfREQ 50 



void yyyAdjustINRC(startP,stopP) 
  register yyyFT *startP,*stopP;
  {yyyWST i;
   long SSALptr,SSALptrHead,*cPtrPtr; 
   long *pL; 
   struct yyyStackItem *stDum;  
   yyyGNT *gnpDum; 
   long iTemp;
   register yyyFT *nextP;
   static unsigned short intNodeCount = yyyDECORfREQ;

   nextP = startP;
   while (nextP < stopP) 
     {if ((*nextP) == yyyR)  
         {(yyySTN->refCountList)[*(nextP+1)] = *(nextP+2);
         } 
         else 
         {(((yyySTN->cL)[*nextP])->refCountList)[*(nextP+1)] = *(nextP+2);
         } 
      nextP += 3;  
     }
   pL = yyyIIEL + yyyIIIEL[yyyProdNum]; 
   stDum = yyyStackTop;  
   for (i=1;i<=yyyRHSlength;i++) 
     {pL++; 
      SSALptrHead = SSALptr = *(cPtrPtr = &((stDum++)->solvedSAlist)); 
      if (SSALptr != yyyLambdaSSAL) 
         {*cPtrPtr = yyyLambdaSSAL; 
          do 
            {
             iTemp = (*pL+yyySSALspace[SSALptr].attrbNum);
             yyySignalEnts(yyySTN,
                           yyyEntL + yyyIEL[iTemp],
                           yyyEntL + yyyIEL[iTemp+1]
                          );  
             SSALptr = *(cPtrPtr = &(yyySSALspace[SSALptr].next)); 
            } 
            while (SSALptr != yyyLambdaSSAL);  
          *cPtrPtr = yyySSALCfreeList;  
          yyySSALCfreeList = SSALptrHead;  
         } 
     } 
   nextP = startP + 2;
   while (nextP < stopP) 
     {if (!(*nextP))
         {if ((*(nextP-2)) == yyyR)  
             {pL = &(yyyStackTop->solvedSAlist); 
              if (yyySSALCfreeList == yyyLambdaSSAL) 
                 {yyySSALspace[yyyNewSSALC].next = *pL; 
                  if ((*pL = yyyNewSSALC++) == yyySSALspaceSize) 
                     yyyHandleOverflow(yyySSALof); 
                 }  
                 else
                 {iTemp = yyySSALCfreeList; 
                  yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
                  yyySSALspace[iTemp].next = *pL; 
                  *pL = iTemp;  
                 } 
              yyySSALspace[*pL].attrbNum = *(nextP-1); 
             } 
             else 
             {if ((gnpDum = (yyySTN->cL)[*(nextP-2)])->prodNum != 0)
                 {
                  iTemp = yyyIIEL[yyyIIIEL[gnpDum->prodNum]] + *(nextP-1);
                  yyySignalEnts(gnpDum, 
                                yyyEntL + yyyIEL[iTemp],  
                                yyyEntL + yyyIEL[iTemp+1] 
                               );    
                 }  
             } 
         } 
      nextP += 3; 
     } 
   yyyStackTop->node = yyySTN;
   if (!yyyRHSlength) yyyStackTop->oldestNode = yyySTN; 
   if (!--intNodeCount) 
      {intNodeCount = yyyDECORfREQ; 
       yyyDecorate(); 
      } 
  } 



void yyyPrune(prodNum) 
  long prodNum;
  {  
   int i,n; 
   register char *cp1,*cp2;  
   register yyyRCT *rcp1,*rcp2,*rcp3;  
   long cycleSum = 0;
   long nNZrc = 0;
   yyyRCT *tempNextRCLspace;
   
   yyyDecorate();
   tempNextRCLspace = yyyNextRCLspace;
   yyyNextRCLspace = 
     (rcp1 = rcp2 = (yyyStackTop->oldestNode)->refCountList) + yyyNattrbs;
   rcp3 = (yyyStackTop->node)->refCountList; 
   while (rcp2 < rcp3) 
     if (*rcp2++) {cycleSum += *(rcp2 - 1); nNZrc++;} 
   if (nNZrc) 
      {
       fprintf(stderr,"\n\n\n----------\n");
       fprintf(stderr,
         "cycle detected during pruning of a subtree\n");
       fprintf(stderr,
         "  at whose root production %d is applied.\n",prodNum);
       yyyNextRCLspace = tempNextRCLspace; 
       fprintf(stderr,
         "prune aborted: searching subtree for %d unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTrav(yyyStackTop->node);
       return; 
      }
   for (i=0;i<yyyNattrbs;i++) rcp1[i] = rcp3[i]; 
   yyyNextCLspace = (yyyStackTop->oldestNode)->cL; 
   yyyNextNodeSpace = (char *)(yyyStackTop->oldestNode) + 
                      (n = yyyNdPrSz[yyyTypeNum]);
   cp1 = (char *)yyyStackTop->oldestNode; 
   cp2 = (char *)yyyStackTop->node; 
   for (i=0;i<n;i++) *cp1++ = *cp2++; 
   yyyStackTop->node = yyyStackTop->oldestNode; 
   (yyyStackTop->node)->refCountList = rcp1; 
   (yyyStackTop->node)->cL = yyyNextCLspace; 
  } 



void yyyGenLeaf(nAttrbs,typeNum,startP,stopP) 
  int nAttrbs,typeNum; 
  yyyWAT *startP,*stopP; 
  {
   if  (!(yyyTermBuffer.isEmpty)) yyyShift(); 
   yyyTermBuffer.isEmpty = 0;
   yyyTermBuffer.typeNum = typeNum; 
   yyyTermBuffer.nAttrbs = nAttrbs; 
   yyyTermBuffer.startP = startP; 
   yyyTermBuffer.stopP = stopP; 
   
  } 



void yyyerror()
  {yyyYok = 0; 
  } 



/* read the command line for changes in sizes of 
                  the evaluator's data structures */
void yyyCheckForResizes(argc,argv) 
  int argc; 
  char *argv[]; 
  {int i; 
   long dum; 
 
   if (!yyyPermitUserAlloc) return; 
   for (i=1;i<argc;i++) 
     { 
      if ((argv[i][0] != '-') || (argv[i][1] != 'Y')) continue; 
      if (strlen(argv[i]) < 4) goto yyyErrO1; 
      if (sscanf(argv[i]+3,"%d",&dum) != 1) goto yyyErrO1;
      if (dum < 2) dum = 2;
      switch (argv[i][2]) 
        {case yyyNSof:   yyyMaxNbytesNodeStg = dum; break; 
         case yyyRCof:   yyyMaxNrefCounts    = dum; break; 
         case yyyCLof:   yyyMaxNchildren     = dum; break; 
         case yyySof:    yyyMaxStackSize     = dum; break; 
         case yyySSALof: yyySSALspaceSize    = dum; break; 
         case yyyRSof:   yyyRSmaxSize        = dum; break; 
         case yyyTSof:   yyyTravStackMaxSize = dum; break; 
         default : goto yyyErrO1; 
        }
      continue;  
   yyyErrO1 : fprintf(stderr,"invalid command line option: %s\n",
                             argv[i] 
                     ); 
     } 
  } 
   
   
   


#define yyyLastProdNum 59


#define yyyNsorts 11


int yyyProdsInd[] = {
   0,
   0,   1,   5,   9,  15,  16,  23,  32,  33,  37,
  45,  46,  49,  50,  54,  59,  67,  69,  71,  72,
  75,  76,  80,  84,  85,  89,  92, 100, 106, 112,
 119, 123, 125, 127, 129, 131, 133, 135, 137, 140,
 144, 148, 152, 156, 160, 164, 168, 172, 176, 179,
 182, 186, 188, 190, 193, 195, 201, 209, 210,
 214,
};


int yyyProds[][2] = {
{1013,   3},{1013,   3},{1013,   3},{ 257,   6},{ 548,   0},
{1013,   3},{1013,   3},{ 703,   5},{ 548,   0},{ 257,   6},
{  34,   0},{ 619,   1},{ 540,   0},{  83,   6},{ 124,   0},
{  83,   6},{  83,   6},{ 619,   1},{ 397,   0},{ 404,   0},
{ 540,   0},{ 852,  10},{  83,   6},{  83,   6},{ 619,   1},
{ 397,   0},{ 663,  10},{ 852,  10},{ 404,   0},{ 540,   0},
{ 852,  10},{  83,   6},{ 663,  10},{ 663,  10},{ 663,  10},
{ 852,  10},{ 428,   0},{ 703,   5},{ 479,   0},{ 619,   1},
{1010,   0},{ 492,  10},{ 540,   0},{ 278,   4},{ 124,   0},
{ 492,  10},{ 492,  10},{ 492,  10},{ 619,   1},{ 278,   4},
{ 278,   4},{ 811,   7},{ 548,   0},{ 278,   4},{ 811,   7},
{ 933,   0},{ 619,   1},{ 540,   0},{ 852,  10},{ 811,   7},
{1119,   0},{ 619,   1},{ 397,   0},{ 114,   6},{ 404,   0},
{  63,   8},{ 124,   0},{ 852,  10},{1152,   0},{ 852,  10},
{ 619,   1},{ 114,   6},{ 114,   6},{ 142,   6},{ 769,   5},
{ 142,   6},{ 142,   6},{ 142,   6},{ 769,   5},{ 428,   0},
{ 769,   5},{ 619,   1},{ 540,   0},{ 852,  10},{  63,   8},
{  63,   8},{ 246,   9},{ 548,   0},{  63,   8},{ 246,   9},
{ 838,   0},{ 430,  11},{ 246,   9},{ 635,   0},{ 430,  11},
{ 361,   0},{  63,   8},{ 815,   0},{  63,   8},{ 124,   0},
{ 246,   9},{ 635,   0},{ 430,  11},{ 361,   0},{  63,   8},
{ 124,   0},{ 246,   9},{ 911,   0},{ 430,  11},{ 702,   0},
{  63,   8},{ 124,   0},{ 246,   9},{ 933,   0},{ 619,   1},
{ 540,   0},{ 852,  10},{ 225,   0},{ 430,  11},{ 246,   9},
{ 619,   1},{ 225,   0},{ 430,  11},{ 246,   9},{ 430,  11},
{ 430,  11},{1074,  11},{ 430,  11},{1053,  11},{ 430,  11},
{1122,  11},{ 430,  11},{1054,  11},{ 430,  11},{1002,  11},
{ 430,  11},{ 997,  11},{ 430,  11},{  46,   0},{ 619,   1},
{1053,  11},{ 997,  11},{ 420,   0},{ 997,  11},{1053,  11},
{1053,  11},{ 420,   0},{ 997,  11},{1122,  11},{ 997,  11},
{ 412,   0},{ 997,  11},{1122,  11},{1122,  11},{ 412,   0},
{ 997,  11},{1054,  11},{ 997,  11},{ 120,   0},{ 997,  11},
{1054,  11},{1054,  11},{ 120,   0},{ 997,  11},{1002,  11},
{ 997,  11},{ 436,   0},{ 997,  11},{1002,  11},{ 997,  11},
{ 556,   0},{ 997,  11},{1002,  11},{ 997,  11},{ 564,   0},
{ 997,  11},{1074,  11},{1165,   0},{ 997,  11},{1074,  11},
{1165,   0},{1074,  11},{ 997,  11},{ 397,   0},{ 430,  11},
{ 404,   0},{ 997,  11},{ 765,   2},{ 997,  11},{ 267,   0},
{ 997,  11},{ 701,   0},{ 619,   1},{ 997,  11},{ 619,   1},
{ 997,  11},{ 997,  11},{ 444,   0},{ 619,   1},{ 397,   0},
{ 404,   0},{ 997,  11},{ 997,  11},{ 444,   0},{ 619,   1},
{ 397,   0},{ 418,  10},{ 430,  11},{ 404,   0},{ 418,  10},
{ 418,  10},{ 418,  10},{ 430,  11},{ 428,   0},
};


int yyySortsInd[] = {
  0,
  0,  1,  2,  3,  6,  8, 10, 14, 17, 21,
 22,
 24,
};


int yyySorts[] = {
  381,  423,  987,  987,  396,  463,  987,  381,  987, 1088,
  987, 1088,  143,  463,  987, 1088,  184,  987, 1088,  121,
  184,  882,  882,  121,
};



char *yyyStringTab[] = {
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"INTERFACE",
0,0,0,0,0,
"ADD",0,0,0,0,
0,"NEW",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"Stats",0,
0,"SUB",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"Abstractmethod",0,
"T",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"n",0,0,"Pars",
0,"s",0,0,0,
"AND","tree","y",0,"END",
0,0,0,0,0,
0,"reg",0,0,0,
0,0,0,0,0,
0,0,"Helppars","method",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"strtoul",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"local_var_num",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"globl",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"NULL","reduce",0,
"ASSIGN",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"Stat",0,0,0,
0,0,0,0,0,
0,0,"Interface",0,0,
0,0,0,0,0,
0,0,"THIS",0,0,
0,0,0,0,0,
0,0,0,"Multmembers",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"THEN",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"name",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"methods","'('",0,0,
0,0,0,0,"')'",
0,0,0,0,0,
0,0,"'*'",0,0,
0,"strdup",0,"Multexpr",0,
"'+'",0,"OBJ","val",0,
"label",0,"duplicate","','",0,
"Expr","LESS",0,0,0,
0,"'-'",0,0,0,
0,0,"node_t",0,"'.'",
0,0,0,0,0,
0,"fprintf",0,0,0,
0,0,0,0,0,
0,0,0,"classname",0,
0,0,0,0,0,
0,0,"tree_t",0,0,
0,0,0,0,"CLASS",
0,0,0,0,0,
0,"leaf",0,0,0,
0,0,"Multids",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"ignore",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"':'",0,0,0,0,
0,0,0,"';'",0,
0,0,0,0,0,
0,"'<'",0,0,0,
0,0,"PARAMETER",0,"'='",
0,0,0,"gen",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"asm",0,0,0,0,
0,0,0,0,"ID",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"IF",0,0,0,"num",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"Abstractmethodtype",0,
0,0,0,0,0,
0,0,"stdout",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"MUL","NUL","DO","Class",0,
"EQUAL",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"OP",0,0,0,
0,0,0,0,0,
0,0,0,0,"class",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"print",0,0,0,
"NUM",0,0,0,"Par",
0,0,0,0,0,
0,0,0,0,0,
0,0,"list",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"var",0,"node",
0,"Member",0,0,0,
"ELSE",0,0,0,0,
0,"dup",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"RETURN",0,
0,0,0,0,0,
0,0,0,0,0,
"next",0,"Type",0,0,
0,0,"VARIABLE",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"ids",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"function","enter","id",0,
0,"WHILE",0,0,0,
0,0,0,0,0,
0,0,0,"if",0,
0,0,0,0,0,
0,0,0,"VAR",0,
"vis",0,0,"append",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"get",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"in",0,0,
0,0,0,0,0,
0,0,"Term",0,0,
0,0,"Otherop",0,0,
0,0,0,0,0,
"IMPLEMENTS",0,0,"Program",0,
0,0,0,0,0,
0,0,0,"yytext",0,
0,0,"is",0,0,
0,0,0,0,"merge",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"Plusterm","Andterm",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"Notterm",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"out",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"table",0,0,
0,0,0,0,0,
0,0,0,0,"METHOD",
0,0,"Multterm",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"burm",
0,0,0,0,0,
0,0,0,0,0,
0,"new","INT",0,0,
0,0,0,0,0,
0,0,0,0,0,
"NOT",0,0,0,0,
0,0,0,0,0,
"visible",0,0,0,0,
0,0,0,"classtable",0,
0,0,"rax",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,
};



#define yyySizeofProd(num) (yyyProdsInd[(num)+1] - yyyProdsInd[(num)])

#define yyyGSoccurStr(prodNum,symPos) \
   (yyyStringTab[yyyProds[yyyProdsInd[(prodNum)] + (symPos)][0]])

#define yyySizeofSort(num) (yyySortsInd[(num)+1] - yyySortsInd[(num)])

#define yyySortOf(prodNum,symPos) \
  (yyyProds[yyyProdsInd[(prodNum)] + (symPos)][1]) 

#define yyyAttrbStr(prodNum,symPos,attrbNum)                      \
  (yyyStringTab[yyySorts[yyySortsInd[yyySortOf(prodNum,symPos)] + \
                         (attrbNum)                               \
                        ]                                         \
               ]                                                  \
  )



void yyyShowProd(i)
  int i;
  {int j,nSyms;

   nSyms = yyySizeofProd(i);
   for (j=0; j<nSyms; j++)
     {
      fprintf(stderr,"%s",yyyGSoccurStr(i,j));
      if (j == 0) fprintf(stderr," : "); else fprintf(stderr," ");
     }
   fprintf(stderr,";\n");
  }



void yyyShowProds()
  {int i; for (i=1; i<=yyyLastProdNum; i++) yyyShowProd(i);}



void yyyShowSymsAndSorts()
  {int i; 

   for (i=1; i<=yyyLastProdNum; i++) 
     {int j, nSyms;

      fprintf(stderr,
              "\n\n\n---------------------------------- %3.1d\n",i);
      /* yyyShowProd(i); */ 
      nSyms = yyySizeofProd(i); 
      for (j=0; j<nSyms; j++) 
        {int k, sortSize;

         fprintf(stderr,"%s\n",yyyGSoccurStr(i,j));
         sortSize = yyySizeofSort(yyySortOf(i,j));
         for (k=0; k<sortSize; k++) 
            fprintf(stderr,"  %s\n",yyyAttrbStr(i,j,k));
         if (j == 0) fprintf(stderr,"->\n"); 
              else 
              fprintf(stderr,"\n"); 
        }
     }
  }



void yyyCheckNodeInstancesSolved(np)
  yyyGNT *np;
  {int mysort,sortSize,i,prodNum,symPos,inTerminalNode;
   int nUnsolvedInsts = 0;

   if (np->prodNum != 0)
     {inTerminalNode = 0;
      prodNum = np->prodNum;
      symPos = 0;
     }
   else
     {inTerminalNode = 1;
      prodNum = ((yyyGNT *)(np->parent))->prodNum;
      symPos = np->whichSym;
     }
   mysort = yyySortOf(prodNum,symPos);
   sortSize = yyySizeofSort(mysort);
   for (i=0; i<sortSize; i++)
     if ((np->refCountList)[i] != 0) nUnsolvedInsts += 1;
   if (nUnsolvedInsts)
     {fprintf(stderr,
      "\nFound node that has %d unsolved attribute instance(s).\n",
              nUnsolvedInsts
             );
      fprintf(stderr,"Node is labeled \"%s\".\n",
             yyyGSoccurStr(prodNum,symPos));
      if (inTerminalNode)
        {fprintf(stderr,
                 "Node is terminal.  Its parent production is:\n  ");
         yyyShowProd(prodNum);
        }
      else
        {fprintf(stderr,"Node is nonterminal.  ");
         if (((char *)(np->parent)) >= yyyNodeSpace)
           {fprintf(stderr,
                    "Node is %dth child in its parent production:\n  ",
                   np->whichSym
                  );
            yyyShowProd(((yyyGNT *)(np->parent))->prodNum);
           }
         fprintf(stderr,
                 "Node is on left hand side of this production:\n  ");
         yyyShowProd(np->prodNum);
        }
      fprintf(stderr,"The following instances are unsolved:\n");
      for (i=0; i<sortSize; i++)
        if ((np->refCountList)[i] != 0)
          fprintf(stderr,"     %-16s still has %1d dependencies.\n",
                  yyyAttrbStr(prodNum,symPos,i),(np->refCountList)[i]);
     }
  }



void yyyUnsolvedInstSearchTravAux(pNode)
  yyyGNT *pNode;
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCheckNodeInstancesSolved(pNode); 
   yyyCLpdum = pNode->cL;
   while
     ((yyyCLpdum != yyyNextCLspace) && ((*yyyCLpdum)->parent == pNode))
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



void yyyUnsolvedInstSearchTrav(pNode)
  yyyGNT *pNode;
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCLpdum = pNode->cL;
   while
     ((yyyCLpdum != yyyNextCLspace) && ((*yyyCLpdum)->parent == pNode))
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



