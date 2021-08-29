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

%token INTEGER STRING
%token ID
// %token 'return'
%token ';' '(' ')' '{' '}'

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
  | /* epsilon */
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
  | ID 
  | STRING
  | '('
  | ')'
  | '{'
  | '}'
  | ';'
  
  // variable_declartion
  // | function_declartion
;

// variable_declartion:
//   type ID';' {
//     printf(BHBLU "program -> list_of_declarations -> declaration -> type ID;\n" reset);
//   }
// ;

// function_declartion:
//   type ID'('parameters')' function_definition;
// ;

// function_definition:
//   //'{'block_of_commands 'return' value';''}'
//   ID {
//     printf(BHBLU "program -> list_of_declarations -> declaration -> ID\n" reset);
//   }
// ;

// parameters:
//   parameter parameters
//   | /* epsilon */
// ;

// parameter:
//   type ID
// ;

// block_of_commands:
//   variable_declartion block_of_commands
//   //| command block_of_commands
//   | /* epsilon */
// ;


// type:
//   INTEGER {
//     printf(BHBLU "program -> list_of_declarations -> declaration -> INTEGER\n" reset);
//   }  
// ;


%%
//********** C Functions **********
int yyerror(char *s) {
  fprintf(stderr, BHRED "\nError: %s" reset "\n", s);
  return 0;
}

int main(int argc, char **argv) {
  ++argv, --argc;
  symbol_table = create_table();

  // tree_node *root = new_tree_node();

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
