/* MARCELLA PANTAROTTO (13/0143880) */
/* PROJECT 2: SYNTAX ANALYZER */

/********** C Stuff (headers, declarations, variables, etc.) **********/
%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  int yylex();
  int yylex_destroy();
  int yyerror(char *s);
%}

/********** Tokens **********/

%token INTEGER STRING SEMICOLON OTHER
%token STMTS:  | STMT SEMICOLON STMTS
%token STMT: STRING | NUMBER | OTHER

%type <number> INTEGER
%type <text> STRING

/********** Brigde between Lex and Y **********/
%union {
  int number;
  char text[50];
}


//********** Grammar **********
%%
program:
  stmts
;

stmts:
  | stmt SEMICOLON stmts
;

stmt:
  STRING { printf("String: %s \n", $1); }
  | NUMBER { printf("Number: %d \n", $1); }
  | OTHER
;

%%
//********** C Functions **********

int yyerror(char *s) {
  printf("Syntax Error on line %s \n", s);
  return 0;
}

int main() {
  yyparse();
  return 0;
}