/* MARCELLA PANTAROTTO (13/0143880) */
/* PROJECT 2: SYNTAX ANALYZER */

/********** C Stuff (headers, declarations, variables, etc.) **********/
%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #define BHRED "\e[1;91m"
  #define reset "\e[0m"
  void showError();
  int add_node(char *tok);
  void print_table();
  void destroy_table();
  int column = 1;
  int errors = 0;

  typedef struct table_node {
    int id;
    char token[31];
    struct table_node *next;
  } table_node;

  typedef struct table {
    struct table_node *beginning;
    struct table_node *final;
  } table;

  table symbol_table;
  int id_counter = 1;
%}

%option noinput nounput
%option noyywrap

/********** Regular Expressions **********/
number          [0-9]
letter          [a-zA-Z]
white_space     [ \t\v\f\r]+

int             {number}+
float           {number}+[.]|(({number}*[.])?{number}+)

string          \"(\\.|[^"\\])*\"

comment         \/\/.*
comments        \/\*(.*\n)*.*\*\/

id              [_a-zA-Z][_a-zA-Z0-9]*


/********** Token Specifications **********/
%%

{white_space} {
  column += yyleng;
}

{comment} {
  column += yyleng;
}

{comments} {
  column += yyleng;
}

{int} {
  printf("INT CONSTANT:\n  Line: %d, Column: %d \t-->\t<NUMBER, %s> \n\n", yylineno, column, yytext);
  column += yyleng;

  yylval.number = atoi(yytext);
  return(INTEGER);
}

