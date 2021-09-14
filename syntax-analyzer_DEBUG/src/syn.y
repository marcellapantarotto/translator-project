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
%type <node> var_declaration
%type <node> func_declaration
%type <node> type_number
%type <node> type_lst
%type <node> const
%type <node> block_commands
// %type <node> parameter
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
      // $$ = create_node(&$$, PROGRAM);
      // root = $$;
      // add_tree_node(&$$, &root);
      // add_tree_node(&$$, &$1);
    }
  | /* epsilon */ { }
;

lst_declarations:
  declaration lst_declarations  {
      // tree_node *youngest = $1.children;
      // while(youngest->sibilings) {
      //   youngest = youngest->sibilings;
      // }
      // $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
    }
  | declaration  {
      // $$ = create_node(&$$, LIST_OF_DECLARATIONS);
      // add_tree_node(&$$, &$1);
    }
;

declaration:
  func_declaration {
      // $$ = create_node(&$$, DECLARATION);
      // add_tree_node(&$$, &$1);
    }
  | var_declaration {
      // $$ = create_node(&$$, DECLARATION);
      // add_tree_node(&$$, &$1);
    }
  | error { }
;

func_declaration:
  unq_declaration {increment_scope();} '(' parameters ')' '{' block_commands '}' {
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
    // $$ = create_node(&$$, VARIABLE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, SEMICOLON);
   }
;

unq_declaration:
  type {add_table_node(yytext);} ID {
    // $$ = create_node(&$$, UNIQUE_DECLARATION);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$3, IDENTIFIER);
   }
;

parameters:
  /* epsilon */
  | lst_parameters { }
;

lst_parameters: 
  unq_declaration ',' lst_parameters  {
    // $$ = create_node(&$$, LIST_OF_PARAMETERS);
    // add_tree_node(&$$, &$1);
    // add_tree_token_node(&$$, &$2, COMMA);
    // add_tree_node(&$$, &$3);
   }
  | unq_declaration {
      // $$ = create_node(&$$, LIST_OF_PARAMETERS);
      // add_tree_node(&$$, &$1);
    }
;

calling_parameters:
  /* epsilon */
  | lst_calling_parameters { }
;

lst_calling_parameters:
  operation ',' lst_calling_parameters { }
  | operation { }
;

block_commands: 
  command block_commands  {
    // $$ = create_node(&$$, BLOCK_OF_COMMANDS);
    // add_tree_node(&$$, &$1);
    // add_tree_node(&$$, &$2);
    }
  | /* epsilon */ { }
;

