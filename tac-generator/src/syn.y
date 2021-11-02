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
  extern int yyerror(const char *s);
  extern FILE *yyin;

  char func_name[50];
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
%left EQUAL NOT_EQ
%left GREATER GREATER_EQ LESS LESS_EQ 
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
%type <token> INPUT_READ
%type <token> OUTPUT_WRITE
%type <token> OUTPUT_WRITELN

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
%type <node> func_declaration
%type <node> var_declaration
%type <node> unq_declaration
%type <node> func_calling
%type <node> parameters
%type <node> lst_parameters
%type <node> calling_parameters
%type <node> lst_calling_parameters
%type <node> block_commands
%type <node> command
%type <node> init_variable
%type <node> init_stmt
%type <node> conditional_stmt
%type <node> return_stmt
%type <node> iteration
%type <node> input
%type <node> output
%type <node> loop_condition
%type <node> update_stmt
%type <node> expression
%type <node> const
%type <node> number
%type <node> type
%type <node> type_lst
%type <node> type_number
%type <node> operation
%type <node> single_operation
%type <node> arith_binary
%type <node> arith_single
%type <node> lst_binary
%type <node> lst_single
%type <node> term
%type <node> iden
%type <node> stop_stmt

%define parse.lac full
%define parse.error verbose

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
      root = $$;
      root = create_node(PROGRAM);
      add_tree_node(root, $1);
    }
  | %empty {
      $$ = create_node(PROGRAM);
    }
;

lst_declarations:
  declaration lst_declarations  {
      $$ = create_node(LIST_DECLARATIONS);
      add_tree_node($$, $1);
      add_tree_node($$, $2);
    }
  | declaration  {
      $$ = $1;
      // $$ = create_node(LIST_DECLARATIONS);
      // add_tree_node($$, $1);
    }
;

declaration:
  func_declaration {
      $$ = $1;
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
  | var_declaration {
      $$ = $1;
      // $$ = create_node(DECLARATION);
      // add_tree_node($$, $1);
    }
  | error {
      yyerrok;
      $$ = create_node(DECLARATION); 
      syntax_errors++;
    }
;

func_declaration:
  unq_declaration {strcpy(return_type_function, curr_type); increment_scope(); strcpy(func_name, $1->children->sibilings->child->token.lexeme);} '(' parameters ')' '{' block_commands '}' {
      $$ = create_node(FUNCTION_DECLARATION);    
      add_tree_node($$, $1);
      add_tree_node($$, $4);
      add_tree_node($$, $7);
      set_F_table($1->children->sibilings->child);
      // param_lst = create_params_list();

      // if(strcmp($1->children->sibilings->child->token.lexeme, "main") == 0) {
      //   fprintf(tac_commands, "\nmain:\n");
      // }
      
    }
;

func_calling: 
  ID  '(' {calling_params_counter = 0;} calling_parameters {verify_amount_params($4, &$1);} ')' {
      $$ = create_node(FUNCTION_CALLING);
      add_tree_operation_leaf($$, &$1, IDENTIFIER, verify_existing_function(&$1));
      add_tree_node($$, $4);
    }
;

var_declaration:
  unq_declaration ';' {
      $$ = $1;
    }
;

unq_declaration:
  type ID {
      $$ = create_node(UNIQUE_DECLARATION);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, IDENTIFIER, curr_type);
      add_table_node($2.lexeme, $1, idx);
      strcpy($1->type, get_type($1, idx));
      strcpy($1->children->child->type, curr_type);
      idx++;

      add_variables_tac(&$2);
    }
;

type:
  type_lst  {
      $$ = $1;
    }
  | type_number  {
    $$ = $1;
    }
;

type_lst:
  type_number T_LIST   {
      $$ = create_node(TYPE_LIST);
      add_tree_node($$, $1);
      add_tree_token_node($$, &$2, LIST);
    }
;

type_number:
  T_INT {
      $$ = create_node(TYPE_NUMBER);
      add_tree_token_node($$, &$1, INT);
    }
  | T_FLOAT {
      $$ = create_node(TYPE_NUMBER);
      add_tree_token_node($$, &$1, FLOAT);
    }
;

parameters:
  lst_parameters {
      $$ = $1;
      
      // $$ = create_node(PARAMETERS);
      // add_tree_node($$, $1);
    }
  | %empty {
      $$ = create_node(PARAMETERS);
    }
