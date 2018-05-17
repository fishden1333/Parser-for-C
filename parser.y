/* After makefile, type the following line in terminal to execute the parser: */
/* ./parser << <input file name> >> <output file name> */

%{
  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  extern int numLines;
  extern char line[1000];
  extern char *yytext;
%}

%start program /* Starting symbol */

/* All types */
%union {
         int intVal;
         double doubVal;
         char charVal;
         char *strVal;
       }

%token INT_CONSTANT DOUB_CONSTANT CHAR_CONSTANT BOOL_CONSTANT NONVOIDTYPE VOIDTYPE ID
%token RETURN CONST
%token COMMENT_START COMMENT_SINGLE COMMENT_END

%type <strVal> ID

/* Precedence and associativity */
%left <charVal> ';'
%left NONVOIDTYPE VOIDTYPE
%left <charVal> ','
%right <charVal> '='
%left <charVal> OROR
%left <charVal> ANDAND
%right <charVal> '!'
%left <charVal> ARITHCOMPARE
%left <charVal> '+' '-'
%left <charVal> '*' '/' '%'
%left <charVal> PLUSPLUS MINUSMINUS

%%
/* A program at least has a function definition */
program:
    external func_definition
  ;

external:
    external var_declaration
  | external func_definition
  | var_declaration
  | func_definition
  ;

/* Global variable declaration */

var_declaration:
    scalar_declaration
  | array_declaration
  | func_declaration
  | const_declaration
  | COMMENT
  ;

scalar_declaration:
    NONVOIDTYPE ID_declarations ';'
  ;

array_declaration:
    NONVOIDTYPE IDarr_declarations ';'
  ;

func_declaration:
    NONVOIDTYPE IDfunc_declarations ';'
  | VOIDTYPE IDfunc_declarations ';'
  ;

const_declaration:
    CONST NONVOIDTYPE IDconst_declarations ';'
  ;

ID_declarations:
    ID_declarations ',' ID_declaration
  | ID_declaration
  ;

ID_declaration:
    ID
  | ID '=' expression
  ;

IDarr_declarations:
    IDarr_declarations ',' IDarr_declaration
  | IDarr_declaration
  ;

IDarr_declaration:
    ID dimensions
  | ID dimension '=' arr_content
  ;

dimensions:
    dimensions dimension
  | dimension
  ;

dimension:
    '[' INT_CONSTANT ']'
  ;

arr_content:
    '{' expressions '}'
  | '{''}'
  ;

IDfunc_declarations:
    IDfunc_declarations ',' IDfunc_declaration
  | IDfunc_declaration
  ;

IDfunc_declaration:
    ID '(' parameters ')'
  | ID '('')'
  ;

parameters:
    parameters ',' parameter
  | parameter
  ;

parameter:
    NONVOIDTYPE ID
  | NONVOIDTYPE ID dimensions
  ;

IDconst_declarations:
    IDconst_declarations ',' IDconst_declaration
  | IDconst_declaration
  ;

IDconst_declaration:
    ID '=' CONSTANT
  ;

CONSTANT:
    INT_CONSTANT
  | DOUB_CONSTANT
  | CHAR_CONSTANT
  | BOOL_CONSTANT
  ;

/* Function definition */

func_definition:
    NONVOIDTYPE ID '(' parameters ')' '{' func_contents RETURN expression ';' '}'
  | NONVOIDTYPE ID '(' ')' '{' func_contents RETURN expression ';' '}'
  | NONVOIDTYPE ID '(' parameters ')' '{' RETURN expression ';' '}'
  | NONVOIDTYPE ID '(' ')' '{' RETURN expression ';' '}'
  | VOIDTYPE ID '(' parameters ')' '{' func_contents RETURN ';' '}'
  | VOIDTYPE ID '(' ')' '{' func_contents RETURN ';' '}'
  | VOIDTYPE ID '(' parameters ')' '{' RETURN ';' '}'
  | VOIDTYPE ID '(' ')' '{' RETURN ';' '}'
  ;

func_contents:
    var_declarations func_statements
  | var_declarations
  | func_statements
  ;

var_declarations:
    var_declarations var_declaration
  | var_declaration
  ;

func_statements:
    func_statement func_statements
  | func_statement
  ;

func_statement:
    simple_statement
  | func_invocation
  ;

simple_statement:
    ID '=' expression ';'
  | ID dimensions '=' expression ';'
  ;

func_invocation:
    ID '(' expressions ')' ';'
  | ID '(' ')' ';'

expressions:
    expressions ',' expression
  | expression
  ;

expression:
    CONSTANT
  | ID
  | ID dimensions
  | ID '(' expressions ')'
  | ID '(' ')'
  | expression '=' expression
  | expression '+' expression
  | expression '-' expression
  | expression '*' expression
  | expression '/' expression
  | expression '%' expression
  | expression ARITHCOMPARE expression
  | '!' expression
  | expression ANDAND expression
  | expression OROR expression
  | expression PLUSPLUS
  | expression MINUSMINUS
  ;

COMMENT:
    COMMENT_START comment_contents COMMENT_END
  | COMMENT_SINGLE comment_content
  ;

comment_contents:
    comment_contents comment_content
  | comment_content
  ;

comment_content:
    expression
  ;

%%

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
