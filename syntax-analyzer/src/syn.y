/* MARCELLA PANTAROTTO (13/0143880) */
/* PROJECT 2: SYNTAX ANALYZER */

/********** C Stuff (headers, declarations, variables, etc.) **********/
%{
  #include <stdio.h>
  // #include <stdlib.h>
  // #include <string.h>

  int yylex();
  // int yylex_destroy();
  int yyerror(char *s);
%}

/********** Tokens **********/

%token INTEGER STRING SEMICOLON OTHER

%type <num_int> INTEGER
%type <text> STRING

/********** Brigde between Lex and Y **********/
%union {
  int num_int;
  char text[50];
}

//********** Grammar Rules **********
%%
program:
  | INTEGER
;


%%
//********** C Functions **********
int main(int argc, char **argv)
{
  symbol_table = create_table();
  yyparse();
  printf("---------------\nSYMBOL TABLE\n---------------\nID | TOKENS\n---------------\n");
  print_table();
  destroy_table();

  return 0;
}

int yyerror(char *s)
{
  fprintf(stderr, "error: %s\n", s);
  return 0;
}