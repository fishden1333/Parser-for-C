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
