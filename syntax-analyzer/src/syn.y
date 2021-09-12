/* MARCELLA PANTAROTTO (13/0143880) */
/* PROJECT 2: SYNTAX ANALYZER */

/********** C Stuff (headers, declarations, variables, etc.) **********/
%defines
%define lr.type canonical-lr

%{
  #include <stdio.h>
  // #include <stdlib.h>
  // #include <string.h>
  #include "../lib/structures.h"
  #include "structures.c"

  extern int yyleng;
  extern int yylineno;
  extern int yylex();
  extern int yylex_destroy();
  extern int yyerror(char *s);
  extern FILE *yyin;

  t_node root;
%}

/********** Tokens **********/

%token NUM_INT NUM_FLOAT STRING NIL_CNST
%token ID
%token RETURN_STM T_INT T_FLOAT T_LIST
%token IF_STMT ELSE_STMT FOR_STMT INPUT_WRITE INPUT_WRITELN OUTPUT_READ
%token '(' ')' '{' '}' ';' ','
%token AND OR
%token GREATER GREATER_EQ LESS LESS_EQ EQUAL NOT_EQ
%token '+' '-' '*' '/'
%token FILTER MAP ':' '%' '?' '!'

%left AND OR
%left GREATER GREATER_EQ LESS LESS_EQ EQUAL NOT_EQ
%right FILTER MAP ':'
%left '+' '-'
%left '*' '/'
%right '%' '?' '!'

%type <token> NUM_INT
%type <token> NUM_FLOAT
%type <token> STRING
%type <token> ID

// symbols
%type <token> '('
%type <token> ')'
%type <token> '{'
%type <token> '}'
%type <token> ';'
%type <token> ','

// keywords
%type <token> NIL_CNST
%type <token> RETURN_STM
%type <token> T_INT
%type <token> T_FLOAT
%type <token> T_LIST
%type <token> IF_STMT
%type <token> ELSE_STMT
%type <token> FOR_STMT
%type <token> INPUT_WRITE
%type <token> INPUT_WRITELN
%type <token> OUTPUT_READ

// operators
%type <token> '='
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
%type <node> program
%type <node> lst_declarations
%type <node> s_declaration
%type <node> operation
%type <node> single_operation
%type <node> binary_operation
%type <node> log_operator
%type <node> relation_operator
%type <node> arith_binary
%type <node> arith_single
%type <node> lst_single
%type <node> lst_binary
%type <node> type
%type <node> expression
%type <node> return_stmt
%type <node> iteration
%type <node> input
%type <node> output
%type <node> func_calling
%type <node> statement
%type <node> var_declaration
%type <node> func_declaration
%type <node> type_number
%type <node> type_lst
%type <node> const
%type <node> block_commands
%type <node> parameter
%type <node> lst_parameters
%type <node> unq_declaration
%type <node> command
%type <node> conditional_stmt
%type <node> number
%type <node> loop_condition
%type <node> init_stmt
%type <node> update_stmt

/********** Brigde between Lex and Y **********/
%union {
  t_token token;
  t_node node;
}

%start program

//********** Grammar Rules **********
%%
program: 
  lst_declarations {
      $$ = create_node(&$$, PROGRAM);
      root = $$;
      add_tree_node(&$$, &root);
      add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
      // printf("\n");
    }
  | /* epsilon */ {

    }
;

lst_declarations:
  s_declaration lst_declarations  {
      // printf(BHBLU "list_of_declarations -> declaration list_of_declarations\n" reset);
      $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      add_tree_node(&$$, &$1);
      add_tree_node(&$$, &$2);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
      // printf("$2: ");
      // print_node(&$2);
    }
  | s_declaration  {
      // printf(BHBLU "list_of_declarations -> declaration\n" reset);
      $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
    }
;

s_declaration:
  var_declaration {
    $$ = create_node(&$$, DECLARATION);
    add_tree_node(&$$, &$1);
    }
  | func_declaration {
    $$ = create_node(&$$, DECLARATION);
    add_tree_node(&$$, &$1);
    }
  | command {
    $$ = create_node(&$$, DECLARATION);
    add_tree_node(&$$, &$1);
    }
  | error {
    
    }
;

var_declaration:
  unq_declaration ';' {
    $$ = create_node(&$$, VARIABLE_DECLARATION);
    add_tree_node(&$$, &$1);
    add_tree_token_node(&$$, &$2, SEMICOLON);
   }
;

