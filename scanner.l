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

%%

"interface"     return INTERFACE;
"end"           return END;
"class"         return CLASS;
"implements"    return IMPLEMENTS;
"var"           return VAR;
"method"        return METHOD;
"int"           return INT;
"return"        return RETURN;
"if"            return IF;
"then"          return THEN;
"else"          return ELSE;
"while"         return WHILE;
"do"            return DO;
"and"           return AND;
"not"           return NOT;
"new"           return NEW;
"this"          return THIS;
"null"          return NUL;

";"		    return ';';
":"		    return ':';
"("		    return '(';
")"		    return ')';
"."		    return '.';
","		    return ',';
":="		return ASSIGN;
"+"		    return '+';
"*"		    return '*';
"-"		    return '-';
"<"		    return '<';
"="		    return '=';

{comment}       ;

{whitespace}+   ;

{number}        return NUM; @{ @NUM.val@ = strtoul(yytext, NULL, 10); @}

{hexnumber}     return NUM; @{ @NUM.val@ = strtoul(yytext, NULL, 16); @}

{identifier}    return ID;  @{ @ID.name@ = strdup(yytext); @}

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