command: 
  var_declaration {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | init_variable {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | conditional_stmt {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | return_stmt {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | iteration {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | input {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | output {
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | '{' block_commands '}' {
    // $$ = $2;
    }
  | operation ';' { 
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, SEMICOLON);
    }
;

init_variable: 
  init_stmt ';' {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, SEMICOLON);
    }
;

conditional_stmt: 
  IF_STMT '(' operation ')' command %prec IF_STMT {
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
      // $$ = create_node(&$$, RETURN_STMT);
      // add_tree_token_node(&$$, &$1, RETURN);
      // add_tree_node(&$$, &$2);
      // add_tree_token_node(&$$, &$3, SEMICOLON);
    }
;

iteration: 
  FOR_STMT '(' loop_condition ')' command {
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
      // $$ = create_node(&$$, INITIALIZATION_STMT);
      // add_tree_token_node(&$$, &$1, IDENTIFIER);
      // add_tree_token_node(&$$, &$2, ASSIGN);
      // add_tree_node(&$$, &$3);
    }
;

update_stmt:
  init_stmt {
      // $$ = create_node(&$$, UPDATE_STMT);
      // add_tree_node(&$$, &$1);
    }
  | /* epsilon */ { }
;

output: 
  OUTPUT_WRITE '(' operation ')' ';'  {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITE);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
  | OUTPUT_WRITELN '(' operation ')' ';' {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
  | OUTPUT_WRITE '(' STRING ')' ';' {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
  | OUTPUT_WRITELN '(' STRING ')' ';' {
      // $$ = create_node(&$$, INPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, WRITELN);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
;

input:
  INPUT_READ '(' expression ')' ';' {
      // $$ = create_node(&$$, OUTPUT_OPERATION);
      // add_tree_token_node(&$$, &$1, READ);
      // add_tree_token_node(&$$, &$2, OPEN_PARENTHESES);
      // add_tree_node(&$$, &$3);
      // add_tree_token_node(&$$, &$4, CLOSE_PARENTHESES);
      // add_tree_token_node(&$$, &$5, SEMICOLON);
    }
;

func_calling: 
  ID '(' calling_parameters ')' {
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
    // $$ = create_node(&$$, COMMAND);
    // add_tree_node(&$$, &$1);
    }
  | single_operation {
      // $$ = create_node(&$$, COMMAND);
      // add_tree_node(&$$, &$1);
    }
  | const {
      // $$ = create_node(&$$, EXPRESSION);
      // add_tree_node(&$$, &$1);
    }
  | ID {
    // $$ = create_node(&$$, EXPRESSION);
    // add_tree_token_node(&$$, &$1, IDENTIFIER);
    }
;

const: 
  number {
      // $$ = create_node(&$$, CONSTANT);
      // add_tree_node(&$$, &$1);
    }
  | NIL_CNST {
      // $$ = create_node(&$$, CONSTANT);
      // add_tree_token_node(&$$, &$1, NIL);
    }
;

number:
  NUM_INT {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, NUMBER_INT);
    }
  | NUM_FLOAT {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, NUMBER_FLOAT);
    }
;

type:
  type_lst  {
      // $$ = create_node(&$$, TYPE);
      // add_tree_node(&$$, &$1);
    }
  | type_number  {
      // $$ = create_node(&$$, TYPE);
      // add_tree_node(&$$, &$1);
    }
;

type_lst:
  type_number T_LIST   {
      // $$ = create_node(&$$, TYPE_LST);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, TYPE_LIST);
    }
;

type_number:
  T_INT {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, TYPE_INT);
    }
  | T_FLOAT {
      // $$ = create_node(&$$, NUMBER);
      // add_tree_token_node(&$$, &$1, TYPE_FLOAT);
    }
;

operation:
  arith_binary {
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }
  | lst_binary {
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
    }
  | operation relation_operator expression  {
      printf("arvore: %p\n", $3);
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
  | operation log_operator expression {
      // $$ = create_node(&$$, B_OPERATION);
      // add_tree_node(&$$, &$1);
      // add_tree_node(&$$, &$2);
      // add_tree_node(&$$, &$3);
    }
;

single_operation:
  arith_single {
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
  | lst_single {
      // $$ = create_node(&$$, S_OPERATION);
      // add_tree_node(&$$, &$1);
    }
  | '!' expression {
    // $$ = create_node(&$$, S_OPERATION);
    // add_tree_token_node(&$$, &$1, NOT_OR_TAIL);
    // add_tree_node(&$$, &$2);
  }
;

arith_binary:
  arith_binary '+' expression {
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
  | arith_binary '-' expression {
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
  | arith_binary '*' expression {
      // $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MULTIPLY_OP);
      // add_tree_node(&$$, &$3);
    }
  | arith_binary '/' expression {
      //  $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, DIVISION_OP);
      // add_tree_node(&$$, &$3);
    }
  | expression {
      //  $$ = create_node(&$$, ARITHMETIC_BINARY);
      // add_tree_node(&$$, &$1);
    }
;

arith_single:
  '+' expression {
    // $$ = create_node(&$$, ARITHMETIC_SINGLE);
    // add_tree_token_node(&$$, &$1, ADD_OP);
    // add_tree_node(&$$, &$2);
    }
  | '-' expression {
      // $$ = create_node(&$$, ARITHMETIC_SINGLE);
      // add_tree_token_node(&$$, &$1, MINUS_OP);
      // add_tree_node(&$$, &$2);
    }
;

lst_single:
  '%' expression {
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, POP_OP);
      // add_tree_node(&$$, &$2);
    }
  | '?' expression {
      // $$ = create_node(&$$, LIST_SINGLE);
      // add_tree_token_node(&$$, &$1, HEAD_OP);
      // add_tree_node(&$$, &$2);
    }
;

lst_binary: 
  expression FILTER expression {
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, FILTER_OP);

    }
  | expression MAP expression {
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, MAP_OP);
      // add_tree_node(&$$, &$3);
    }
  | expression ':' expression {
      // $$ = create_node(&$$, LIST_BINARY);
      // add_tree_node(&$$, &$1);
      // add_tree_token_node(&$$, &$2, CONSTRUCTOR_OP);
      // add_tree_node(&$$, &$3);
    }
;

log_operator:
  AND {
      // $$ = create_node(&$$, LOGIC_OPERATOR);
      // add_tree_token_node(&$$, &$1, AND_OP);
    }
  | OR {
      // $$ = create_node(&$$, LOGIC_OPERATOR);
      // add_tree_token_node(&$$, &$1, OR_OP);
    }
;

relation_operator:
  GREATER {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, GT_OP);
    }
  | GREATER_EQ {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, GE_OP);
    }
  | LESS {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, LT_OP);
    }
  | LESS_EQ {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, LE_OP);
    }
  | EQUAL {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, EQ_OP);
    }
  | NOT_EQ {
      // $$ = create_node(&$$, RELATIONAL_OPERATOR);
      // add_tree_token_node(&$$, &$1, NE_OP);
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
