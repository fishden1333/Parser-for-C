/* After makefile, type the following line in terminal to execute the parser: */
/* ./parser << <input file name> >> <output file name> */

%{
  #include <stdio.h>
  #include <string.h>
%}

%start program
%union {
         int intVal;
         double doubVal;
         char charVal;
         char *strVal;
       }

%token CONSTANT TYPE ID
%token RETURN

%left <charVal> ';'
%left <charVal> ','
%right <charVal> '='
%left <charVal> OROR
%left <charVal> ANDAND
%left <charVal> ARITHCOMPARE
%left <charVal> '+' '-'
%left <charVal> '*' '/' '%'
%nonassoc <charVal> PLUSPLUS
%nonassoc <charVal> MINUSMINUS

%%

program:  ;

%%

int main()
{
  yyparse();
  return 0;
}

int yyerror(char *s)
{
  fprintf(stderr, "%s\n", s);
  return 0;
}
