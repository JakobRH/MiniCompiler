/* output from Ox version G1.04 */
%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
#include "list.h"
#include "tree.h"
#include "code_gen.h"
%}

number          [0-9]+

hexnumber       [0-9][0-9a-fA-F]*H

comment         "/*"(([^"*"]|"*"+[^"*/"])*"*"+"/") 

identifier      [a-zA-Z][0-9a-zA-Z]*

whitespace      [\n\t ]


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
%%

"interface"     {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return INTERFACE;}
"end"           {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return END;}
"class"         {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return CLASS;}
"implements"    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return IMPLEMENTS;}
"var"           {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return VAR;}
"method"        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return METHOD;}
"int"           {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return INT;}
"return"        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return RETURN;}
"if"            {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return IF;}
"then"          {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return THEN;}
"else"          {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return ELSE;}
"while"         {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return WHILE;}
"do"            {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return DO;}
"and"           {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return AND;}
"not"           {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return NOT;}
"new"           {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return NEW;}
"this"          {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return THIS;}
"null"          {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return NUL;}

";"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return ';';}
":"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return ':';}
"("		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return '(';}
")"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return ')';}
"."		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return '.';}
","		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return ',';}
":="		{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return ASSIGN;}
"+"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return '+';}
"*"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return '*';}
"-"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return '-';}
"<"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return '<';}
"="		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return '=';}

{comment}       ;

{whitespace}+   ;

{number}        {yyyGenLeaf(1,2,yyyLRCIL+0,yyyLRCIL+1); (((yyyP2)(yyyTermBuffer.snBufPtr))->val) = strtoul(yytext, NULL, 10); return NUM;} 

{hexnumber}     {yyyGenLeaf(1,2,yyyLRCIL+0,yyyLRCIL+1); (((yyyP2)(yyyTermBuffer.snBufPtr))->val) = strtoul(yytext, NULL, 16); return NUM;} 

{identifier}    {yyyGenLeaf(1,1,yyyLRCIL+1,yyyLRCIL+2); (((yyyP1)(yyyTermBuffer.snBufPtr))->name) = strdup(yytext); return ID;}  

.               printf("Error in scanner");exit(1);   

%%

int yywrap(void)
{
	return 1;
}

void yyerror (char const *message)
{

    fprintf(stderr, "Error in parsing");
    exit(2);
}