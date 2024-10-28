/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "oxout.y" /* yacc.c:339  */

#line 4 "oxout.y" /* yacc.c:339  */

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

#line 50 "oxout.y" /* yacc.c:339  */



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


#line 140 "oxout.y" /* yacc.c:339  */

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

#line 204 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 301 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   123

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   278

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      26,    27,    30,    29,    28,    31,    34,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    25,    24,
      32,    33,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   175,   175,   175,   187,   193,   199,   207,   215,   220,
     226,   234,   237,   244,   255,   258,   266,   272,   280,   288,
     299,   304,   312,   318,   326,   332,   340,   349,   356,   365,
     374,   382,   390,   398,   406,   415,   428,   433,   438,   443,
     448,   453,   458,   468,   473,   481,   486,   494,   499,   507,
     512,   517,   525,   530,   538,   542,   548,   554,   561,   566,
     573,   583,   586
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTERFACE", "END", "CLASS",
  "IMPLEMENTS", "VAR", "METHOD", "INT", "RETURN", "IF", "THEN", "ELSE",
  "WHILE", "DO", "NOT", "AND", "NEW", "THIS", "NUL", "ASSIGN", "NUM", "ID",
  "';'", "':'", "'('", "')'", "','", "'+'", "'*'", "'-'", "'<'", "'='",
  "'.'", "$accept", "yyyAugNonterm", "$@1", "Program", "Interface",
  "Abstractmethod", "Abstractmethodtype", "Class", "Multids",
  "Multmembers", "Member", "Type", "Pars", "Helppars", "Par", "Stats",
  "Stat", "Expr", "Plusterm", "Multterm", "Andterm", "Otherop", "Notterm",
  "Term", "Multexpr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    59,    58,    40,    41,    44,    43,
      42,    45,    60,    61,    46
};
# endif

#define YYPACT_NINF -77

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-77)))

#define YYTABLE_NINF -25

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -77,    12,   -77,   -77,     8,   -15,    -8,     7,     9,     2,
      40,   -77,   -77,    11,   -77,    24,    51,    28,    32,   -77,
     -77,    13,    46,    -4,    49,    58,    59,    61,    -4,   -77,
     -77,    39,    68,    70,   -77,    13,    11,    72,   -77,    -4,
      71,   -77,   -77,    -4,   -77,    73,    75,    11,    38,    74,
      76,   -77,    78,    64,    64,    64,     6,    79,   -77,    80,
     -77,    84,    64,   102,    83,   -77,    81,    82,    91,   -77,
     -77,    45,    -4,   -77,    86,   -77,   -77,    97,    98,   -77,
      85,   -77,   -77,    64,    87,   -77,    38,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    92,   -77,    -4,    38,
      38,   -77,   -77,   -77,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    90,    96,     3,   114,    93,    64,   -77,
      38,   -77,   -77,    64,   -77,   117,    41,   -77,   -77,   -77
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     4,     1,     3,     0,     0,     0,     0,     0,
       0,     5,     6,     8,    14,     0,     0,     0,    11,     7,
      15,    16,     0,     0,     0,     0,     0,     0,     0,    20,
      21,     0,     0,     0,    13,    16,     8,     0,    12,     0,
      22,    17,     9,     0,    18,     0,     0,     8,    27,     0,
      23,    10,     0,     0,     0,     0,     0,     0,    56,     0,
      55,    58,     0,     0,     0,    35,    37,    38,    39,    40,
      36,    41,     0,    25,     0,    58,    29,     0,     0,    53,
      52,    42,    57,     0,     0,    19,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
      27,    34,    54,    28,    44,    46,    48,    47,    43,    45,
      49,    50,    51,     0,     0,     0,     0,    61,     0,    31,
      27,    32,    59,     0,    33,     0,     0,    30,    60,    62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -77,   -77,   -77,   -77,   -77,   -30,   -77,   -77,   -77,    88,
     -77,   -25,   -77,   -77,   -77,   -76,   -77,   -53,   -77,   -77,
     -77,   -77,    66,   -52,   -77
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     4,     7,    16,    23,     8,    17,    26,
      27,    31,    45,    46,    50,    63,    64,    65,    66,    67,
      68,    69,    70,    71,   123
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,    77,    78,    36,    80,    29,    42,   119,     9,    84,
     103,     5,     3,     6,    44,    10,   120,    51,    47,    30,
      24,    25,    56,   115,   116,    58,    59,    13,    60,    75,
     101,    11,    62,    12,    15,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   125,    52,    14,    97,    53,    54,
      18,    20,    55,    21,    56,    19,    57,    58,    59,    22,
      60,    61,    90,    34,    62,   124,    37,    38,   128,   129,
     126,    28,    32,   114,    91,    92,    93,    94,    95,    96,
      56,    33,    57,    58,    59,    35,    60,    75,    58,    59,
      62,    60,    75,    39,   -24,    62,    40,    43,    49,    72,
      48,    74,    81,    82,    73,    83,    85,    86,    89,    99,
      87,    98,    88,   100,   102,   113,   117,   118,   121,    96,
     122,   127,    79,    41
};

