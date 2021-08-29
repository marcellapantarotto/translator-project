/* MARCELLA PANTAROTTO (13/0143880) */
/* PROJECT 2: SYNTAX ANALYZER */

/********** C Stuff (headers, declarations, variables, etc.) **********/
%{
  #include <stdio.h>
  // #include <stdlib.h>
  // #include <string.h>
  #include "structures.h"
  #include "structures.c"

  extern int yylex();
  // int yylex_destroy();
  extern int yyerror(char *s);
  extern FILE *yyin;
%}

/********** Tokens **********/

%token INTEGER STRING SEMICOLON OTHER

%type <token> INTEGER

/********** Brigde between Lex and Y **********/
%union {
  struct t_token {
    int line;
    int col;
    char lexeme[100];
    // int scope;
  } token;
}

//********** Grammar Rules **********
%%
program:
  | INTEGER
  | STRING
  | OTHER
;


%%
//********** C Functions **********
void work_table() {
  symbol_table = create_table();
  printf("---------------\nSYMBOL TABLE\n---------------\nID | TOKENS\n---------------\n");
  print_table();
  destroy_table();
}

int main(int argc, char **argv) {
  ++argv, --argc;

  if ( argc > 0 ) {
    yyin = fopen( argv[0], "r" );
    yyparse();
    
    work_table();
  }
  else
    yyin = stdin;

  printf("PARSING\n");
  work_table();
  return 0;
}



int yyerror(char *s)
{
  fprintf(stderr, "error: %s\n", s);
  return 0;
}