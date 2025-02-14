/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTERFACE = 258,
    END = 259,
    CLASS = 260,
    IMPLEMENTS = 261,
    VAR = 262,
    METHOD = 263,
    INT = 264,
    RETURN = 265,
    IF = 266,
    THEN = 267,
    ELSE = 268,
    WHILE = 269,
    DO = 270,
    NOT = 271,
    AND = 272,
    NEW = 273,
    THIS = 274,
    NUL = 275,
    ASSIGN = 276,
    NUM = 277,
    ID = 278
  };
#endif
/* Tokens.  */
#define INTERFACE 258
#define END 259
#define CLASS 260
#define IMPLEMENTS 261
#define VAR 262
#define METHOD 263
#define INT 264
#define RETURN 265
#define IF 266
#define THEN 267
#define ELSE 268
#define WHILE 269
#define DO 270
#define NOT 271
#define AND 272
#define NEW 273
#define THIS 274
#define NUL 275
#define ASSIGN 276
#define NUM 277
#define ID 278

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