static const yytype_uint8 yycheck[] =
{
      53,    54,    55,    28,    56,     9,    36,     4,    23,    62,
      86,     3,     0,     5,    39,    23,    13,    47,    43,    23,
       7,     8,    16,    99,   100,    19,    20,    25,    22,    23,
      83,    24,    26,    24,    23,    87,    88,    89,    90,    91,
      92,    93,    94,    95,   120,     7,     6,    72,    10,    11,
      26,    23,    14,    25,    16,     4,    18,    19,    20,    27,
      22,    23,    17,     4,    26,   118,    27,    28,    27,    28,
     123,    25,    23,    98,    29,    30,    31,    32,    33,    34,
      16,    23,    18,    19,    20,    24,    22,    23,    19,    20,
      26,    22,    23,    25,    23,    26,    26,    25,    23,    25,
      27,    23,    23,    23,    28,    21,     4,    24,    17,    12,
      29,    25,    30,    15,    27,    23,    26,    21,     4,    34,
      27,     4,    56,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    37,     0,    38,     3,     5,    39,    42,    23,
      23,    24,    24,    25,     6,    23,    40,    43,    26,     4,
      23,    25,    27,    41,     7,     8,    44,    45,    25,     9,
      23,    46,    23,    23,     4,    24,    46,    27,    28,    25,
      26,    44,    40,    25,    46,    47,    48,    46,    27,    23,
      49,    40,     7,    10,    11,    14,    16,    18,    19,    20,
      22,    23,    26,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    25,    28,    23,    23,    52,    52,    52,    57,
      58,    23,    23,    21,    52,     4,    24,    29,    30,    17,
      17,    29,    30,    31,    32,    33,    34,    46,    25,    12,
      15,    52,    27,    50,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    23,    46,    50,    50,    26,    21,     4,
      13,     4,    27,    59,    52,    50,    52,     4,    27,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    37,    36,    38,    38,    38,    39,    40,    40,
      40,    41,    41,    42,    43,    43,    44,    44,    45,    45,
      46,    46,    47,    47,    48,    48,    49,    50,    50,    51,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      52,    52,    52,    53,    53,    54,    54,    55,    55,    56,
      56,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    59,    59
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     3,     3,     5,     0,     6,
       8,     0,     3,     7,     0,     2,     0,     3,     4,     7,
       1,     1,     0,     2,     0,     3,     3,     0,     3,     2,
       7,     5,     5,     6,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     1,     1,     2,     1,     5,
       7,     0,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 175 "oxout.y" /* yacc.c:1646  */
    {if (!yyyInitDone) 
		    {yyyYoxInit(); 
		     yyyInitDone = 1;
		    }
		 yyyYoxReset();
		}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 182 "oxout.y" /* yacc.c:1646  */
    {
		 yyyDecorate(); yyyExecuteRRsection();
		}
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 187 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(1,0,1,3);
yyyGenIntNode();
 (((yyyP3)yyySTsn)->in) = new_list();
    yyyAdjustINRC(yyyRCIL+0,yyyRCIL+3);}}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 194 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(2,3,1,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+3,yyyRCIL+9);/*yyyPrune(2);*/}}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 200 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(3,3,1,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+9,yyyRCIL+15);/*yyyPrune(3);*/}}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 208 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(4,5,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+15,yyyRCIL+21);}}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 215 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(5,0,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+21,yyyRCIL+24);}}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 221 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(6,6,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+24,yyyRCIL+33);}}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 227 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(7,8,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+33,yyyRCIL+48);}}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 234 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(8,0,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+48,yyyRCIL+48);}}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 238 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(9,3,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+48,yyyRCIL+54);}}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 245 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(10,7,2,5);
