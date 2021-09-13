/* MARCELLA PANTAROTTO (13/0143880) */
/* PROJECT 2: SYNTAX ANALYZER */

/********** C Stuff (headers, declarations, variables, etc.) **********/
%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "../lib/structures.h"
  #include "syn.tab.h"
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
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(NUM_INT);
}

{float} {
  printf("FLOAT CONSTANT:\n  Line: %d, Column: %d \t-->\t<NUMBER, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(NUM_FLOAT);
}

{string} {
  printf("STRING:\n  Line: %d, Column: %d \t-->\t<STRING, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(STRING);
}

"NIL" {
  printf("CONSTANT NIL:\n  Line: %d, Column: %d \t-->\t<CONSTANT, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(NIL_CNST);
}

"main" {
  // int position = add_table_node(yytext);
  // printf("FUNCTION MAIN:\n  Line: %d, Column: %d \t-->\t<MAIN, %s, position in symbol table: %d> \n\n", yylineno, column, yytext, position);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(ID);
}

"return" {
  printf("RETURN STATEMENT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  // sscanf(yytext, "%s", yylval.token.lexeme);
  // yylval.token.line = yylineno;
  // yylval.token.column = column;
  // // yylval->token.scope = scope;
  column += yyleng;
  // return(RETURN_STM);
}

"int" {
  printf("TYPE INT:\n  Line: %d, Column: %d \t-->\t<TYPE, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(T_INT);
}

"float" {
  printf("TYPE FLOAT:\n  Line: %d, Column: %d \t-->\t<TYPE, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(T_FLOAT);
}

"list" {
  printf("TYPE LIST:\n  Line: %d, Column: %d \t-->\t<TYPE, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(T_LIST);
}

"if" {
  printf("CONDITIONAL:\n  Line: %d, Column: %d \t-->\t<CONDITIONAL, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(IF_STMT);
}

"else" {
  printf("CONDITIONAL:\n  Line: %d, Column: %d \t-->\t<CONDITIONAL, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(ELSE_STMT);
}

"for" {
  printf("INTERATION:\n  Line: %d, Column: %d \t-->\t<INTERATION, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(FOR_STMT);
}

"write" {
  printf("INPUT WRITE:\n  Line: %d, Column: %d \t-->\t<INPUT, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(INPUT_WRITE);
}

"writeln" {
  printf("INPUT WRITELN:\n  Line: %d, Column: %d \t-->\t<INPUT, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(INPUT_WRITELN);
}

"read" {
  printf("OUTPUT READ:\n  Line: %d, Column: %d \t-->\t<OUTPUT, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(OUTPUT_READ);
}

"+" {
  printf("ADDITION:\n  Line: %d, Column: %d \t-->\t<ARITHMETIC_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return('+');
}

"-" {
  printf("SUBTRACTION:\n  Line: %d, Column: %d \t-->\t<ARITHMETIC_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return('-');
}

"*" {
  printf("MULTIPLICATION:\n  Line: %d, Column: %d \t-->\t<ARITHMETIC_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return('*');
}

"/" {
  printf("DIVISION:\n  Line: %d, Column: %d \t-->\t<ARITHMETIC_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return('/');
}

"==" {
  printf("EQUAL:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(EQUAL);
}

"<" {
  printf("LESS THAN:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(LESS);
}

">" {
  printf("GREATER THAN:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(GREATER);
}

"<=" {
  printf("LESS OR EQUAL THAN:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(LESS_EQ);
}

">=" {
  printf("GREATER OR EQUAL THAN:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(GREATER_EQ);
}

"!=" {
  printf("DIFFERENT THAN:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(NOT_EQ);
}

"&&" {
  printf("AND:\n  Line: %d, Column: %d \t-->\t<LOGICAL_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(AND);
}

"||" {
  printf("OR:\n  Line: %d, Column: %d \t-->\t<LOGICAL_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(OR);
}

"=" {
  printf("ASSIGNMENT:\n  Line: %d, Column: %d \t-->\t<ASSIGN, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval.token.scope = scope;
  column += yyleng;
  return(ASSIGN);
}

"!" {
  printf("NAGATION OR LIST TAIL:\n  Line: %d, Column: %d \t-->\t<RELATIONAL_OP OR LIST_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return('!');
}

"?" {
  printf("HEADER OF LIST:\n  Line: %d, Column: %d \t-->\t<LIST_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return('?');
}

"%" {
  printf("POP:\n  Line: %d, Column: %d \t-->\t<LIST_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return('%');
}

":" {
  printf("LIST CONSTRUCTOR:\n  Line: %d, Column: %d \t-->\t<LIST_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(':');
}

">>" {
  printf("MAP:\n  Line: %d, Column: %d \t-->\t<LIST_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(MAP);
}

"<<" {
  printf("FILTER:\n  Line: %d, Column: %d \t-->\t<LIST_OP, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(FILTER);
}

"(" {
  printf("OPEN PARENTHESES:\n  Line: %d, Column: %d \t-->\t<DELIMITER, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return('(');
}

")" {
  printf("CLOSE PARENTHESES:\n  Line: %d, Column: %d \t-->\t<DELIMITER, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(')');
}

"{" {
  printf("OPEN CURLY BRACKET:\n  Line: %d, Column: %d \t-->\t<DELIMITER, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return('{');
}

"}" {
  printf("CLOSE CURLY BRACKET:\n  Line: %d, Column: %d \t-->\t<DELIMITER, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;

  decrement_scope();
  return('}');
}

"," {
  printf("COMMA:\n  Line: %d, Column: %d \t-->\t<PUNCTUATION, %s> \n\n", yylineno, column, yytext);
  column += yyleng;
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(',');
}

";" {
  printf("SEMICOLON:\n  Line: %d, Column: %d \t-->\t<PUNCTUATION, %s> \n\n", yylineno, column, yytext);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(';');
}

{id} {
  // int position = add_table_node(yytext);
  // printf("IDENTIFIER:\n  Line: %d, Column: %d \t-->\t<ID, %s, position in symbol table: %d> \n\n", yylineno, column, yytext, position);
  sscanf(yytext, "%s", yylval.token.lexeme);
  yylval.token.line = yylineno;
  yylval.token.column = column;
  // yylval->token.scope = scope;
  column += yyleng;
  return(ID);
}

"\n" {
  yylineno++;
  column = 1;
}

. { 
  errors++;
  show_error();
  column += yyleng; 
  // return(OTHER);
}

%%

//********** C Functions **********
void show_error() {
  printf(BHRED "ERROR! Not a token!" reset "\n  Line: %d, Column: %d \t-->\t<%s>" reset " \n\n", yylineno, column, yytext);
}