;

lst_parameters: 
  unq_declaration ',' lst_parameters {strcpy(param_type, $1->children->child->type);}  {
      $$ = create_node(LIST_PARAMETERS);
      add_tree_node($$, $1);
      add_tree_node($$, $3);
      set_P_table($1);
      set_amount_params(func_name, get_amount_params($1, func_name));

      // printf(">>>> %s\n", $1->children->child->type);
    }
  | unq_declaration {strcpy(param_type, $1->children->child->type);} {
      $$ = $1;
      set_P_table($1);
      set_amount_params(func_name, get_amount_params($1, func_name));
      // printf(">>>> %s\n", $1->children->child->type);     
    }
;

calling_parameters:
  lst_calling_parameters {
      $$ = create_node(CALLING_PARAMETERS);
      add_tree_node($$, $1);
    }
  | %empty {
      $$ = create_node(CALLING_PARAMETERS);
    }
;

lst_calling_parameters:
  operation ',' lst_calling_parameters  {
      $$ = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node($$, $1);
      add_tree_node($$, $3);
      calling_params_counter += 1;

      // printf("<<< %s\n", $1->children->child->type);
      // remove_param_from_list($1);
      // else {
      //   printf(RED "SEMANTIC ERROR (line: %d, column: %d): Type of parameter passed is different then the expected! Type passed: %s, expected: %s \n" RESET, yylineno, column-yyleng, $1->children->child->type, param_type);
      //   semantic_errors++;
      // }
    }
  | operation  {
      $$ = create_node(LIST_CALLING_PARAMETERS);
      add_tree_node($$, $1);
      calling_params_counter += 1;

      // printf("<<< %s\n", $1->children->child->type);
      // remove_param_from_list($1);
      //  else {
      //   printf(RED "SEMANTIC ERROR (line: %d, column: %d): Type of parameter passed is different then the expected! Type passed: %s, expected: %s \n" RESET, yylineno, column-yyleng, $1->children->child->type, param_type);
      //   semantic_errors++;
      // }
    }
;

block_commands: 
  command block_commands  {
      $$ = create_node(BLOCK_COMMANDS);
      add_tree_node($$, $1);
      add_tree_node($$, $2);
    }
  | command {
    $$ = $1;
  }
;

command: 
  var_declaration {
      $$ = $1;
    }
  | init_variable {
      $$ = $1;
    }
  | conditional_stmt {
      $$ = $1;
    }
  | return_stmt {
      $$ = $1;
    }
  | iteration {
      $$ = $1;
    }
  | output {
      $$ = $1;
    }
  | input {
      $$ = $1;
    }
  | {increment_scope();} '{' block_commands '}' {
      $$ = create_node(COMMAND);
      add_tree_node($$, $3);
    }
  | operation ';' { 
      $$ = create_node(COMMAND);
      add_tree_node($$, $1);
    }

  | error ';' {
      yyerrok;
      $$ = create_node(COMMAND); 
      syntax_errors++;
    }
  | error {
      yyerrok;
      $$ = create_node(COMMAND); 
      syntax_errors++;
    }
;

init_variable: 
  init_stmt ';' {
      $$ = create_node(INIT_VARIABLE);
      add_tree_node($$, $1);
    }
;

init_stmt: 
  iden '=' operation  {
      $$ = create_node(INIT_STMT);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, ASSIGN, verify_existing_variable(&$1->children->child->token));
      add_tree_node($$, $3);

      if(strcmp($3->children->child->type, get_type_table($1->children->child)) != 0) {
        if(strcmp($3->children->child->type, "-") == 0) {
          strcpy($3->type, get_type_table($1->children->child));
          strcpy($3->children->child->type, get_type_table($1->children->child));
        } else {
          strcpy($3->type, get_type_table($1->children->child));
          strcpy($3->children->child->type, get_type_table($1->children->child));
            
        }
      }

      strcpy($3->children->child->tac, temp);
      fprintf(tac_commands, "mov %s, %s\n", get_tac_name($1->children->child->token.lexeme), temp);
    }
;