yyyGenIntNode();
 (((yyyP5)yyySTsn)->name) = (((yyyP1)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name);
         (((yyyP4)(((char *)((yyySTN->cL)[5]))+yyyGNSz))->classname) = (((yyyP1)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name);

        yyyAdjustINRC(yyyRCIL+54,yyyRCIL+66);}}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 255 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(11,0,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+66,yyyRCIL+66);}}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 259 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(12,2,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+66,yyyRCIL+69);}}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 266 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(13,0,3,4);
yyyGenIntNode();
 (((yyyP4)yyySTsn)->methods) = new_list();
        
    yyyAdjustINRC(yyyRCIL+69,yyyRCIL+72);}}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 273 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(14,3,3,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+72,yyyRCIL+87);}}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 281 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(15,4,4,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->method) = new_list();
     (((yyyP7)yyySTsn)->out) = append(new_list(), (((yyyP1)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name), OBJ_VARIABLE_T);
        yyyAdjustINRC(yyyRCIL+87,yyyRCIL+96);}}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 289 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(16,7,4,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->out) = new_list();

         (((yyyP7)yyySTsn)->method) = append(new_list(), (((yyyP1)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name), METHOD_T);
        yyyAdjustINRC(yyyRCIL+96,yyyRCIL+108);}}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 301 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(17,1,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+108,yyyRCIL+108);/*yyyPrune(17);*/}}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 305 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(18,1,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+108,yyyRCIL+108);/*yyyPrune(18);*/}}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 312 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(19,0,2,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = new_list();
    yyyAdjustINRC(yyyRCIL+108,yyyRCIL+111);}}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 319 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(20,2,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+111,yyyRCIL+120);}}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 326 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(21,0,2,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = new_list();
    yyyAdjustINRC(yyyRCIL+120,yyyRCIL+123);}}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 333 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(22,3,2,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+123,yyyRCIL+132);}}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 341 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(23,3,2,5);
yyyGenIntNode();
 (((yyyP5)yyySTsn)->name) = (((yyyP1)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->name);
    yyyAdjustINRC(yyyRCIL+132,yyyRCIL+138);}}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 349 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(24,0,3,8);
yyyGenIntNode();
 (((yyyP8)yyySTsn)->out) = new_list();
         (((yyyP8)yyySTsn)->local_var_num) = 0
        ;
    yyyAdjustINRC(yyyRCIL+138,yyyRCIL+144);}}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 357 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(25,3,3,8);
