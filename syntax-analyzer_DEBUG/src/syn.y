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

  extern char *yytext;
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
%token IF_STMT ELSE_STMT FOR_STMT OUTPUT_WRITE OUTPUT_WRITELN INPUT_READ
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
%right IF_STMT ELSE_STMT

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
%type <token> OUTPUT_WRITE
%type <token> OUTPUT_WRITELN
%type <token> INPUT_READ

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
%type <node> declaration
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
// %type <node> statement
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
%type <node> init_variable

/********** Brigde between Lex and Y **********/
%union {
  t_token token;
  t_node *node;
}

%start program

//********** Grammar Rules **********
%%
program: 
  lst_declarations {
      printf(BHBLU "program -> list_of_declarations\n\n" reset);
      // $$ = create_node(&$$, PROGRAM);
      // root = $$;
      // add_tree_node(&$$, &root);
      // add_tree_node(&$$, &$1);

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
  declaration lst_declarations  {
      printf(BHBLU "list_of_declarations -> declaration list_of_declarations\n\n" reset);
      // tree_node *youngest = $1.children;
      // while(youngest->sibilings) {
      //   youngest = youngest->sibilings;
      // }

      // $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
      // printf("$2: ");
      // print_node(&$2);
      // printf("\n");
    }
  | declaration  {
      // printf(BHBLU "list_of_declarations -> declaration\n\n" reset);
      // $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
    }
;

declaration:
  func_declaration {
    printf(BHBLU "declaration -> func_declaration\n\n" reset);
      // $$ = create_node(&$$, DECLARATION);
      // add_tree_node(&$$, &$1);
    }
  | var_declaration {
      printf(BHBLU "declaration -> var_declaration\n\n" reset);
      // $$ = create_node(&$$, DECLARATION);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_node(&$1);
      // printf("\n");
    }
  // | command {
  //   printf(BHBLU "declaration -> command\n\n" reset);
  //   // $$ = create_node(&$$, DECLARATION);
  //   // add_tree_node(&$$, &$1);
  //   }
  | error {
    printf(BHBLU "declaration -> error\n\n" reset);
    }
;

func_declaration:
  unq_declaration {increment_scope();} '(' params ')' '{' block_commands '}' {
      printf(BHBLU "func_declaration -> unq_declaration '(' lst_parameters ')' '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, FUNCTION_DECLARATION);    
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$3, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$4);
      // add_tree_token_node(&$$, &$5, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$6, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$7);
      // add_tree_token_node(&$$, &$8, CLOSE_CURLY_BRACKET);
    }
;

var_declaration:
  unq_declaration ';' {
    printf(BHBLU "var_declaration -> unq_declaration '';'\n\n" reset);
    // $$ = create_node(&$$, VARIABLE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, SEMICOLON);
   }
;

unq_declaration:
  type {add_table_node(yytext);} ID {
    // printf(BHBLU "unq_declaration -> type <ID, %s> \n\n" reset, $3.lexeme);
    // $$ = create_node(&$$, UNIQUE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$3, IDENTIFIER);
   }
;

params:
  /* epsilon */ { 
      printf(BHBLU "lst_parameters -> /* epsilon */\n\n" reset);
    }
  | lst_parameters
;

lst_parameters: 
  parameter ',' lst_parameters  {
    printf(BHBLU "lst_parameters -> parameter ',' lst_parameters\n\n" reset);
    // $$ = create_node(&$$, LIST_OF_PARAMETERS);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, COMMA);
    // add_tree_node(&$$, &$3);
   }
  | parameter {
      printf(BHBLU "lst_parameters -> parameter\n\n" reset);
      // $$ = create_node(&$$, LIST_OF_PARAMETERS);
      // add_tree_node(&$$, &$1);
    }
;

parameter:  
  unq_declaration {
    printf(BHBLU "parameter -> unq_declaration\n\n" reset);
    // $$ = create_node(&$$, PARAMETER);
    // add_tree_node(&$$, &$1);
    }

;

lst_params:
    // epsilon
  | lst_calling_params
;

lst_calling_params:
  operation ',' lst_calling_params
  | operation
;

block_commands: 
  command block_commands  {
    printf(BHBLU "block_commands -> command block_commands\n\n" reset);
    // $$ = create_node(&$$, BLOCK_OF_COMMANDS);
    // add_tree_node(&$$, &$1);
    // add_tree_node(&$$, &$2);
    }
  | /* epsilon */ {
      printf(BHBLU "block_commands -> /* epsilon */\n\n" reset);
    }
;

command: 
  var_declaration {
    printf(BHBLU "command -> var_declaration\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | conditional_stmt {
    printf(BHBLU "command -> conditional_stmt\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | return_stmt {
    printf(BHBLU "command -> return_stmt\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | init_variable {
    printf(BHBLU "command -> init_variable\n\n" reset);
    }
  | iteration {
    printf(BHBLU "command -> iteration\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | input {
    printf(BHBLU "command -> input\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | output {
    printf(BHBLU "command -> output\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | '{' block_commands '}' {
    // $$ = $2;
    }
  | operation ';'
;

conditional_stmt: 
  IF_STMT '(' operation ')' command %prec IF_STMT {
      printf(BHBLU "conditional_stmt -> IF_STMT '(' statement ')' '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, CONDITIONAL_STMT);
      // add_tree_token_node(&$$, &$1, IF);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$6);
      // add_tree_token_node(&$$, &$7, CLOSE_CURLY_BRACKET);
    }
  | IF_STMT '(' operation ')' command ELSE_STMT command  {
      printf(BHBLU "conditional_stmt -> IF_STMT '(' statement ')' ELSE_STMT '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, CONDITIONAL_STMT);
      // add_tree_token_node(&$$, &$1, IF);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, ELSE);
      // add_tree_token_node(&$$, &$6, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$7);
      // add_tree_token_node(&$$, &$8, CLOSE_CURLY_BRACKET);
    }
  
;

return_stmt: 
  RETURN_STM operation ';'  {
    printf(BHBLU "return_stmt -> RETURN_STM statement ';'\n\n" reset);
      // $$ = create_node(&$$, RETURN_STMT);
      // add_tree_token_node(&$$, &$1, RETURN);
      // add_tree_node(&$$, &$2);
      // add_tree_token_node(&$$, &$3, SEMICOLON);
    }
;

init_variable: 
  init_stmt ';'  {
    // printf(BHBLU "init_variable -> init_stmt ';'\n\n" reset);
    }
;

iteration: 
  FOR_STMT '(' loop_condition ')' command {
    printf(BHBLU "FOR_STMT '(' loop_condition ')' '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, ITERATION_PROCESS);
      // add_tree_token_node(&$$, &$1, FOR);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, OPEN_CURLY_BRACKET);
      // add_tree_node(&$$, &$6);
      // add_tree_token_node(&$$, &$7, CLOSE_CURLY_BRACKET);
    }
;

loop_condition: 
  init_stmt ';' operation ';' update_stmt {
    printf(BHBLU "FOR_STMT '(' loop_condition ')' '{' block_commands '}'\n\n" reset);
      // $$ = create_node(&$$, LOOP_CONDITION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, SEMICOLON);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, SEMICOLON);
      // add_tree_node(&$$, &$3);
    }
;

init_stmt: 
  ID '=' operation  {
      // printf(BHBLU "init_stmt -> ID '=' statement\n\n" reset);
      // $$ = create_node(&$$, INITIALIZATION_STMT);
      // add_tree_token_node(&$$, &$1, IDENTIFIER);
      // add_tree_token_node(&$$, &$2, ASSIGN);
      // add_tree_node(&$$, &$3);
    }
;

update_stmt:
  init_stmt {
    printf(BHBLU "update_stmt -> statement\n\n" reset);
      // $$ = create_node(&$$, UPDATE_STMT);
      // add_tree_node(&$$, &$1);
    }
  | /* epsilon */ {
      printf(BHBLU "update_stmt -> /* epsilon */\n\n" reset);
   }
;

output: 
  OUTPUT_WRITE '(' operation ')' ';'  {
    printf(BHBLU "output -> OUTPUT_WRITE '(' statement ')' ';'\n\n" reset);
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITE);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
  | OUTPUT_WRITELN '(' operation ')' ';' {
    printf(BHBLU "output -> OUTPUT_WRITELN '(' statement ')' ';'\n\n" reset);
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
  | OUTPUT_WRITE '(' STRING ')' ';' {}
  | OUTPUT_WRITELN '(' STRING ')' ';' {}
;

input:
  INPUT_READ '(' expression ')' ';' {
    printf(BHBLU "input -> INPUT_READ '(' expression ')' ';'\n\n" reset);
      // $$ = create_node(&$$, OUTPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, READ);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
;

func_calling: 
  ID '(' lst_params ')' {
    // printf(BHBLU "func_calling -> ID '(' lst_parameters ')' ';'\n\n" reset);
      // $$ = create_node(&$$, FUNCTION_CALLING);
      // add_tree_token_node(&$$, &$1, IDENTIFIER);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
;

expression: 
  func_calling {
    // printf(BHBLU "command -> func_calling\n\n" reset);
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | ID {
    // printf(BHBLU "expression -> <ID, %s>\n\n" reset, $1.lexeme);
    // $$ = create_node(&$$, EXPRESSION);
    // add_tree_token_node(&$$, &$1, IDENTIFIER);
    // printf("$$: ");
    // print_node(&$$);
    // printf("$1: ");
    // print_token(&$1);
    // printf("\n\n");
    }
  | const {
    printf(BHBLU "expression -> const\n\n" reset);
      // $$ = create_node(&$$, EXPRESSION);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | single_operation {
    printf(BHBLU "operation -> single_operation\n\n" reset);
    }
;

const: 
  number {
    printf(BHBLU "const -> number\n\n" reset);
      // $$ = create_node(&$$, CONSTANT);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | NIL_CNST {
    printf(BHBLU "const -> NIL_CNST\n\n" reset);
      // $$ = create_node(&$$, CONSTANT);
      // add_tree_token_node(&$$, &$1, NIL);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

number:
  NUM_INT {
      printf(BHBLU "number -> <NUM_INT, %s>\n\n" reset, $1.lexeme);
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, NUMBER_INT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | NUM_FLOAT {
      printf(BHBLU "number -> <NUM_FLOAT, %s>\n\n" reset, $1.lexeme);
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, NUMBER_FLOAT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

type:
  type_lst  {
    printf(BHBLU "type -> type_lst\n\n" reset);
      // $$ = create_node(&$$, TYPE);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | type_number  {
    printf(BHBLU "type -> type_number\n\n" reset);
      // $$ = create_node(&$$, TYPE);
      // add_tree_node(&$$, &$1);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

type_lst:
  type_number T_LIST   {
    printf(BHBLU "type_lst -> type_number T_LIST \n\n" reset);
      // $$ = create_node(&$$, TYPE_LST);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, TYPE_LIST);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

type_number:
  T_INT {
    printf(BHBLU "type_number -> T_INT\n\n" reset);
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, TYPE_INT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | T_FLOAT {
    printf(BHBLU "type_number -> T_INT\n\n" reset);
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, TYPE_FLOAT);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

operation:
  binary_operation {
    printf(BHBLU "operation -> binary_operation\n\n" reset);
    }

;

binary_operation:
  arith_binary {
    printf(BHBLU "binary_operation -> arith_binary\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }
  | lst_binary {
    printf(BHBLU "binary_operation -> lst_binary\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }

  | binary_operation relation_operator expression  {
    printf("arvore: %p", $3);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
  | binary_operation log_operator expression {
    printf(BHBLU "binary_operation -> expression log_operator expression\n\n" reset);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
;

single_operation:
  arith_single {
    printf(BHBLU "single_operation -> arith_single\n\n" reset);
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
  | lst_single {
    printf(BHBLU "single_operation -> lst_single\n\n" reset);
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
  | '!' expression {
    printf(BHBLU "single_operation -> '!' expression\n\n" reset);
    // printf(BHBLU "not_tail -> <NOT_OR_TAIL, %s>\n\n" reset, $1.lexeme);
    // $$ = create_node(&$$, S_OPERATION);
    // add_tree_token_node(&$$, &$1, NOT_OR_TAIL);
    // add_tree_node(&$$, &$2);
    // printf("$$: ");
    // print_node(&$$);
    // printf("$1: ");
    // print_token(&$1);
    // printf("\n\n");
  }
;

arith_binary:
  arith_binary '+' expression
  | arith_binary '-' expression
  | arith_binary '*' expression {
      printf(BHBLU "arith_binary -> expression '*' expression\n\n" reset);
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
  | arith_binary '/' expression {
      printf(BHBLU "arith_binary -> expression '/' expression \n\n" reset);
      //  $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, DIVISION_OP);
      // add_tree_node(&$$, &$3);
    }
  | expression 
;

arith_single:
  '+' expression {
    printf(BHBLU "arith_single -> '+' expression\n\n" reset);
    // $$ = create_node(&$$, ARITHMETIC_SINGLE);
    // add_tree_token_node(&$$, &$1, ADD_OP);
    // add_tree_node(&$$, &$2);
    }
  | '-' expression {
      printf(BHBLU "arith_single -> '-' expression\n\n" reset);
      // $$ = create_node(&$$, ARITHMETIC_SINGLE);
      // add_tree_token_node(&$$, &$1, MINUS_OP);
      // add_tree_node(&$$, &$2);
    }
;

lst_single:
  '%' expression {
      printf(BHBLU "lst_single -> 'POP_OP' expression\n\n" reset);
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, POP_OP);
      // add_tree_node(&$$, &$2);
    }
  | '?' expression {
      printf(BHBLU "lst_single -> '?' expression\n\n" reset);
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, HEAD_OP);
      // add_tree_node(&$$, &$2);
    }
;

lst_binary: 
  expression FILTER expression {
      printf(BHBLU "lst_binary -> expression FILTER expression\n\n" reset);
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, FILTER_OP);

    }
  | expression MAP expression {
      printf(BHBLU "lst_binary -> expression MAP expression\n\n" reset);
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MAP_OP);
      // add_tree_node(&$$, &$3);
    }
  | expression ':' expression {
      printf(BHBLU "lst_binary -> expression ':' expression\n\n" reset);
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, CONSTRUCTOR_OP);
      // add_tree_node(&$$, &$3);
    }
;

log_operator:
  AND  {
      printf(BHBLU "log_operator -> AND\n\n" reset);
      // $$ = create_node(&$$, LOGIC_OPERATOR);
      // add_tree_token_node(&$$, &$1, AND_OP);
    }
  | OR {
      printf(BHBLU "log_operator -> OR\n\n" reset);
      // $$ = create_node(&$$, LOGIC_OPERATOR);
      // add_tree_token_node(&$$, &$1, OR_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

relation_operator:
  GREATER {
      printf(BHBLU "relation_operator -> GREATER\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, GT_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | GREATER_EQ {
      printf(BHBLU "relation_operator -> GREATER_EQ\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, GE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | LESS {
      printf(BHBLU "relation_operator -> LESS\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, LT_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | LESS_EQ {
      printf(BHBLU "relation_operator -> LESS_EQ\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, LE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | EQUAL {
      printf(BHBLU "relation_operator -> EQUAL\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, EQ_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
  | NOT_EQ {
      printf(BHBLU "relation_operator -> NOT_EQ\n\n" reset);
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, NE_OP);
      // printf("$$: ");
      // print_node(&$$);
      // printf("$1: ");
      // print_token(&$1);
      // printf("\n\n");
    }
;

%%
//********** C Functions **********
int yyerror(char *s) {
  fprintf(stderr, BHRED "\nError: %s in line: %d, column: %d\n\n" reset "\n", s, yylineno, column-yyleng);
  return 0;
}

int main(int argc, char **argv) {
  ++argv, --argc;

  root_scope_tree = (t_scope_node*) malloc(sizeof(t_scope_node));
  root_scope_tree->scope_number = 0;
  scope_node_curr = root_scope_tree;

  symbol_table = create_table();
  
  if ( argc > 0 ) {
    yyin = fopen( argv[0], "r" );
    yyparse();
  }
  else
    yyin = stdin;
  
  total_lexical_errors();

  printf("\n~~~~ ABSTRACT TREE ~~~~\n\n");
  print_tree(&root, 1);

  printf("\n====================================================\n");
  printf("\t\t    SYMBOL TABLE");
  printf("\n====================================================\n");
  printf("  ID\t|  TOKENS\t\t\t|  SCOPE");
  printf("\n====================================================\n");
  print_table();
  destroy_table();
  fclose(yyin);
  yylex_destroy();
  
  return 0;
}
