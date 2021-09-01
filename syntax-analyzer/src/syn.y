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
%token '(' ')' '{' '}' ';' ','
%token FILTER MAP ':' '%' '?' '!'


%type <token> NUM_INT
%type <token> STRING
%type <token> ID

%type <token> '('
%type <token> ')'
%type <token> '{'
%type <token> '}'
%type <token> ';'
%type <token> ','

%type <token> FILTER
%type <token> MAP
%type <token> ':'
%type <token> '%'
%type <token> '?'
%type <token> '!'

%type <node> program
// %type <node> list_of_declarations
// %type <node> declaration
%type <node> symbols
%type <node> not_tail
%type <node> root_node

/********** Brigde between Lex and Y **********/
%union {
  t_token token;
  t_node node;
}

%start root_node

//********** Grammar Rules **********
%%
root_node: 
  program {
    root = $$;
    printf("root\n$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
    // add_tree_node(&root, &$1);
  }
;

program: 
  symbols {
    printf(BHBLU "program -> symbols\n" reset);
    $$ = create_node(&$$, PROGRAM);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
    // add_tree_node(&$$, &$1);
  }
  // | /* epsilon */
;

// list_of_declarations:
//   declaration list_of_declarations {
//     printf(BHBLU "list_of_declarations -> declaration list_of_declarations\n" reset);
//     $$ = create_node(&$$, LIST_OF_DECLARATIONS);
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

// declaration:
//   ID NUM_INT {
//     // printf(BHBLU "declaration -> <ID, %s>\n" reset, $1.lexeme);
//     $$ = create_node(&$$, DECLARATION);
//     add_tree_token_node(&$$, &$1, IDENTIFIER);
//     add_tree_token_node(&$$, &$2, NUMBER_INT);
//     // &$1.lexeme, &$1.line, &$1.column
//   }
//   | NUM_INT {
//       // printf(BHBLU "declaration -> <INTEGER, %s>\n" reset, $1.lexeme);
//       $$ = create_node(&$$, DECLARATION);
//       add_tree_token_node(&$$, &$1, NUMBER_INT);
//       // &$1.lexeme, &$1.line, &$1.column
//     }
//   | ID {
//     // printf(BHBLU "declaration -> <ID, %s>\n" reset, $1.lexeme);
//     $$ = create_node(&$$, DECLARATION);
//     add_tree_token_node(&$$, &$1, IDENTIFIER);
//     // &$1.lexeme, &$1.line, &$1.column
//   }
//   | symbols
;

symbols:
  not_tail {
    printf(BHBLU "symbols -> not_tail\n" reset);
    $$ = create_node(&$$, SYMBOL);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
    // add_tree_node(&$$, &$1);
  }
  | '(' {
    printf(BHBLU "symbols -> <OPEN_PARENTHESES, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, OPEN_PARENTHESES);
  }
  | ')' {
    printf(BHBLU "SYMBOL -> <CLOSE_PARENTHESES, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, CLOSE_PARENTHESES);
  }
  | '{' {
    printf(BHBLU "SYMBOL -> <OPEN_CURLY_BRACKET, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, OPEN_CURLY_BRACKET);
  }
  | '}' {
    printf(BHBLU "SYMBOL -> <CLOSE_CURLY_BRACKET, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, CLOSE_CURLY_BRACKET);
  }
  | ';' {
    printf(BHBLU "SYMBOL -> <SEMICOLON, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, SEMICOLON);
  }
  | ',' {
    printf(BHBLU "SYMBOL -> <SEMICOLON, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, COMMA);
  }
  | FILTER {
    printf(BHBLU "SYMBOL -> <FILTER_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, FILTER_OP);
  }
  | MAP {
    printf(BHBLU "SYMBOL -> <MAP_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, MAP_OP);
  }
  | ':' {
    printf(BHBLU "SYMBOL -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, CONSTRUCTOR_OP);
  }
  | '%' {
    printf(BHBLU "SYMBOL -> <POP_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, POP_OP);
  }
  | '?' {
    printf(BHBLU "SYMBOL -> <HEAD_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, HEAD_OP);
  }
;
  
not_tail:
  '!' {
    printf(BHBLU "not_tail -> <NOT_OR_TAIL, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n");
    add_tree_token_node(&$$, &$1, NOT_OR_TAIL);
  }
;


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