yyyGenIntNode();
 (((yyyP8)yyySTsn)->out) = new_list();
        yyyAdjustINRC(yyyRCIL+144,yyyRCIL+156);}}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 366 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(26,2,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->out) = new_list();

         (((yyyP9)yyySTsn)->local_var_num) = 0;

        yyyAdjustINRC(yyyRCIL+156,yyyRCIL+168);}}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 375 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(27,7,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->local_var_num) = 0;

         (((yyyP9)yyySTsn)->tree) = NULL;
    yyyAdjustINRC(yyyRCIL+168,yyyRCIL+186);}}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 383 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(28,5,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->local_var_num) = 0;

         (((yyyP9)yyySTsn)->tree) = NULL;
    yyyAdjustINRC(yyyRCIL+186,yyyRCIL+201);}}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 391 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(29,5,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->local_var_num) = 0;

         (((yyyP9)yyySTsn)->tree) = NULL;
    yyyAdjustINRC(yyyRCIL+201,yyyRCIL+216);}}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 399 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(30,6,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->local_var_num) = 1;

         (((yyyP9)yyySTsn)->out) = append(new_list(), (((yyyP1)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name), VARIABLE_T);
        yyyAdjustINRC(yyyRCIL+216,yyyRCIL+231);}}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 407 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(31,3,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->out) = new_list();

         (((yyyP9)yyySTsn)->local_var_num) = 0;

        yyyAdjustINRC(yyyRCIL+231,yyyRCIL+243);}}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 416 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(32,1,4,9);
yyyGenIntNode();
 (((yyyP9)yyySTsn)->out) = new_list();

         (((yyyP9)yyySTsn)->local_var_num) = 0;

         (((yyyP9)yyySTsn)->tree) = NULL;
    yyyAdjustINRC(yyyRCIL+243,yyyRCIL+255);}}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 429 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(33,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+255,yyyRCIL+261);}}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 434 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(34,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+261,yyyRCIL+267);}}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 439 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(35,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+267,yyyRCIL+273);}}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 444 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(36,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+273,yyyRCIL+279);}}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 449 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(37,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+279,yyyRCIL+285);}}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 454 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(38,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+285,yyyRCIL+291);}}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 459 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(39,2,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = NULL;

        yyyAdjustINRC(yyyRCIL+291,yyyRCIL+294);/*yyyPrune(39);*/}}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 469 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(40,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+294,yyyRCIL+303);}}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 474 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(41,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+303,yyyRCIL+312);}}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 482 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(42,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+312,yyyRCIL+321);}}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 487 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(43,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+321,yyyRCIL+330);}}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 495 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(44,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+330,yyyRCIL+339);}}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 500 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(45,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+339,yyyRCIL+348);}}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 508 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(46,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+348,yyyRCIL+357);}}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 513 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(47,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+357,yyyRCIL+366);}}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 518 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(48,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+366,yyyRCIL+375);}}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 526 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(49,2,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+375,yyyRCIL+381);}}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 531 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(50,2,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+381,yyyRCIL+387);}}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 539 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(51,3,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+387,yyyRCIL+393);}}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 543 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(52,1,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = new_leaf_num((((yyyP2)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->val));
    yyyAdjustINRC(yyyRCIL+393,yyyRCIL+396);/*yyyPrune(52);*/}}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 549 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(53,1,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = new_node(OP_THIS, NULL, NULL);      
    yyyAdjustINRC(yyyRCIL+396,yyyRCIL+399);/*yyyPrune(53);*/}}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 555 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(54,2,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = new_leaf_num(0);

        yyyAdjustINRC(yyyRCIL+399,yyyRCIL+402);/*yyyPrune(54);*/}}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 562 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(55,1,2,11);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+402,yyyRCIL+405);}}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 567 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(56,5,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = NULL; 

        yyyAdjustINRC(yyyRCIL+405,yyyRCIL+411);}}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 574 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(57,7,2,11);
yyyGenIntNode();
 (((yyyP11)yyySTsn)->tree) = NULL;
        
        yyyAdjustINRC(yyyRCIL+411,yyyRCIL+423);}}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 583 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(58,0,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+423,yyyRCIL+423);}}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 587 "oxout.y" /* yacc.c:1646  */
    {if(yyyYok){
yyyRSU(59,3,1,10);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+423,yyyRCIL+429);}}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2061 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 593 "oxout.y" /* yacc.c:1906  */


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



