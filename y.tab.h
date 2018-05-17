#define CONSTANT 257
#define TYPE 258
#define ID 259
#define RETURN 260
#define OROR 261
#define ANDAND 262
#define ARITHCOMPARE 263
#define PLUSPLUS 264
#define MINUSMINUS 265
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
         int intVal;
         double doubVal;
         char charVal;
         char *strVal;
       } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
