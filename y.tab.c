/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20180510

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 5 "parser.y"
  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 13 "parser.y"
typedef union {
         int intVal;
         double doubVal;
         char charVal;
         char *strVal;
       } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 39 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define INT_CONSTANT 257
#define DOUB_CONSTANT 258
#define CHAR_CONSTANT 259
#define BOOL_CONSTANT 260
#define NONVOIDTYPE 261
#define VOIDTYPE 262
#define ID 263
#define RETURN 264
#define CONST 265
#define OROR 266
#define ANDAND 267
#define ARITHCOMPARE 268
#define PLUSPLUS 269
#define MINUSMINUS 270
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    3,    3,    3,    3,    4,
    5,    6,    6,    7,    8,    8,   12,   12,    9,    9,
   14,   14,   15,   15,   16,   17,   17,   10,   10,   19,
   19,   20,   20,   21,   21,   11,   11,   22,   23,   23,
   23,   23,    2,    2,    2,    2,    2,    2,    2,    2,
   24,   24,   24,   25,   25,   26,   26,   27,   27,   28,
   28,   29,   29,   18,   18,   13,   13,   13,   13,   13,
   13,   13,   13,   13,   13,   13,   13,   13,   13,   13,
   13,   13,
};
static const YYINT yylen[] = {                            2,
    2,    2,    2,    1,    1,    1,    1,    1,    1,    3,
    3,    3,    3,    4,    3,    1,    1,    3,    3,    1,
    2,    4,    2,    1,    3,    3,    2,    3,    1,    4,
    3,    3,    1,    2,    3,    3,    1,    3,    1,    1,
    1,    1,   11,   10,   10,    9,   10,    9,    9,    8,
    2,    1,    1,    2,    1,    2,    1,    1,    1,    4,
    5,    5,    4,    3,    1,    1,    1,    2,    4,    3,
    3,    3,    3,    3,    3,    3,    3,    2,    3,    3,
    2,    2,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    5,    4,    6,    7,    8,
    9,    0,    0,    0,    0,   16,   20,   29,    0,    0,
    0,    0,    2,    0,    0,    0,    0,    0,   10,    0,
   11,    0,   12,    0,    0,   13,    0,    0,   37,   39,
   40,   41,   42,    0,    0,    0,   66,    0,    0,    0,
    0,   33,   23,    0,    0,   15,    0,   19,    0,   28,
    0,    0,    0,   14,    0,    0,    0,   24,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   81,   82,
   25,    0,    0,    0,    0,    0,   22,    0,    0,    0,
   38,   36,   70,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   55,
    0,    0,   53,    0,   58,   59,   32,    0,   27,    0,
   31,    0,    0,    0,    0,    0,   69,    0,    0,    0,
    0,    0,    0,   54,   51,   56,    0,    0,   26,   30,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   50,    0,    0,    0,   60,   63,    0,
    0,   46,    0,    0,    0,   48,   49,    0,   62,   61,
   44,   45,    0,   47,   43,
};
static const YYINT yydgoto[] = {                          4,
    5,    6,  110,    8,    9,   10,   11,   13,   14,   15,
   38,   16,   94,   17,   27,   53,   87,   95,   18,   51,
   52,   39,   47,  111,  112,  113,  114,  115,  116,
};
static const YYINT yysindex[] = {                       142,
 -228, -224, -218,    0,  142,    0,    0,    0,    0,    0,
    0,  134,   17,  152,  154,    0,    0,    0,   11,  157,
 -184,    0,    0,   25, -170,  -39,   22,   40,    0, -146,
    0, -133,    0, -114,  -38,    0,   97,  159,    0,    0,
    0,    0,    0,  -11,   25,   62,    0,   85,  -83,   59,
   67,    0,    0,   66,  130,    0,   22,    0,  167,    0,
  104,  214,  195,    0, -184,   45,   22,    0,   82,   25,
   25,   25,   25,   25,   25,   25,   25,   25,    0,    0,
    0,   22,  108,  -41,  125,   52,    0,   -7,  163,  164,
    0,    0,    0,   62,  223,   62,   73,   82,   89,  -10,
  -10, -148, -148, -148,   22,   -6, -114,  145,   25,    0,
   31,  178,    0,   43,    0,    0,    0,  168,    0,  -33,
    0,  272,  227,   54,  186,   25,    0,  174,   25,  138,
    2,  -17,   25,    0,    0,    0,   25,   61,    0,    0,
  169,  248,  267,   63,   62,    3,  277,  273,   25,  212,
   10,   23,   25,    0,  221,  231,  289,    0,    0,  298,
   30,    0,  236,  240,   53,    0,    0,  241,    0,    0,
    0,    0,  249,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  165,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    1,    0,    0,    0,    0,  202,   15,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -37,    0,  280,    0,    0,    0,  290,
    0,    0,    0,    0,  165,    0,    0,    0,    0,    0,
  290,    0,    0,    0,    0,    0,  -28,    0,  101,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  303,    0,    0,  301,    0,    0,    0,    0,  301,
    0,    0,    0,  103,    0,  361,  294,  156,  -23,  143,
  149,   96,  109,  122,  350,    0,    0,    0,    0,    0,
    0,  114,    0,  128,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  165,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  131,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  388,   49,    0,    0,    0,    0,    0,    0,   21,
    0,  369,  309,  368,  193,   91,    0,  -74,  372,    6,
  324,  347,  351,   87,    0,  -31,    0,    0,    0,
};
#define YYTABLESIZE 560
static const YYINT yytable[] = {                         67,
    1,   50,   61,   67,   67,   67,   67,   67,   68,   67,
  126,  120,   68,   68,   68,   68,   68,   77,   68,   78,
   77,   67,   20,   67,   76,   74,   78,   75,   66,   77,
   68,   76,   68,  121,   12,   77,   77,   77,   19,   78,
   62,  150,   21,   70,   76,   74,   78,   75,    7,   77,
   35,   76,   74,   23,   75,  148,   77,   45,   24,   78,
   30,  158,  149,   70,   76,   74,   78,   75,  163,   77,
   70,   76,   74,   24,   75,   29,   77,   45,   37,   25,
  135,  164,  136,   70,   45,   93,   48,   67,  170,   78,
   70,  139,   25,  122,   76,   74,   68,   75,   78,   77,
   54,   77,   28,   76,   74,   24,   75,   85,   77,   78,
   84,  173,   25,   70,   76,   74,   55,   75,   78,   77,
   79,   80,   70,   76,   74,   78,   75,   20,   77,   57,
   76,   74,   74,   75,   68,   77,   74,   74,   74,   74,
   74,   78,   74,   65,   78,   75,   65,   28,   59,   75,
   75,   75,   75,   75,   74,   75,   74,   63,   76,   78,
  134,   78,   76,   76,   76,   76,   76,   75,   76,   75,
   45,   64,   68,   26,   64,  124,  119,   81,  147,   82,
   76,   83,   76,   72,  130,   72,   72,   72,   86,   73,
   24,   73,   73,   73,   24,   32,   79,   34,   68,   79,
   34,   72,   65,   72,  138,  129,   88,   73,   17,   73,
   31,  144,   33,   88,   79,   36,   79,   64,   28,   49,
   74,   49,   49,   17,   25,   78,   89,   65,   67,   67,
   67,   67,   67,   75,   24,   25,   67,   68,   68,   68,
   68,   68,   77,   77,   77,   21,   76,  118,   71,   72,
   73,   79,   80,   49,   90,   64,  128,   84,   79,   80,
   21,    3,    3,  127,   25,    3,  126,   72,   71,   72,
   73,   79,   80,   73,  105,   71,   72,   73,   79,   80,
   79,   40,   41,   42,   43,  141,  125,   44,   71,   72,
   73,   79,   80,  154,  133,   71,   72,   73,   79,   80,
  131,   40,   41,   42,   43,  108,  155,   44,   40,   41,
   42,   43,  140,  160,   44,   84,  126,  142,   71,   72,
   73,   79,   80,   18,  153,  156,  157,   71,   72,   73,
   79,   80,   46,   31,   80,  159,  162,   80,   18,   72,
   73,   79,   80,   34,   30,  166,   34,  168,   31,   73,
   79,   80,   80,   69,   80,  167,  169,   79,   80,   30,
  171,   74,   74,   74,  172,  174,   78,   78,  106,  107,
  108,  109,    3,  175,   75,   75,   75,   52,   96,   97,
   98,   99,  100,  101,  102,  103,  104,   76,   76,   76,
   35,   57,   22,   35,   40,   41,   42,   43,   56,   58,
   44,   71,    1,    2,   71,   60,    3,  117,   72,   72,
   72,   92,    0,   91,   73,   73,   73,  132,   80,   71,
    0,   79,   79,  106,  107,  108,  123,    3,  106,  107,
  108,  137,    3,    0,  145,    0,    0,  146,  106,  107,
  108,  151,    3,    0,    0,  152,  106,  107,  108,  143,
    3,   40,   41,   42,   43,    0,    0,  161,    0,    0,
    0,  165,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   71,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   80,
};
static const YYINT yycheck[] = {                         37,
    0,   41,   41,   41,   42,   43,   44,   45,   37,   47,
   44,   86,   41,   42,   43,   44,   45,   41,   47,   37,
   44,   59,    2,   61,   42,   43,   37,   45,   40,   47,
   59,   42,   61,   41,  263,   59,   47,   61,  263,   37,
   35,   59,  261,   61,   42,   43,   37,   45,    0,   47,
   40,   42,   43,    5,   45,  130,   47,   33,   44,   37,
   44,   59,   61,   61,   42,   43,   37,   45,   59,   47,
   61,   42,   43,   59,   45,   59,   47,   33,  263,   91,
  112,   59,  114,   61,   33,   41,  257,  125,   59,   37,
   61,  125,   91,   88,   42,   43,  125,   45,   37,   47,
   61,  125,   12,   42,   43,   91,   45,   41,   47,   37,
   44,   59,   91,   61,   42,   43,  263,   45,   37,   47,
  269,  270,   61,   42,   43,   37,   45,  107,   47,  263,
   42,   43,   37,   45,   44,   47,   41,   42,   43,   44,
   45,   41,   47,   41,   44,   37,   44,   57,  263,   41,
   42,   43,   44,   45,   59,   47,   61,   61,   37,   59,
  112,   61,   41,   42,   43,   44,   45,   59,   47,   61,
   33,   41,   82,   40,   44,   89,  125,   93,   41,  263,
   59,  123,   61,   41,   40,   43,   44,   45,  123,   41,
   61,   43,   44,   45,   61,   44,   41,   44,  108,   44,
   44,   59,   44,   61,  118,   61,   40,   59,   44,   61,
   59,  125,   59,   40,   59,   59,   61,   59,  128,  261,
  125,  261,  261,   59,   91,  125,  123,  125,  266,  267,
  268,  269,  270,  125,   61,   91,   44,  266,  267,  268,
  269,  270,  266,  267,  268,   44,  125,  123,  266,  267,
  268,  269,  270,  261,   41,  125,  263,   44,  269,  270,
   59,  261,  262,   41,   91,  265,   44,  125,  266,  267,
  268,  269,  270,  125,   82,  266,  267,  268,  269,  270,
  125,  257,  258,  259,  260,   59,  123,  263,  266,  267,
  268,  269,  270,  125,  264,  266,  267,  268,  269,  270,
  108,  257,  258,  259,  260,  263,   59,  263,  257,  258,
  259,  260,   41,   41,  263,   44,   44,  264,  266,  267,
  268,  269,  270,   44,  264,   59,  264,  266,  267,  268,
  269,  270,   24,   44,   41,   59,  125,   44,   59,  267,
  268,  269,  270,   41,   44,  125,   44,   59,   59,  268,
  269,  270,   59,   45,   61,  125,   59,  269,  270,   59,
  125,  266,  267,  268,  125,  125,  266,  267,  261,  262,
  263,  264,  265,  125,  266,  267,  268,  264,   70,   71,
   72,   73,   74,   75,   76,   77,   78,  266,  267,  268,
   41,  264,    5,   44,  257,  258,  259,  260,   30,   32,
  263,   41,  261,  262,   44,   34,  265,   84,  266,  267,
  268,   65,   -1,   63,  266,  267,  268,  109,  125,   59,
   -1,  266,  267,  261,  262,  263,  264,  265,  261,  262,
  263,  264,  265,   -1,  126,   -1,   -1,  129,  261,  262,
  263,  133,  265,   -1,   -1,  137,  261,  262,  263,  264,
  265,  257,  258,  259,  260,   -1,   -1,  149,   -1,   -1,
   -1,  153,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  125,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  266,
};
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 270
#define YYUNDFTOKEN 302
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,
0,0,0,0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INT_CONSTANT","DOUB_CONSTANT","CHAR_CONSTANT",
"BOOL_CONSTANT","NONVOIDTYPE","VOIDTYPE","ID","RETURN","CONST","OROR","ANDAND",
"ARITHCOMPARE","PLUSPLUS","MINUSMINUS",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : external func_definition",
"external : external var_declaration",
"external : external func_definition",
"external : var_declaration",
"external : func_definition",
"var_declaration : scalar_declaration",
"var_declaration : array_declaration",
"var_declaration : func_declaration",
"var_declaration : const_declaration",
"scalar_declaration : NONVOIDTYPE ID_declarations ';'",
"array_declaration : NONVOIDTYPE IDarr_declarations ';'",
"func_declaration : NONVOIDTYPE IDfunc_declarations ';'",
"func_declaration : VOIDTYPE IDfunc_declarations ';'",
"const_declaration : CONST NONVOIDTYPE IDconst_declarations ';'",
"ID_declarations : ID_declarations ',' ID_declaration",
"ID_declarations : ID_declaration",
"ID_declaration : ID",
"ID_declaration : ID '=' expression",
"IDarr_declarations : IDarr_declarations ',' IDarr_declaration",
"IDarr_declarations : IDarr_declaration",
"IDarr_declaration : ID dimensions",
"IDarr_declaration : ID dimension '=' arr_content",
"dimensions : dimensions dimension",
"dimensions : dimension",
"dimension : '[' INT_CONSTANT ']'",
"arr_content : '{' expressions '}'",
"arr_content : '{' '}'",
"IDfunc_declarations : IDfunc_declarations ',' IDfunc_declaration",
"IDfunc_declarations : IDfunc_declaration",
"IDfunc_declaration : ID '(' parameters ')'",
"IDfunc_declaration : ID '(' ')'",
"parameters : parameters ',' parameter",
"parameters : parameter",
"parameter : NONVOIDTYPE ID",
"parameter : NONVOIDTYPE ID dimensions",
"IDconst_declarations : IDconst_declarations ',' IDconst_declaration",
"IDconst_declarations : IDconst_declaration",
"IDconst_declaration : ID '=' CONSTANT",
"CONSTANT : INT_CONSTANT",
"CONSTANT : DOUB_CONSTANT",
"CONSTANT : CHAR_CONSTANT",
"CONSTANT : BOOL_CONSTANT",
"func_definition : NONVOIDTYPE ID '(' parameters ')' '{' func_contents RETURN expression ';' '}'",
"func_definition : NONVOIDTYPE ID '(' ')' '{' func_contents RETURN expression ';' '}'",
"func_definition : NONVOIDTYPE ID '(' parameters ')' '{' RETURN expression ';' '}'",
"func_definition : NONVOIDTYPE ID '(' ')' '{' RETURN expression ';' '}'",
"func_definition : VOIDTYPE ID '(' parameters ')' '{' func_contents RETURN ';' '}'",
"func_definition : VOIDTYPE ID '(' ')' '{' func_contents RETURN ';' '}'",
"func_definition : VOIDTYPE ID '(' parameters ')' '{' RETURN ';' '}'",
"func_definition : VOIDTYPE ID '(' ')' '{' RETURN ';' '}'",
"func_contents : var_declarations func_statements",
"func_contents : var_declarations",
"func_contents : func_statements",
"var_declarations : var_declarations var_declaration",
"var_declarations : var_declaration",
"func_statements : func_statement func_statements",
"func_statements : func_statement",
"func_statement : simple_statement",
"func_statement : func_invocation",
"simple_statement : ID '=' expression ';'",
"simple_statement : ID dimensions '=' expression ';'",
"func_invocation : ID '(' expressions ')' ';'",
"func_invocation : ID '(' ')' ';'",
"expressions : expressions ',' expression",
"expressions : expression",
"expression : CONSTANT",
"expression : ID",
"expression : ID dimensions",
"expression : ID '(' expressions ')'",
"expression : ID '(' ')'",
"expression : expression '=' expression",
"expression : expression '+' expression",
"expression : expression '-' expression",
"expression : expression '*' expression",
"expression : expression '/' expression",
"expression : expression '%' expression",
"expression : expression ARITHCOMPARE expression",
"expression : '!' expression",
"expression : expression ANDAND expression",
"expression : expression OROR expression",
"expression : expression PLUSPLUS",
"expression : expression MINUSMINUS",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 216 "parser.y"

int main()
{
  yyparse();
  printf("No syntax error!\n");
  return 0;
}

int yyerror(char *s)
{
  fprintf(stderr, "***%s\n", s);
  exit(1);
}
#line 460 "y.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