{float} {
  printf("FLOAT CONSTANT:\n  Line: %d, Column: %d \t-->\t<NUMBER, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{string} {
  printf("STRING:\n  Line: %d, Column: %d \t-->\t<STRING, %s> \n\n", yylineno, column, yytext);
  column += yyleng;

  sscanf(yytext, "%s", yylval.text);
  return(STRING);
}

"NIL" {
  printf("CONSTANT NIL:\n  Line: %d, Column: %d \t-->\t<CONSTANT, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"main" {
  printf("FUNCTION MAIN:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"return" {
  printf("RETURN STATEMENT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"int" {
  printf("TYPE INT:\n  Line: %d, Column: %d \t-->\t<TYPE, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"float" {
  printf("TYPE FLOAT:\n  Line: %d, Column: %d \t-->\t<TYPE, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"list" {
  printf("TYPE LIST:\n  Line: %d, Column: %d \t-->\t<TYPE, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"if" {
  printf("CONDITIONAL:\n  Line: %d, Column: %d \t-->\t<CONDITIONAL, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"else" {
  printf("CONDITIONAL:\n  Line: %d, Column: %d \t-->\t<CONDITIONAL, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"for" {
  printf("INTERATION:\n  Line: %d, Column: %d \t-->\t<INTERATION, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"write" {
  printf("INPUT WRITE:\n  Line: %d, Column: %d \t-->\t<INPUT, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"writeln" {
  printf("INPUT WRITELN:\n  Line: %d, Column: %d \t-->\t<INPUT, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"read" {
  printf("OUTPUT READ:\n  Line: %d, Column: %d \t-->\t<OUTPUT, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"+" {
  printf("ADDITION:\n  Line: %d, Column: %d \t-->\t<ARITHMETIC_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"-" {
  printf("SUBTRACTION:\n  Line: %d, Column: %d \t-->\t<ARITHMETIC_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"*" {
  printf("MULTIPLICATION:\n  Line: %d, Column: %d \t-->\t<ARITHMETIC_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"/" {
  printf("DIVISION:\n  Line: %d, Column: %d \t-->\t<ARITHMETIC_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"==" {
  printf("EQUAL:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"<" {
  printf("LESS THAN:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

">" {
  printf("GREATER THAN:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"<=" {
  printf("LESS OR EQUAL THAN:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

">=" {
  printf("GREATER OR EQUAL THAN:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"!=" {
  printf("DIFFERENT THAN:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"&&" {
  printf("AND:\n  Line: %d, Column: %d \t-->\t<LOGICAL_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"||" {
  printf("OR:\n  Line: %d, Column: %d \t-->\t<LOGICAL_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"=" {
  printf("ASSIGNMENT:\n  Line: %d, Column: %d \t-->\t<ASSIGN, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"!" {
  printf("NAGATION OR LIST TAIL:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP OR LIST_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"?" {
  printf("HEADER OF LIST:\n  Line: %d, Column: %d \t-->\t<LIST_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"%" {
  printf("TAIL OF LIST - REMOVING FIRST ELEMENT OF LIST:\n  Line: %d, Column: %d \t-->\t<LIST_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

":" {
  printf("LIST CONSTRUCTOR:\n  Line: %d, Column: %d \t-->\t<LIST_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

">>" {
  printf("MAP:\n  Line: %d, Column: %d \t-->\t<LIST_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"<<" {
  printf("FILTER:\n  Line: %d, Column: %d \t-->\t<LIST_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"(" {
  printf("OPEN PARENTHESES:\n  Line: %d, Column: %d \t-->\t<DELIMITER, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

")" {
  printf("CLOSE PARENTHESES:\n  Line: %d, Column: %d \t-->\t<DELIMITER, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"{" {
  printf("OPEN CURLY BRACKET:\n  Line: %d, Column: %d \t-->\t<DELIMITER, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"}" {
  printf("CLOSE CURLY BRACKET:\n  Line: %d, Column: %d \t-->\t<DELIMITER, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"," {
  printf("COMMA:\n  Line: %d, Column: %d \t-->\t<PUNCTUATION, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

";" {
  printf("SEMICOLON:\n  Line: %d, Column: %d \t-->\t<PUNCTUATION, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
  return(SEMICOLON);
}

{id} {
  int position = add_node(yytext);
  printf("INDENTIFIER:\n  Line: %d, Column: %d \t-->\t<ID, %s, position in symbol table: %d> \n\n", yylineno, column, yytext, position);
  column += yyleng;
}

"\n" {
  yylineno++;
  column = 1;
}

. { 
  errors++;
  showError();
  column += yyleng; 
  return(OTHER);
}

%%

//********** C Functions **********
void showError() {
  printf(BHRED "ERROR! Not a token!" reset "\n  Line: %d, Column: %d \t-->\t<%s>" reset " \n\n", yylineno, column, yytext);
}

table createTable() {
  table t;

  t.beginning = (table_node*)malloc(sizeof(table_node));
  t.beginning->id = 0;
  strcpy(t.beginning->token,"");
  t.beginning->next = NULL;

  t.final = t.beginning;

  return t;
}

int add_node(char *tok) {
  table_node *node = (table_node*) malloc(sizeof(table_node));
  node->id = id_counter;
  strcpy(node->token,tok);
  node->next = NULL;

  symbol_table.final->next = node;
  symbol_table.final = node;

  id_counter++;

  return id_counter;
}

void print_table() {
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    printf("%d  |  %s\n", aux->id, aux->token);
  }
}

void delete_table() {
  table_node *curr = symbol_table.beginning;
  table_node *nxt;
  while(curr->next != NULL) {
    nxt = curr->next;
    free(curr);
    curr = nxt;
  }
  free(curr);
}

int main( int argc, char **argv ) {
  ++argv, --argc;

  if ( argc > 0 )
    yyin = fopen( argv[0], "r" );
  else
    yyin = stdin;

  symbol_table = createTable();

  yylex();

  printf("---------------\nSYMBOL TABLE\n---------------\nID | TOKENS\n---------------\n");
  print_table();
  delete_table();

  printf(BHRED "\nTotal number of errors: %d \n\n" reset, errors);
  
  fclose(yyin);
  yylex_destroy();
}