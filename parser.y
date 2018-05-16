/* After makefile, type the following line in terminal to execute the parser: */
/* ./parser << <input file name> >> <output file name> */

%{
  #include <stdio.h>
%}

% token  ID  NUM

%%

statement:  ID = expression
                   | expression  { printf(“= %d\n”, $1); }
                    ;

expression:  expression  ‘+’  NUM    { $$ = $1 + $3; }
                   |  expression  ‘-’  NUM    { $$ = $1 - $3; }
                   |  NUM     { $$ = $1; }
                   ;

%%

int main()
{
  yyparse();
  return 0;
}

int yyerror(char *s)
{
  fprintf( stderr,  “%s\n”,  s );
  return 0;
}
