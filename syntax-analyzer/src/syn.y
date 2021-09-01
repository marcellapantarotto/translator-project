/* MARCELLA PANTAROTTO (13/0143880) */
/* PROJECT 2: SYNTAX ANALYZER */

/********** C Stuff (headers, declarations, variables, etc.) **********/
%defines
%define lr.type canonical-lr

%{
  #include <stdio.h>
  // #include <stdlib.h>
  // #include <string.h>
  #include "structures.h"
  #include "structures.c"

  extern int yyleng;
  extern int yylineno;
  extern int yylex();
  // int yylex_destroy();
  extern int yyerror(char *s);
  extern FILE *yyin;

  t_node root;
%}

/********** Tokens **********/

%token NUM_INT STRING
%token ID
%token ';' '(' ')' '{' '}' ','

%type <token> NUM_INT
%type <token> STRING
%type <token> ID
%type <token> ';'
%type <token> '('
%type <token> ')'
%type <token> '{'
%type <token> '}'
%type <token> ','

%type <node> program
// %type <node> list_of_declarations
%type <node> declaration
// %type <node> number

/********** Brigde between Lex and Y **********/
%union {
  t_token token;
  t_node node;
}

%start program

//********** Grammar Rules **********
%%
program: 
  declaration {
    printf(BHBLU "program -> declarations\n" reset);
    root = create_node(&root, PROGRAM);
    add_tree_node(&root, &$1);
  }
  // | /* epsilon */
;

// list_of_declarations:
//   declaration list_of_declarations {
//     printf(BHBLU "list_of_declarations -> declaration list_of_declarations\n" reset);
//     $$ = create_node(&$$, LST_DECLARATIONS);
//     add_tree_node(&$$, &$1);
//     add_tree_node(&$$, &$2);
//   }
//   | declaration {
//     printf(BHBLU "program -> list_of_declarations -> declaration\n" reset);
//     $$ = create_node(&$$, DECLARATION);
//     add_tree_node(&$$, &$1);
//   }
//   // | /* epsilon */
// ;

declaration:
  ID NUM_INT {
    // printf(BHBLU "declaration -> <ID, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, DECLARATION);
    add_tree_token_node(&$$, &$1, IDENTIFIER);
    add_tree_token_node(&$$, &$2, NUMBER_INT);
    // &$1.lexeme, &$1.line, &$1.column
  }
  | NUM_INT {
      // printf(BHBLU "declaration -> <INTEGER, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, DECLARATION);
      add_tree_token_node(&$$, &$1, NUMBER_INT);
      // &$1.lexeme, &$1.line, &$1.column
    }
  // number {
  //   // printf(BHBLU "declaration -> <INTEGER, %s>\n" reset, $1.lexeme);
  //   $$ = create_node(&$$, DECLARATION);
  //   add_tree_node(&$$, &$1);
  // }
  // | /* epsilon */
  | ID {
    // printf(BHBLU "declaration -> <ID, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, DECLARATION);
    add_tree_token_node(&$$, &$1, IDENTIFIER);
    // &$1.lexeme, &$1.line, &$1.column
  }
;

// number:
//   INTEGER {
//     // printf(BHBLU "declaration -> <INTEGER, %s>\n" reset, $1.lexeme);
//     $$ = create_node(&$$, NUMBER);
//     add_tree_token_node(&$$, &$1, INT);
//     // &$1.lexeme, &$1.line, &$1.column
//   }
// ;
  // | STRING {
  //   printf(BHBLU "declaration -> <STRING, %s>\n" reset, $1.lexeme);
  //   $$ = create_node(&$$, DECLARATION);
  //   add_tree_token_node(&$$, &$1, ID);
  //   // &$1.lexeme, &$1.line, &$1.column
  // }
  // | '(' {
  //   printf(BHBLU "declaration -> <DELIMITER, %s>\n" reset, $1.lexeme);
  //   $$ = create_node(&$$, DECLARATION);
  //   add_tree_token_node(&$$, &$1, DELIMITER);
  //   // &$1.lexeme, &$1.line, &$1.column
  // }
  // | ')' {
  //   printf(BHBLU "declaration -> <DELIMITER, %s>\n" reset, $1.lexeme);
  //   $$ = create_node(&$$, DECLARATION);
  //   add_tree_token_node(&$$, &$1, DELIMITER);
  //   // &$1.lexeme, &$1.line, &$1.column
  // }
  // | '{' {
  //   printf(BHBLU "declaration -> <DELIMITER, %s>\n" reset, $1.lexeme);
  //   $$ = create_node(&$$, DECLARATION);
  //   add_tree_token_node(&$$, &$1, DELIMITER);
  //   // &$1.lexeme, &$1.line, &$1.column
  // }
  // | '}' {
  //   printf(BHBLU "declaration -> <DELIMITER, %s>\n" reset, $1.lexeme);
  //   $$ = create_node(&$$, DECLARATION);
  //   add_tree_token_node(&$$, &$1, DELIMITER);
  //   // &$1.lexeme, &$1.line, &$1.column
  // }
  // | ';' {
  //   printf(BHBLU "declaration -> <SEMICOLON, %s>\n" reset, $1.lexeme);
  //   $$ = create_node(&$$, DECLARATION);
  //   add_tree_token_node(&$$, &$1, SEMICOLON);
  //   // &$1.lexeme, &$1.line, &$1.column
  // }
  
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
  fprintf(stderr, BHRED "\nError: %s in line: %d, column: %d" reset "\n", s, yylineno, column-yyleng);
  return 0;
}

int main(int argc, char **argv) {
  ++argv, --argc;
  symbol_table = create_table();
  

  // tree_node *root = create_node();

  if ( argc > 0 ) {
    yyin = fopen( argv[0], "r" );
    yyparse();
  }
  else
    yyin = stdin;
  
  total_lexical_errors();

  printf("\n~~~~ ABSTRACT TREE ~~~~\n\n");
  print_tree(&root, 1);

  printf("\n---------------\nSYMBOL TABLE\n---------------\nID | TOKENS\n---------------\n");
  print_table();
  destroy_table();
  
  return 0;
}