func_declaration:
  unq_declaration '(' lst_parameters ')' '{' block_commands '}' {
      $$ = create_node(&$$, FUNCTION_DECLARATION);
      add_tree_node(&$$, &$1);
      add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      add_tree_node(&$$, &$3);
      add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      add_tree_token_node(&$$, &$5, OPEN_CURLY_BRACKET);
      add_tree_node(&$$, &$6);
      add_tree_token_node(&$$, &$7, CLOSE_CURLY_BRACKET);
    }
;

unq_declaration: 
  type ID {
    $$ = create_node(&$$, UNIQUE_DECLARATION);
    add_tree_node(&$$, &$1);
    add_tree_token_node(&$$, &$2, IDENTIFIER);
   }
;

lst_parameters: 
  parameter ',' lst_parameters  {
    $$ = create_node(&$$, LIST_OF_PARAMETERS);
    add_tree_node(&$$, &$1);
    add_tree_token_node(&$$, &$2, COMMA);
    add_tree_node(&$$, &$3);
   }
  | parameter {
    $$ = create_node(&$$, LIST_OF_PARAMETERS);
    add_tree_node(&$$, &$1);
    }
  | /* epsilon */ {

    }
;

parameter:  
  unq_declaration {
    $$ = create_node(&$$, PARAMETER);
    add_tree_node(&$$, &$1);
    }
  | ID  {
    $$ = create_node(&$$, PARAMETER);
    add_tree_token_node(&$$, &$1, IDENTIFIER);
    }
  | expression {
    $$ = create_node(&$$, PARAMETER);
    add_tree_node(&$$, &$1);
    }
;

block_commands: 
  command block_commands  {
    $$ = create_node(&$$, BLOCK_OF_COMMANDS);
    add_tree_node(&$$, &$1);
    add_tree_node(&$$, &$2);
    }
  | command {
    $$ = create_node(&$$, BLOCK_OF_COMMANDS);
    add_tree_node(&$$, &$1);
    }
  | /* epsilon */ {

    }
;

command: 
  var_declaration {
    $$ = create_node(&$$, COMMAND);
    add_tree_node(&$$, &$1);
    }
  | conditional_stmt {
    $$ = create_node(&$$, COMMAND);
    add_tree_node(&$$, &$1);
    }
  | return_stmt {
    $$ = create_node(&$$, COMMAND);
    add_tree_node(&$$, &$1);
    }
  | iteration {
    $$ = create_node(&$$, COMMAND);
    add_tree_node(&$$, &$1);
    }
  | input {
    $$ = create_node(&$$, COMMAND);
    add_tree_node(&$$, &$1);
    }
  | output {
    $$ = create_node(&$$, COMMAND);
    add_tree_node(&$$, &$1);
    }
  | func_calling {
    $$ = create_node(&$$, COMMAND);
    add_tree_node(&$$, &$1);
    }
  | statement  {
    $$ = create_node(&$$, COMMAND);
    add_tree_node(&$$, &$1);
    }
;

conditional_stmt: 
  IF_STMT '(' statement ')' '{' block_commands '}'  {
      $$ = create_node(&$$, CONDITIONAL_STMT);
      add_tree_token_node(&$$, &$1, IF);
      add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      add_tree_node(&$$, &$3);
      add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      add_tree_token_node(&$$, &$5, OPEN_CURLY_BRACKET);
      add_tree_node(&$$, &$6);
      add_tree_token_node(&$$, &$7, CLOSE_CURLY_BRACKET);
    }
  | IF_STMT '(' statement ')' ELSE_STMT '{' block_commands '}'  {
      $$ = create_node(&$$, CONDITIONAL_STMT);
      add_tree_token_node(&$$, &$1, IF);
      add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      add_tree_node(&$$, &$3);
      add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      add_tree_token_node(&$$, &$5, ELSE);
      add_tree_token_node(&$$, &$6, OPEN_CURLY_BRACKET);
      add_tree_node(&$$, &$7);
      add_tree_token_node(&$$, &$8, CLOSE_CURLY_BRACKET);
    }
  | IF_STMT '(' statement ')' ELSE_STMT IF_STMT '(' statement ')' '{' block_commands '}' {
      $$ = create_node(&$$, CONDITIONAL_STMT);
      add_tree_token_node(&$$, &$1, IF);
      add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      add_tree_node(&$$, &$3);
      add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      add_tree_token_node(&$$, &$5, ELSE);
      add_tree_token_node(&$$, &$6, IF);
      add_tree_token_node(&$$, &$7, OPEN_PARENTHESES);
      add_tree_node(&$$, &$8);
      add_tree_token_node(&$$, &$9, CLOSE_PARENTHESES);
      add_tree_token_node(&$$, &$10, OPEN_CURLY_BRACKET);
      add_tree_node(&$$, &$11);
      add_tree_token_node(&$$, &$12, CLOSE_CURLY_BRACKET);
    }