conditional_stmt: 
  IF_STMT '(' operation ')' command %prec IF_STMT {
      $$ = create_node(CONDITIONAL_STMT);
      add_tree_token_node($$, &$1, IF);
      add_tree_node($$, $3);
      add_tree_node($$, $5);
    }
  | IF_STMT '(' operation ')' command ELSE_STMT command  {
      $$ = create_node(CONDITIONAL_STMT);
      add_tree_token_node($$, &$1, IF);
      add_tree_node($$, $3);
      add_tree_node($$, $5);
      add_tree_token_node($$, &$6, ELSE);
      add_tree_node($$, $7);
    }
;

return_stmt: 
  RETURN_STM operation ';'  {
      $$ = create_node(RETURN_STMT);
      add_tree_operation_leaf($$, &$1, RETURN, return_type_function);
      add_tree_node($$, $2);
      strcpy($2->type, get_type($2, id));
      id++;
      if(strcmp($2->children->child->type, "-") == 0) {
        strcpy($2->type, get_type($2, id2));
        id2++;
      }
      if(strcmp($2->children->child->type, return_type_function) != 0) {
        if(strcmp($2->children->child->type, "-") == 0) {
          strcpy($2->type, get_type($2, id2));
          id2++;
          if(strcmp($2->type, return_type_function) != 0) {
            strcpy($2->type, return_type_function);
            strcpy($2->children->child->type, return_type_function);
          }
        } else {
          strcpy($2->type, return_type_function);
          strcpy($2->children->child->type, return_type_function);
        }
      }
    }
;

iteration: 
  FOR_STMT '(' loop_condition ')' command {
      $$ = create_node(ITERATION_PROCESS);
      add_tree_token_node($$, &$1, FOR);
      add_tree_node($$, $3);
      add_tree_node($$, $5);
    }
;

loop_condition: 
  update_stmt ';' stop_stmt ';' update_stmt {
      $$ = create_node(LOOP_CONDITION);
      add_tree_node($$, $1);
      add_tree_node($$, $3);
      add_tree_node($$, $5);
    }
;

update_stmt:
  init_stmt {
      $$ = $1;
    }
  | %empty {
      $$ = create_node(UPDATE_STMT);
    }
;

stop_stmt:
  operation {
      $$ = $1;
    }
  | %empty {
      $$ = create_node(STOP_STMT);
    }
;

output: 
  OUTPUT_WRITE '(' operation ')' ';'  {
      $$ = create_node(OUTPUT_OPERATION);
      add_tree_operation_leaf($$, &$1, WRITE, "-");
      add_tree_node($$, $3);
    }
  | OUTPUT_WRITELN '(' operation ')' ';' {
      $$ = create_node(OUTPUT_OPERATION);
      add_tree_operation_leaf($$, &$1, WRITELN, "-");
      add_tree_node($$, $3);
      
    }
  | OUTPUT_WRITE '(' STRING ')' ';' {
      $$ = create_node(OUTPUT_OPERATION);
      add_tree_operation_leaf($$, &$1, WRITE, "-");
      add_tree_operation_leaf($$, &$3, STRING_STMT, "-");
    }
  | OUTPUT_WRITELN '(' STRING ')' ';' {
      $$ = create_node(OUTPUT_OPERATION);
      add_tree_operation_leaf($$, &$1, WRITELN, "-");
      add_tree_operation_leaf($$, &$3, STRING_STMT, "-");
    }
;

input: 
  INPUT_READ '(' iden ')' ';' {
      $$ = create_node(INPUT_OPERATION);
      add_tree_operation_leaf($$, &$1, READ, verify_existing_variable(&$3->children->child->token));
      add_tree_node($$, $3);
    }
;

iden: 
  ID {
      $$ = create_node(IDEN);
      add_tree_operation_leaf($$, &$1, IDENTIFIER, verify_existing_variable(&$1));
      // printf(">> %d %d\n", get_scope_from_table(&$1), $1.scope);
      
      // if(get_scope_from_table(&$1) != $1.scope && get_scope_from_table(&$1) != 0){
      //   printf(">> %d %d %d \n", get_scope_from_table(&$1), $1.scope, g_scope);
      //   printf(RED "SEMANTIC ERROR (line: %d, column: %d): Variable <%s> is being used in the wrong scope! \n" RESET, $1.line, $1.column, $1.lexeme);
      //   semantic_errors++;
      // }  
    }
;

