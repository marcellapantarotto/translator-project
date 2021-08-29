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

%token INTEGER STRING SEMICOLON
%token ID OTHER

%type <token> INTEGER
%type <token> ID

/********** Brigde between Lex and Y **********/
%union {
  t_token token;
}

//********** Grammar Rules **********
%%
program: 
  list_of_declarations {
    printf(BHBLU "program -> list_of_declarations\n" reset);
  }
;

list_of_declarations:
  declaration list_of_declarations {
    printf(BHBLU "program -> list_of_declarations -> declaration list_of_declarations\n" reset);
  }
  | declaration {
    printf(BHBLU "program -> list_of_declarations -> declaration\n" reset);
  }
;

declaration:
  INTEGER {
    printf(BHBLU "program -> list_of_declarations -> declaration -> INTEGER\n" reset);
  }
  | STRING {
    printf(BHBLU "program -> list_of_declarations -> declaration -> STRING\n" reset);
  }
  | ID {
    printf(BHBLU "program -> list_of_declarations -> declaration -> ID\n" reset);
  }
  | OTHER
;

%%
//********** C Functions **********
int yyerror(char *s) {
  fprintf(stderr, BHRED "\nError: %s" reset "\n", s);
  return 0;
}

int main(int argc, char **argv) {
  ++argv, --argc;
  symbol_table = create_table();

  if ( argc > 0 ) {
    yyin = fopen( argv[0], "r" );
    printf("\n~~~~ PARSING ~~~~\n\n");
    yyparse();
  }
  else
    yyin = stdin;
  
  total_lexical_errors();

  printf("\n---------------\nSYMBOL TABLE\n---------------\nID | TOKENS\n---------------\n");
  print_table();
  destroy_table();
  
  return 0;
}
