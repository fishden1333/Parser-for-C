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
  extern int numLines;
  extern char line[1000];
  extern char *yytext;
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 16 "parser.y"
typedef union {
         int intVal;
         double doubVal;
         char charVal;
         char *strVal;
       } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 42 "y.tab.c"

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
#define COMMENT_START 266
#define COMMENT_SINGLE 267
#define COMMENT_END 268
#define OROR 269
#define ANDAND 270
#define ARITHCOMPARE 271
#define PLUSPLUS 272
#define MINUSMINUS 273
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    3,    3,    3,    3,    3,
    4,    5,    6,    6,    7,    9,    9,   13,   13,   10,
   10,   15,   15,   16,   16,   17,   18,   18,   11,   11,
   20,   20,   21,   21,   22,   22,   12,   12,   23,   24,
   24,   24,   24,    2,    2,    2,    2,    2,    2,    2,
    2,   25,   25,   25,   26,   26,   27,   27,   28,   28,
   29,   29,   30,   30,   19,   19,   14,   14,   14,   14,
   14,   14,   14,   14,   14,   14,   14,   14,   14,   14,
   14,   14,   14,    8,    8,   31,   31,   32,
};
static const YYINT yylen[] = {                            2,
    2,    2,    2,    1,    1,    1,    1,    1,    1,    1,
    3,    3,    3,    3,    4,    3,    1,    1,    3,    3,
    1,    2,    4,    2,    1,    3,    3,    2,    3,    1,
    4,    3,    3,    1,    2,    3,    3,    1,    3,    1,
    1,    1,    1,   11,   10,   10,    9,   10,    9,    9,
    8,    2,    1,    1,    2,    1,    2,    1,    1,    1,
    4,    5,    5,    4,    3,    1,    1,    1,    2,    4,
    3,    3,    3,    3,    3,    3,    3,    3,    2,    3,
    3,    2,    2,    3,    2,    2,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    5,    4,    6,
    7,    8,    9,   10,    0,    0,    0,    0,   17,   21,
   30,    0,    0,    0,   40,   41,   42,   43,    0,    0,
    0,   67,    0,   87,   85,    0,    2,    0,    0,    0,
    0,    0,   11,    0,   12,    0,   13,    0,    0,   14,
    0,    0,   38,    0,    0,   25,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   82,   83,   84,   86,
    0,    0,    0,    0,    0,   34,   24,    0,    0,   16,
    0,   20,    0,   29,    0,    0,    0,   15,    0,   71,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   26,    0,    0,    0,    0,    0,   23,    0,    0,
    0,   39,   37,    0,   70,    0,    0,    0,    0,    0,
   56,    0,    0,   54,    0,   59,   60,   33,    0,   28,
    0,   32,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   55,   52,   57,    0,    0,   27,   31,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   51,    0,    0,    0,   61,   64,    0,    0,
   47,    0,    0,    0,   49,   50,    0,   63,   62,   45,
   46,    0,   48,   44,
};
static const YYINT yydgoto[] = {                          6,
    7,    8,  121,   10,   11,   12,   13,   14,   16,   17,
   18,   52,   19,   31,   20,   41,   77,  108,   92,   21,
   75,   76,   53,   32,  122,  123,  124,  125,  126,  127,
   33,   34,
};
static const YYINT yysindex[] = {                      -222,
 -258, -236, -219,  256,  256,    0, -222,    0,    0,    0,
    0,    0,    0,    0,   19,   26,   52,   82,    0,    0,
    0,    8,   87, -199,    0,    0,    0,    0,  -23,  256,
  142,    0,  273,    0,    0,    0,    0,  256, -188,  -38,
   -4,   12,    0, -166,    0, -157,    0, -156,  -18,    0,
   54,  104,    0,   50,   -4,    0,  462,  256,  256,  256,
  256,  256,  256,  256,  256,  256,    0,    0,    0,    0,
  142,   30, -136,   45,  125,    0,    0,   51,   96,    0,
   -4,    0,  148,    0,   81,  151,  -50,    0, -199,    0,
  142,  152,  142,   97,  462,  169,  144,  144, -220, -220,
 -220,    0,   -4,  281,  -48,   98,  332,    0,  -17,  304,
  118,    0,    0,  256,    0,   -4,  -44, -156,   21,  256,
    0,   47,  335,    0,    2,    0,    0,    0,  311,    0,
  -37,    0,  174,  210,   48,  318,  142,   23,  256,  132,
  -25,  402,  256,    0,    0,    0,  256,   66,    0,    0,
  206,  289,  305,   68,  409,  307,  244,  256,  247,  422,
  429,  256,    0,  248,  268,  312,    0,    0,  351,  442,
    0,  269,  309,  449,    0,    0,  310,    0,    0,    0,
    0,  313,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  105,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -33,    0,
  296,    0,    0,    0,    0,    1,    0,    0,    0,    0,
  108,   86,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -12,    0,  139,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  111,    0,    0,  112,    0,    0,    0,    0,  105,    0,
    0,    0,    0,    0,  112,    0,    0,    0,    0,    0,
  -22,    0,  479,  399,  161,   92,   76,  117,   13,   34,
   57,    0,  246,    0,    0,  131,    0,    0,    0,    0,
  131,    0,    0,    0,    0,  392,    0,    0,    0,    0,
    0,    0,  173,    0,  184,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   -3,  105,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  443,    6,    0,    0,    0,    0,    0,    0,    0,
   14,    0,  411,  694,  407,  -14,    5,    0,  -89,  414,
  -47,  368,  386,  390,   18,    0,   74,    0,    0,    0,
    0,   32,
};
#define YYTABLESIZE 856
static const YYINT yytable[] = {                         68,
    1,   86,   74,   68,   15,    9,  114,   68,   68,   68,
   68,   68,   37,   68,   55,   23,   54,  131,   66,   42,
   69,   66,   85,  132,   69,   68,   22,   68,   69,   69,
   69,   69,   69,   56,   69,  158,   35,   65,    1,    2,
   65,   24,    3,    4,    5,   75,   69,   49,   69,   75,
  157,   67,   68,   75,   75,   75,   75,   75,   40,   75,
  140,  133,  109,   51,   70,   39,   76,   39,   72,   44,
   76,   75,   78,   75,   76,   76,   76,   76,   76,   38,
   76,  139,   30,   38,   43,   42,   39,  149,  116,   77,
   90,   68,   76,   77,   76,   46,   79,   77,   77,   77,
   77,   77,   66,   77,  141,   81,   83,   56,   73,   39,
   45,   39,   69,   39,   87,   77,   73,   77,   73,   73,
   73,   65,  102,   56,   78,   48,  103,  135,  144,   25,
   48,   23,   78,   66,   73,   78,   73,   75,   64,   62,
   47,   63,   42,   65,   25,   50,  148,   89,   18,   74,
   78,   22,   78,  154,   19,   32,   38,   74,   76,   74,
   74,   74,   88,   18,   30,  106,   22,  104,  105,   19,
   32,   79,  156,  107,   31,   74,   25,   74,   66,   79,
   66,   77,   79,   64,   62,   64,   63,  109,   65,   31,
   65,  111,  115,   80,  105,  114,  145,   79,  146,   79,
   73,   80,   58,  110,   80,   66,   25,   26,   27,   28,
   64,   62,   73,   63,  150,   65,   78,  105,  138,   80,
  129,   80,   73,   68,   68,   68,   68,   68,   68,   68,
   68,   68,   68,   68,   68,   68,   68,   68,   68,   68,
  136,   74,   73,   73,   69,   69,   69,   69,   69,   69,
   69,   69,   69,   69,   69,   69,   69,   69,   69,   69,
   69,    3,    3,   79,  119,    3,    3,    3,  151,   75,
   75,   75,   75,   75,   75,   75,   75,   75,   75,   75,
   75,   75,   75,   75,  169,   80,   35,  114,   30,   35,
   76,   76,   76,   76,   76,   76,   76,   76,   76,   76,
   76,   76,   76,   76,   76,   30,   25,   26,   27,   28,
  143,  152,   29,   77,   77,   77,   77,   77,   77,   77,
   77,   77,   77,   77,   77,   77,   77,   77,   88,  162,
  163,  166,   73,   73,   73,   73,   73,   73,   73,   73,
   73,   73,   73,   73,   73,   73,   73,  164,   78,   78,
   78,   78,   78,   78,   78,   78,   78,   78,   78,   78,
   78,   78,   78,  165,   30,  168,   60,   61,   67,   68,
  177,  171,  175,   74,   74,   74,   74,   74,   74,   74,
   74,   74,   74,   74,   74,   74,   74,   74,   25,   26,
   27,   28,  176,  180,   29,   79,   79,   79,   79,   79,
   79,   79,   79,   79,   79,   79,   79,   79,   79,  178,
   59,   60,   61,   67,   68,   67,   68,   80,   80,   80,
   80,   80,   80,   80,   80,   80,   80,   80,   80,   80,
   80,   81,   36,  181,  183,   36,   53,  184,   66,   81,
   67,   68,   81,   64,   62,   66,   63,   58,   65,   36,
   64,   62,   82,   63,   80,   65,  130,   81,   66,   81,
  159,   84,   58,   64,   62,   66,   63,  167,   65,   58,
   64,   62,  128,   63,  113,   65,  112,    0,   66,    0,
  172,    0,   58,   64,   62,   66,   63,  173,   65,   58,
   64,   62,    0,   63,    0,   65,    0,    0,   66,    0,
  179,    0,   58,   64,   62,    0,   63,  182,   65,   58,
    0,   72,   25,   26,   27,   28,    0,    0,   29,   72,
    0,    0,   72,   81,    0,    0,    0,    0,    0,   25,
   26,   27,   28,    0,    0,   29,    0,   72,    0,    0,
   69,  117,  118,  119,  120,    3,    4,    5,    0,    0,
    0,    0,   88,   88,   88,   88,   88,   88,   88,   88,
   88,   88,   88,   88,  117,  118,  119,  134,    3,    4,
    5,  117,  118,  119,  147,    3,    4,    5,  117,  118,
  119,  153,    3,    4,    5,    0,    0,    0,   25,   26,
   27,   28,    0,    0,   29,  117,  118,  119,    0,    3,
    4,    5,    0,   72,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   81,   81,   81,   81,   81,
   81,   81,   81,   81,   81,   81,   81,   81,    0,    0,
   59,   60,   61,   67,   68,    0,    0,   59,   60,   61,
   67,   68,    0,    0,    0,    0,    0,    0,    0,    0,
   59,   60,   61,   67,   68,    0,    0,   59,   60,   61,
   67,   68,    0,    0,    0,    0,    0,    0,    0,    0,
   59,   60,   61,   67,   68,    0,    0,   59,   60,   61,
   67,   68,    0,   57,    0,    0,    0,    0,    0,    0,
    0,   71,   61,   67,   68,   72,   72,   72,   72,   72,
   72,   72,   72,   72,   72,   72,   72,   91,    0,    0,
    0,   93,   94,   95,   96,   97,   98,   99,  100,  101,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   91,    0,    0,    0,    0,    0,    0,  137,    0,    0,
    0,    0,    0,  142,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  155,   91,    0,    0,  160,    0,    0,    0,
  161,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  170,    0,    0,    0,  174,
};
static const YYINT yycheck[] = {                         33,
    0,   49,   41,   37,  263,    0,   44,   41,   42,   43,
   44,   45,    7,   47,   29,    2,   40,  107,   41,   15,
   33,   44,   41,   41,   37,   59,  263,   61,   41,   42,
   43,   44,   45,   29,   47,   61,    5,   41,  261,  262,
   44,  261,  265,  266,  267,   33,   59,   40,   61,   37,
  140,  272,  273,   41,   42,   43,   44,   45,   40,   47,
   40,  109,   40,  263,   33,   91,   33,   91,  257,   44,
   37,   59,   61,   61,   41,   42,   43,   44,   45,   61,
   47,   61,   33,   61,   59,   81,   91,  125,  103,   33,
   41,  125,   59,   37,   61,   44,  263,   41,   42,   43,
   44,   45,  125,   47,  119,  263,  263,  103,   33,   91,
   59,   91,  125,   91,   61,   59,   41,   61,   43,   44,
   45,  125,   93,  119,   33,   44,  263,  110,  123,   44,
   44,  118,   41,   37,   59,   44,   61,  125,   42,   43,
   59,   45,  138,   47,   59,   59,  129,   44,   44,   33,
   59,   44,   61,  136,   44,   44,   61,   41,  125,   43,
   44,   45,   59,   59,   33,   41,   59,  123,   44,   59,
   59,   33,   41,  123,   44,   59,   91,   61,   37,   41,
   37,  125,   44,   42,   43,   42,   45,   40,   47,   59,
   47,   41,   41,   33,   44,   44,  123,   59,  125,   61,
  125,   41,   61,  123,   44,   37,  257,  258,  259,  260,
   42,   43,  261,   45,   41,   47,  125,   44,  263,   59,
  123,   61,  261,  257,  258,  259,  260,  261,  262,  263,
  264,  265,  266,  267,  268,  269,  270,  271,  272,  273,
  123,  125,  261,  261,  257,  258,  259,  260,  261,  262,
  263,  264,  265,  266,  267,  268,  269,  270,  271,  272,
  273,  261,  262,  125,  263,  265,  266,  267,   59,  257,
  258,  259,  260,  261,  262,  263,  264,  265,  266,  267,
  268,  269,  270,  271,   41,  125,   41,   44,   33,   44,
  257,  258,  259,  260,  261,  262,  263,  264,  265,  266,
  267,  268,  269,  270,  271,   33,  257,  258,  259,  260,
  264,  264,  263,  257,  258,  259,  260,  261,  262,  263,
  264,  265,  266,  267,  268,  269,  270,  271,   33,  264,
  125,  264,  257,  258,  259,  260,  261,  262,  263,  264,
  265,  266,  267,  268,  269,  270,  271,   59,  257,  258,
  259,  260,  261,  262,  263,  264,  265,  266,  267,  268,
  269,  270,  271,   59,   33,   59,  270,  271,  272,  273,
   59,  125,  125,  257,  258,  259,  260,  261,  262,  263,
  264,  265,  266,  267,  268,  269,  270,  271,  257,  258,
  259,  260,  125,  125,  263,  257,  258,  259,  260,  261,
  262,  263,  264,  265,  266,  267,  268,  269,  270,   59,
  269,  270,  271,  272,  273,  272,  273,  257,  258,  259,
  260,  261,  262,  263,  264,  265,  266,  267,  268,  269,
  270,   33,   41,  125,  125,   44,  264,  125,   37,   41,
  272,  273,   44,   42,   43,   37,   45,  264,   47,    7,
   42,   43,   46,   45,   44,   47,  125,   59,   37,   61,
   59,   48,   61,   42,   43,   37,   45,   59,   47,   61,
   42,   43,  105,   45,   89,   47,   87,   -1,   37,   -1,
   59,   -1,   61,   42,   43,   37,   45,   59,   47,   61,
   42,   43,   -1,   45,   -1,   47,   -1,   -1,   37,   -1,
   59,   -1,   61,   42,   43,   -1,   45,   59,   47,   61,
   -1,   33,  257,  258,  259,  260,   -1,   -1,  263,   41,
   -1,   -1,   44,  125,   -1,   -1,   -1,   -1,   -1,  257,
  258,  259,  260,   -1,   -1,  263,   -1,   59,   -1,   -1,
  268,  261,  262,  263,  264,  265,  266,  267,   -1,   -1,
   -1,   -1,  257,  258,  259,  260,  261,  262,  263,  264,
  265,  266,  267,  268,  261,  262,  263,  264,  265,  266,
  267,  261,  262,  263,  264,  265,  266,  267,  261,  262,
  263,  264,  265,  266,  267,   -1,   -1,   -1,  257,  258,
  259,  260,   -1,   -1,  263,  261,  262,  263,   -1,  265,
  266,  267,   -1,  125,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,  261,
  262,  263,  264,  265,  266,  267,  268,  269,   -1,   -1,
  269,  270,  271,  272,  273,   -1,   -1,  269,  270,  271,
  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  269,  270,  271,  272,  273,   -1,   -1,  269,  270,  271,
  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  269,  270,  271,  272,  273,   -1,   -1,  269,  270,  271,
  272,  273,   -1,   30,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   38,  271,  272,  273,  257,  258,  259,  260,  261,
  262,  263,  264,  265,  266,  267,  268,   54,   -1,   -1,
   -1,   58,   59,   60,   61,   62,   63,   64,   65,   66,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  107,   -1,   -1,   -1,   -1,   -1,   -1,  114,   -1,   -1,
   -1,   -1,   -1,  120,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  139,  140,   -1,   -1,  143,   -1,   -1,   -1,
  147,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  158,   -1,   -1,   -1,  162,
};
#define YYFINAL 6
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 273
#define YYUNDFTOKEN 308
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
"BOOL_CONSTANT","NONVOIDTYPE","VOIDTYPE","ID","RETURN","CONST","COMMENT_START",
"COMMENT_SINGLE","COMMENT_END","OROR","ANDAND","ARITHCOMPARE","PLUSPLUS",
"MINUSMINUS",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"illegal-symbol",
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
"var_declaration : COMMENT",
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
"COMMENT : COMMENT_START comment_contents COMMENT_END",
"COMMENT : COMMENT_SINGLE comment_content",
"comment_contents : comment_contents comment_content",
"comment_contents : comment_content",
"comment_content : expression",

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
#line 235 "parser.y"

int main()
{
  yyparse();
  printf("No syntax error!\n");
  return 0;
}

int yyerror(char *s)
{
  fprintf(stderr, "*** Error at line %d: %s\n", ++numLines, line);
  fprintf(stderr, "\n");
  fprintf(stderr, "Unmatched token: %s\n", yytext);
  fprintf(stderr, "*** %s\n", s);
  exit(1);
}
#line 541 "y.tab.c"

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