operation:
  lst_binary {
      $$ = $1;
    }
  | operation GREATER operation  {
      $$ = create_node(OPERATION);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, GT_OP, type_check_num($1, $3, &$2));
      add_tree_node($$, $3);
    }
  | operation GREATER_EQ operation  {
      $$ = create_node(OPERATION);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, GE_OP, type_check_num($1, $3, &$2));
      add_tree_node($$, $3);
    }
  | operation LESS operation  {
      $$ = create_node(OPERATION);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, LT_OP, type_check_num($1, $3, &$2));
      add_tree_node($$, $3);
    }
  | operation LESS_EQ operation  {
      $$ = create_node(OPERATION);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, LE_OP, type_check_num($1, $3, &$2));
      add_tree_node($$, $3);
    }
  | operation EQUAL operation  {
      $$ = create_node(OPERATION);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, EQ_OP, type_check_num($1, $3, &$2));
      add_tree_node($$, $3);
    }
  | operation NOT_EQ operation  {
      $$ = create_node(OPERATION);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, NE_OP, type_check_num($1, $3, &$2));
      add_tree_node($$, $3);
    }
  | operation AND operation {
      $$ = create_node(OPERATION);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, AND_OP, "int");
      add_tree_node($$, $3);
    }
  | operation OR operation {
      $$ = create_node(OPERATION);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, OR_OP, "int");
      add_tree_node($$, $3);
    }
;

lst_binary: 
  lst_binary FILTER lst_binary {
      $$ = create_node(LIST_BINARY);
      add_tree_node($$, $1);
      add_tree_token_node($$, &$2, FILTER_OP);
      add_tree_node($$, $3);
    }
  | lst_binary MAP lst_binary {
      $$ = create_node(LIST_BINARY);
      add_tree_node($$, $1);
      add_tree_token_node($$, &$2, MAP_OP);
      add_tree_node($$, $3);
    }
  | lst_binary ':' lst_binary {
      $$ = create_node(LIST_BINARY);
      add_tree_node($$, $1);
      add_tree_token_node($$, &$2, CONSTRUCTOR_OP);
      add_tree_node($$, $3);
    }
  | arith_binary {
      $$ = $1;
      // $$ = create_node(OPERATION);
      // add_tree_node($$, $1);
    }
;

arith_binary:
  arith_binary '+' term {
      $$ = create_node(ARITHMETIC_BINARY);
      add_tree_node($$, $1);
      type_check_num($1, $3, &$2);
      add_tree_operation_leaf($$, &$2, ADD_OP, $2.type);
      add_tree_node($$, $3);
      strcpy($$->type, $1->type);

      temp = create_temp($1);
      fprintf(tac_table, "%s %s\n", $1->children->child->type, temp);
      strcpy($2.tac, temp);
      fprintf(tac_commands, "add %s, %s, %s\n", get_tac_name($2.tac), get_tac_name($1->children->child->token.lexeme), get_tac_name($3->children->child->token.lexeme));
    }
  | arith_binary '-' term {
      $$ = create_node(ARITHMETIC_BINARY);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, MINUS_OP, type_check_num($1, $3, &$2));
      add_tree_node($$, $3);
      strcpy($$->type, $1->type);

      temp = create_temp($1);
      fprintf(tac_table, "%s %s\n", $1->children->child->type, temp);
      strcpy($2.tac, temp);
      fprintf(tac_commands, "sub %s, %s, %s\n", get_tac_name($2.tac), get_tac_name($1->children->child->token.lexeme), get_tac_name($3->children->child->token.lexeme));
    }
  | term {
      $$ = $1;
    }
;

term: 
  term '*' expression {
      $$ = create_node(TERM);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, MULTIPLY_OP, type_check_num($1, $3, &$2));
      add_tree_node($$, $3);
      strcpy($$->type, $1->type);

      temp = create_temp($1);
      fprintf(tac_table, "%s %s\n", $1->children->child->type, temp);
      strcpy($2.tac, temp);
      fprintf(tac_commands, "mul %s, %s, %s\n", get_tac_name($2.tac), get_tac_name($1->children->child->token.lexeme), get_tac_name($3->children->child->token.lexeme));
    }
  | term '/' expression {
      $$ = create_node(TERM);
      add_tree_node($$, $1);
      add_tree_operation_leaf($$, &$2, DIVISION_OP, type_check_num($1, $3, &$2));
      add_tree_node($$, $3);
      strcpy($$->type, $1->type);

      temp = create_temp($1);
      fprintf(tac_table, "%s %s\n", $1->children->child->type, temp);
      strcpy($2.tac, temp);
      fprintf(tac_commands, "div %s, %s, %s\n", get_tac_name($2.tac), get_tac_name($1->children->child->token.lexeme), get_tac_name($3->children->child->token.lexeme));
    }
  | expression {
      $$ = $1;
    }
