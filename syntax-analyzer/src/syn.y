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

%token AND OR
%token GREATER GREATER_EQ LESS LESS_EQ EQUAL NOT_EQ
%token '+' '-' '*' '/'
%token FILTER MAP ':' '%' '?' '!'



%type <token> NUM_INT
%type <token> STRING
%type <token> ID


// symbols
%type <token> '('
%type <token> ')'
%type <token> '{'
%type <token> '}'
%type <token> ';'
%type <token> ','

// operators
%type <token> AND
%type <token> OR

%type <token> GREATER
%type <token> GREATER_EQ
%type <token> LESS
%type <token> LESS_EQ
%type <token> EQUAL
%type <token> NOT_EQ

%type <token> '+'
%type <token> '-'
%type <token> '*'
%type <token> '/'

%type <token> FILTER
%type <token> MAP
%type <token> ':'
%type <token> '%'
%type <token> '?'
%type <token> '!'

// rules of grammer
%type <node> root_node
%type <node> program
%type <node> declaration
%type <node> symbols

%type <node> operation
%type <node> log_operator
%type <node> relation_operator
%type <node> arith_operator
%type <node> lst_operator
%type <node> not_tail

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
    // root = $$;
    printf(BHBLU "root_node -> program\n" reset);
    // root = create_node(&root, ROOT);
    // add_tree_node(&root, &$1);
    // printf("root: ");
    // print_node(&root);

    $$ = create_node(&$$, ROOT);
    add_tree_node(&$$, &$1);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
    printf("\n");
  }
;

program: 
  symbols declaration {
    printf(BHBLU "program -> symbols declaration\n" reset);
    $$ = create_node(&$$, PROGRAM);
    $1 = create_node(&$$, SYMBOL);
    add_tree_node(&$$, &$1);
    add_tree_node(&$$, &$2);

    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
    printf("$2: ");
    print_node(&$2);
    printf("\n");
  }
  | symbols {
    printf(BHBLU "program -> symbols\n" reset);
    $$ = create_node(&$$, PROGRAM);
    add_tree_node(&$$, &$1);

    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
  }
  | declaration  {
    printf(BHBLU "program -> declaration\n" reset);
    $$ = create_node(&$$, PROGRAM);
    add_tree_node(&$$, &$1);
    
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
  }
  | operation
;