;

return_stmt: 
  RETURN_STM statement ';'  {
      $$ = create_node(&$$, RETURN_STMT);
      add_tree_token_node(&$$, &$1, RETURN);
      add_tree_node(&$$, &$2);
      add_tree_token_node(&$$, &$3, SEMICOLON);
    }
;

iteration: 
  FOR_STMT '(' loop_condition ')' '{' block_commands '}' {
      $$ = create_node(&$$, ITERATION_PROCESS);
      add_tree_token_node(&$$, &$1, FOR);
      add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      add_tree_node(&$$, &$3);
      add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      add_tree_token_node(&$$, &$5, OPEN_CURLY_BRACKET);
      add_tree_node(&$$, &$6);
      add_tree_token_node(&$$, &$7, CLOSE_CURLY_BRACKET);
    }
;

loop_condition: 
  init_stmt ';' statement ';' update_stmt {
      $$ = create_node(&$$, LOOP_CONDITION);
      add_tree_node(&$$, &$1);
      add_tree_token_node(&$$, &$2, SEMICOLON);
      add_tree_node(&$$, &$3);
      add_tree_token_node(&$$, &$4, SEMICOLON);
      add_tree_node(&$$, &$3);
    }
;

init_stmt: 
  ID '=' statement  {
      $$ = create_node(&$$, INITIALIZATION_STMT);
      add_tree_token_node(&$$, &$1, IDENTIFIER);
      add_tree_token_node(&$$, &$2, ASSIGN);
      add_tree_node(&$$, &$3);
    }
;

update_stmt:
  statement {
      $$ = create_node(&$$, UPDATE_STMT);
      add_tree_node(&$$, &$1);
    }
  | /* epsilon */ {

   }
;

input: 
  INPUT_WRITE '(' statement ')' ';'  {
      $$ = create_node(&$$, INPUT_OPERATION);
      add_tree_token_node(&$$, &$1, WRITE);
      add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      add_tree_node(&$$, &$3);
      add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      add_tree_token_node(&$$, &$5, SEMICOLON);
    }
  | INPUT_WRITELN '(' statement ')' ';' {
      $$ = create_node(&$$, INPUT_OPERATION);
      add_tree_token_node(&$$, &$1, WRITELN);
      add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      add_tree_node(&$$, &$3);
      add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      add_tree_token_node(&$$, &$5, SEMICOLON);
    }
;

output:
  OUTPUT_READ '(' expression ')' ';' {
      $$ = create_node(&$$, OUTPUT_OPERATION);
      add_tree_token_node(&$$, &$1, READ);
      add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      add_tree_node(&$$, &$3);
      add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      add_tree_token_node(&$$, &$5, SEMICOLON);
    }
;

func_calling: 
  ID '(' lst_parameters ')' ';' {
      $$ = create_node(&$$, FUNCTION_CALLING);
      add_tree_token_node(&$$, &$1, IDENTIFIER);
      add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      add_tree_node(&$$, &$3);
      add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      add_tree_token_node(&$$, &$5, SEMICOLON);
    }
;

statement: 
  operation {
      $$ = create_node(&$$, STATEMENT);
      add_tree_node(&$$, &$1);
    }
  | expression {
      $$ = create_node(&$$, STATEMENT);
      add_tree_node(&$$, &$1);
    }
  | STRING {
      $$ = create_node(&$$, STATEMENT);
      add_tree_token_node(&$$, &$1, STRING);
    }
;