;

expression: 
  func_calling {
    $$ = $1;
    }
  | single_operation {
      $$ = $1;
    }
  | const {
      $$ = $1;
    }
  | iden {
      $$ = $1;
    }
  | '(' operation ')' {
    $$ = $2;
  }
;

const: 
  number {
      $$ = $1;
    }
  | NIL_CNST {
      $$ = create_node(CONSTANT);
      add_tree_token_node($$, &$1, NIL);
    }
;

number:
  NUM_INT {
      $$ = create_node(NUMBER);
      add_tree_token_node($$, &$1, NUMBER_INT);
    }
  | NUM_FLOAT {
      $$ = create_node(NUMBER);
      add_tree_token_node($$, &$1, NUMBER_FLOAT);
    }
;

single_operation:
  arith_single {
      $$ = $1;
    }
  | lst_single {
      $$ = $1;
    }
  | '!' expression {
    $$ = create_node(SINGLE_OPERATION);
    add_tree_token_node($$, &$1, NOT_OR_TAIL);
    add_tree_node($$, $2);

    fprintf(tac_commands, "not %s, %s\n", get_tac_name($2->children->child->token.lexeme), get_tac_name($2->children->child->token.lexeme));
  }
;

arith_single:
  '+' expression {
      $$ = create_node(ARITHMETIC_SINGLE);
      add_tree_operation_leaf($$, &$1, ADD_OP, type_check_num($2, $2, &$1));
      add_tree_node($$, $2);
      strcpy($$->type, $2->type);
    }
  | '-' expression {
      $$ = create_node(ARITHMETIC_SINGLE);
      add_tree_operation_leaf($$, &$1, MINUS_OP, type_check_num($2, $2, &$1));
      add_tree_node($$, $2);
      strcpy($$->type, $2->type);

      temp = create_temp($2);
      fprintf(tac_table, "%s %s\n", $2->children->child->type, temp);
      strcpy($1.tac, temp);
      fprintf(tac_commands, "minus %s, %s\n", get_tac_name($1.tac), get_tac_name($2->children->child->token.lexeme));
    }
;

lst_single:
  '%' expression {
      $$ = create_node(LIST_SINGLE);
      add_tree_token_node($$, &$1, POP_OP);
      add_tree_node($$, $2);
    }
  | '?' expression {
      $$ = create_node(LIST_SINGLE);
      add_tree_token_node($$, &$1, HEAD_OP);
      add_tree_node($$, $2);
    }
;

%%
//********** C Functions **********
int yyerror(const char *s) {
  fprintf(stderr, RED "SYNTAX ERROR   (line: %d, column: %d): %s " RESET "\n", yylineno, column-yyleng, s);
  return 0;
}

int main(int argc, char **argv) {
  ++argv, --argc;
  char output_name[50];
  strcpy(output_name, argv[0]);
  strip_ext(output_name);

  strcat(output_name, ".tac");
  tac_file = fopen(output_name, "w");
  tac_commands = fopen("tests/tac_commands.tac", "w");
  tac_table = fopen("tests/tac_table.tac", "w");

  root_scope_tree = (t_scope_node*) malloc(sizeof(t_scope_node));
  root_scope_tree->scope_number = 0;
  scope_node_curr = root_scope_tree;

  symbol_table = create_table();
  
  if ( argc > 0 ) {
    yyin = fopen( argv[0], "r" );
    printf("\n");
    yyparse();
  }
  else
    yyin = stdin;
  
  // print_ast_tree();
  print_annotated_tree();
  print_table();
  find_main();

  total_lexical_errors();
  total_syntax_errors();
  total_semantic_errors();  

  if( lexical_errors != 0 || syntax_errors != 0 || semantic_errors != 0 )
    remove(output_name);

  fclose(tac_commands);
  fclose(tac_table);
  build_tac();

  destroy_tree(root);
  destroy_table();
  free(root_scope_tree);
  
  fclose(yyin);
  fclose(tac_file);
  // remove("tests/tac_commands.tac");
  // remove("tests/tac_table.tac");
  yylex_destroy();
  
  return 0;
}