declaration:
  ID NUM_INT {
    printf(BHBLU "declaration -> <ID INTEGER, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, DECLARATION);
    add_tree_token_node(&$$, &$1, IDENTIFIER);
    add_tree_token_node(&$$, &$2, NUMBER_INT);
    // &$1.lexeme, &$1.line, &$1.column

    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("$2: ");
    print_token(&$2);
    printf("\n\n");
  }
  | NUM_INT {
      printf(BHBLU "declaration -> <INTEGER, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, DECLARATION);
      add_tree_token_node(&$$, &$1, NUMBER_INT);
      // &$1.lexeme, &$1.line, &$1.column

      printf("$$: ");
      print_node(&$$);
      printf("$1: ");
      print_token(&$1);
      printf("\n\n");
    }
  | ID {
    printf(BHBLU "declaration -> <ID, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, DECLARATION);
    add_tree_token_node(&$$, &$1, IDENTIFIER);
     // &$1.lexeme, &$1.line, &$1.column

    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
;

symbols:
  '(' {
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

;

operation:
  log_operator {
    printf(BHBLU "operation -> logic_operator\n" reset);
    $$ = create_node(&$$, OPERATION);
    $1 = create_node(&$1, LOGIC_OPERATOR);
    add_tree_node(&$$, &$1);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
    printf("\n");
  }
  | relation_operator {
    printf(BHBLU "operation -> relational_operator\n" reset);
    $$ = create_node(&$$, OPERATION);
    $1 = create_node(&$1, RELATIONAL_OPERATOR);
    add_tree_node(&$$, &$1);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
    printf("\n");
  }
  | arith_operator {
    printf(BHBLU "operation -> arithmetic_operator\n" reset);
    $$ = create_node(&$$, OPERATION);
    $1 = create_node(&$1, ARITHMETIC_OPERATOR);
    add_tree_node(&$$, &$1);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
    printf("\n");
  }
  | lst_operator {
    printf(BHBLU "operation -> list_operator\n" reset);
    $$ = create_node(&$$, OPERATION);
    $1 = create_node(&$1, LIST_OPERATOR);
    add_tree_node(&$$, &$1);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
    printf("\n");
  }
;

log_operator:
  // not_tail {
  //   printf(BHBLU "logic_operator -> not_tail\n" reset);
  //   $$ = create_node(&$$, LOGIC_OPERATOR);
  //   $1 = create_node(&$1, NOT_OR_TAIL);
  //   add_tree_node(&$$, &$1);
  //   printf("$$: ");
  //   print_node(&$$);
  //   printf("$1: ");
  //   print_node(&$1);
  //   printf("\n");
  // }
  // | 
  AND  {
      printf(BHBLU "logic_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, LOGIC_OPERATOR);
      add_tree_token_node(&$$, &$1, AND_OP);
      printf("$$: ");
      print_node(&$$);
      printf("$1: ");
      print_token(&$1);
      printf("\n\n");
  }
  | OR {
      printf(BHBLU "logic_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, LOGIC_OPERATOR);
      add_tree_token_node(&$$, &$1, OR_OP);
      printf("$$: ");
      print_node(&$$);
      printf("$1: ");
      print_token(&$1);
      printf("\n\n");
  }
;

relation_operator:
  GREATER {
    printf(BHBLU "relational_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, RELATIONAL_OPERATOR);
    add_tree_token_node(&$$, &$1, GT_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
  | GREATER_EQ {
    printf(BHBLU "relational_operator -> <POP_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, RELATIONAL_OPERATOR);
    add_tree_token_node(&$$, &$1, GE_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
  | LESS {
    printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, RELATIONAL_OPERATOR);
    add_tree_token_node(&$$, &$1, LT_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
  | LESS_EQ {
    printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, RELATIONAL_OPERATOR);
    add_tree_token_node(&$$, &$1, LE_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
  | EQUAL {
    printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, RELATIONAL_OPERATOR);
    add_tree_token_node(&$$, &$1, EQ_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
  | NOT_EQ {
    printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, RELATIONAL_OPERATOR);
    add_tree_token_node(&$$, &$1, NE_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
;

arith_operator:
  '+' {
    printf(BHBLU "arithmetic_operator -> <ADD_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, ARITHMETIC_OPERATOR);
    add_tree_token_node(&$$, &$1, ADD_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
  | '-' {
    printf(BHBLU "arithmetic_operator -> <MINUS_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, ARITHMETIC_OPERATOR);
    add_tree_token_node(&$$, &$1, MINUS_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n");
  }
  | '*' {
    printf(BHBLU "arithmetic_operator -> <MULTIPLY_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, ARITHMETIC_OPERATOR);
    add_tree_token_node(&$$, &$1, MULTIPLY_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n");
  }
  | '/' {
    printf(BHBLU "arithmetic_operator -> <DIVISION_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, ARITHMETIC_OPERATOR);
    add_tree_token_node(&$$, &$1, DIVISION_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
;
  
lst_operator:
  not_tail {
    printf(BHBLU "list_operator -> not_tail\n" reset);
    $$ = create_node(&$$, LIST_OPERATOR);
    $1 = create_node(&$1, NOT_OR_TAIL);
    add_tree_node(&$$, &$1);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_node(&$1);
    printf("\n");
  }
  | FILTER {
    printf(BHBLU "list_operator -> <FILTER_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, LIST_OPERATOR);
    add_tree_token_node(&$$, &$1, FILTER_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
  | MAP {
    printf(BHBLU "list_operator -> <MAP_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, LIST_OPERATOR);
    add_tree_token_node(&$$, &$1, MAP_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
  | ':' {
    printf(BHBLU "list_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, LIST_OPERATOR);
    add_tree_token_node(&$$, &$1, CONSTRUCTOR_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
  | '%' {
    printf(BHBLU "list_operator -> <POP_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, LIST_OPERATOR);
    add_tree_token_node(&$$, &$1, POP_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
  | '?' {
    printf(BHBLU "list_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, LIST_OPERATOR);
    add_tree_token_node(&$$, &$1, HEAD_OP);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
  }
;
  
not_tail:
  '!' {
    printf(BHBLU "not_tail -> <NOT_OR_TAIL, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, SYMBOL);
    add_tree_token_node(&$$, &$1, NOT_OR_TAIL);
    printf("$$: ");
    print_node(&$$);
    printf("$1: ");
    print_token(&$1);
    printf("\n\n");
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