expression: 
  ID {
    // printf(BHBLU "declaration -> <ID, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, EXPRESSION);
    add_tree_token_node(&$$, &$1, IDENTIFIER);
    // printf("$$: ");
    // print_node(&$$);
    // printf("$1: ");
    // print_token(&$1);
    // printf("\n\n");
    }
  | const   {
      $$ = create_node(&$$, EXPRESSION);
      add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

const: 
  number  {
      $$ = create_node(&$$, CONSTANT);
      add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | NIL_CNST {
      $$ = create_node(&$$, CONSTANT);
      add_tree_token_node(&$$, &$1, NIL);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

number:
  NUM_INT {
      // printf(BHBLU "declaration -> <INTEGER, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, NUMBER);
      add_tree_token_node(&$$, &$1, NUMBER_INT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | NUM_FLOAT {
      // printf(BHBLU "declaration -> <FLOAT, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, NUMBER);
      add_tree_token_node(&$$, &$1, NUMBER_FLOAT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

type:
  type_lst  {
      $$ = create_node(&$$, TYPE);
      add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | type_number  {
      $$ = create_node(&$$, TYPE);
      add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

type_lst:
  type_number T_LIST   {
      $$ = create_node(&$$, TYPE_LST);
      add_tree_node(&$$, &$1);
      add_tree_token_node(&$$, &$2, TYPE_LIST);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

type_number:
  T_INT {
      $$ = create_node(&$$, NUMBER);
      add_tree_token_node(&$$, &$1, TYPE_INT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | T_FLOAT {
      $$ = create_node(&$$, NUMBER);
      add_tree_token_node(&$$, &$1, TYPE_FLOAT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

operation:
  single_operation
  | binary_operation
;

binary_operation:
  arith_binary {
      $$ = create_node(&$$, B_OPERATION);
      add_tree_node(&$$, &$1);
    }
  | lst_binary {
      $$ = create_node(&$$, B_OPERATION);
      add_tree_node(&$$, &$1);
    }
  | expression '=' expression {
      $$ = create_node(&$$, B_OPERATION);
      add_tree_node(&$$, &$1);
      add_tree_token_node(&$$, &$2, ASSIGN);
      add_tree_node(&$$, &$3);
    }
  | expression relation_operator expression  {
      $$ = create_node(&$$, B_OPERATION);
      add_tree_node(&$$, &$1);
      add_tree_node(&$$, &$2);
      add_tree_node(&$$, &$3);
    }
  | expression log_operator expression {
      $$ = create_node(&$$, B_OPERATION);
      add_tree_node(&$$, &$1);
      add_tree_node(&$$, &$2);
      add_tree_node(&$$, &$3);
    }
;

single_operation:
  arith_single {
      $$ = create_node(&$$, S_OPERATION);
      add_tree_node(&$$, &$1);
    }
  | lst_single {
      $$ = create_node(&$$, S_OPERATION);
      add_tree_node(&$$, &$1);
    }
  | '!' expression {
    // printf(BHBLU "not_tail -> <NOT_OR_TAIL, %s>\n" reset, $1.lexeme);
    $$ = create_node(&$$, S_OPERATION);
    add_tree_token_node(&$$, &$1, NOT_OR_TAIL);
    add_tree_node(&$$, &$2);
    // printf("$$: ");
    // print_node(&$$);
    // printf("$1: ");
    // print_token(&$1);
    // printf("\n\n");
  }
;

arith_binary:
  expression arith_single {
      $$ = create_node(&$$, ARITHMETIC_BINARY);
      add_tree_node(&$$, &$1);
      add_tree_node(&$$, &$2);
    }
  | arith_binary arith_single {
      $$ = create_node(&$$, ARITHMETIC_BINARY);
      add_tree_node(&$$, &$1);
      add_tree_node(&$$, &$2);
    }
  | arith_single arith_binary {
      $$ = create_node(&$$, ARITHMETIC_BINARY);
      add_tree_node(&$$, &$1);
      add_tree_node(&$$, &$2);
    }
  | expression '*' expression {
      // printf(BHBLU "arithmetic_operator -> <MULTIPLY_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, ARITHMETIC_BINARY);
      add_tree_node(&$$, &$1);
      add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      add_tree_node(&$$, &$3);
      
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n");
    }
  | expression '/' expression {
      // printf(BHBLU "arithmetic_operator -> <DIVISION_OP, %s>\n" reset, $1.lexeme);
       $$ = create_node(&$$, ARITHMETIC_BINARY);
      add_tree_node(&$$, &$1);
      add_tree_token_node(&$$, &$2, DIVISION_OP);
      add_tree_node(&$$, &$3);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

arith_single:
    '+' expression {
      // printf(BHBLU "arithmetic_operator -> <ADD_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, ARITHMETIC_SINGLE);
      add_tree_token_node(&$$, &$1, ADD_OP);
      add_tree_node(&$$, &$2);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | '-' expression {
      // printf(BHBLU "arithmetic_operator -> <MINUS_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, ARITHMETIC_SINGLE);
      add_tree_token_node(&$$, &$1, MINUS_OP);
      add_tree_node(&$$, &$2);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n");
    }
;

lst_single:
  '%' expression {
      // printf(BHBLU "list_operator -> <POP_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, LIST_SINGLE);
      add_tree_token_node(&$$, &$1, POP_OP);
      add_tree_node(&$$, &$2);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | '?' expression {
      // printf(BHBLU "list_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, LIST_SINGLE);
      add_tree_token_node(&$$, &$1, HEAD_OP);
      add_tree_node(&$$, &$2);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

lst_binary: 
  expression FILTER expression {
      // printf(BHBLU "list_operator -> <FILTER_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, LIST_BINARY);
      add_tree_node(&$$, &$1);
      add_tree_token_node(&$$, &$2, FILTER_OP);
      add_tree_node(&$$, &$3);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | expression MAP expression {
      // printf(BHBLU "list_operator -> <MAP_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, LIST_BINARY);
      add_tree_node(&$$, &$1);
      add_tree_token_node(&$$, &$2, MAP_OP);
      add_tree_node(&$$, &$3);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | expression ':' expression {
      // printf(BHBLU "list_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, LIST_BINARY);
      add_tree_node(&$$, &$1);
      add_tree_token_node(&$$, &$2, CONSTRUCTOR_OP);
      add_tree_node(&$$, &$3);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

log_operator:
  AND  {
      // printf(BHBLU "logic_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, LOGIC_OPERATOR);
      add_tree_token_node(&$$, &$1, AND_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | OR {
      // printf(BHBLU "logic_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, LOGIC_OPERATOR);
      add_tree_token_node(&$$, &$1, OR_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

relation_operator:
  GREATER {
      // printf(BHBLU "relational_operator -> <CONSTRUCTOR_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, RELATIONAL_OPERATOR);
      add_tree_token_node(&$$, &$1, GT_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | GREATER_EQ {
      // printf(BHBLU "relational_operator -> <POP_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, RELATIONAL_OPERATOR);
      add_tree_token_node(&$$, &$1, GE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | LESS {
      // printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, RELATIONAL_OPERATOR);
      add_tree_token_node(&$$, &$1, LT_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | LESS_EQ {
      // printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, RELATIONAL_OPERATOR);
      add_tree_token_node(&$$, &$1, LE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | EQUAL {
      // printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, RELATIONAL_OPERATOR);
      add_tree_token_node(&$$, &$1, EQ_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | NOT_EQ {
      // printf(BHBLU "relational_operator -> <HEAD_OP, %s>\n" reset, $1.lexeme);
      $$ = create_node(&$$, RELATIONAL_OPERATOR);
      add_tree_token_node(&$$, &$1, NE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

// symbols:
//   '(' {
//     // printf(BHBLU "symbols -> <OPEN_PARENTHESES, %s>\n" reset, $1.lexeme);
//     // $$ = create_node(&$$, SYMBOL);
//     // add_tree_token_node(&$$, &$1, OPEN_PARENTHESES);
//   }
//   | ')' {
//     // printf(BHBLU "SYMBOL -> <CLOSE_PARENTHESES, %s>\n" reset, $1.lexeme);
//     // $$ = create_node(&$$, SYMBOL);
//     // add_tree_token_node(&$$, &$1, CLOSE_PARENTHESES);
//   }
//   | '{' {
//     // printf(BHBLU "SYMBOL -> <OPEN_CURLY_BRACKET, %s>\n" reset, $1.lexeme);
//     // $$ = create_node(&$$, SYMBOL);
//     // add_tree_token_node(&$$, &$1, OPEN_CURLY_BRACKET);
//   }
//   | '}' {
//     // printf(BHBLU "SYMBOL -> <CLOSE_CURLY_BRACKET, %s>\n" reset, $1.lexeme);
//     // $$ = create_node(&$$, SYMBOL);
//     // add_tree_token_node(&$$, &$1, CLOSE_CURLY_BRACKET);
//   }
//   | ';' {
//     // printf(BHBLU "SYMBOL -> <SEMICOLON, %s>\n" reset, $1.lexeme);
//     // $$ = create_node(&$$, SYMBOL);
//     // add_tree_token_node(&$$, &$1, SEMICOLON);
//   }
//   | ',' {
//     // printf(BHBLU "SYMBOL -> <SEMICOLON, %s>\n" reset, $1.lexeme);
//     // $$ = create_node(&$$, SYMBOL);
//     // add_tree_token_node(&$$, &$1, COMMA);
//   }
// ;



%%
//********** C Functions **********
int yyerror(char *s) {
  fprintf(stderr, BHRED "\nError: %s in line: %d, column: %d\n" reset "\n", s, yylineno, column-yyleng);
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

  printf("\n----------------------------------------------------\n");
  printf("\t\t    SYMBOL TABLE");
  printf("\n----------------------------------------------------\n");
  printf("  ID\t|  TOKENS\t\t\t|  SCOPE");
  printf("\n----------------------------------------------------\n");
  print_table();
  destroy_table();
  fclose(yyin);
  yylex_destroy();
  
  return 0;
}
