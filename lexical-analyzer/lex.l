/********** C Stuff (headers, declarations, variables, etc.) **********/
%{
  #include <stdio.h>
  #include <stdlib.h>
  #define BHRED "\e[1;91m"
  #define reset "\e[0m"
  void showError();
  int column = 1;
  int errors = 0;
%}

%option noinput nounput
%option noyywrap

/********** Regular Expressions **********/
number          [0-9]
letter          [a-zA-Z]
white-space     [ \t]+

int             {number}+
float           {number}+[.]?{number}+

input           "write"|"wirteln"
output          "read"

comment         \/\/.*
comments        \/\*(.*\n)*.*\*\/

id              [_a-zA-Z][_a-zA-Z0-9]*


/********** Token Specifications **********/
%%
{white-space} {
  column += yyleng;
}

{comment} {
  column += yyleng;
}

{comments} {
  column += yyleng;
}

{int} {
  printf("INT CONSTANT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{float} {
  printf("FLOAT CONSTANT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{input} {
  printf("INPUT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{output} {
  printf("OUTPUT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"NIL" {
  printf("CONSTANT NIL:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
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
  printf("TYPE INT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"float" {
  printf("TYPE FLOAT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"list" {
  printf("TYPE LIST:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"if" {
  printf("CONDITIONAL:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"else" {
  printf("ELSE:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"for" {
  printf("INTERATION:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"+" {
  printf("ADDITION:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"-" {
  printf("SUBTRACTION:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"*" {
  printf("MULTIPLICATION:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"/" {
  printf("DIVISION:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"==" {
  printf("EQUAL:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"<" {
  printf("LESS THAN:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

">" {
  printf("GREATER THAN:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"<=" {
  printf("LESS OR EQUAL THAN:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

">=" {
  printf("GREATER OR EQUAL THAN:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"!=" {
  printf("DIFFERENT THAN:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"&&" {
  printf("AND:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"||" {
  printf("OR:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"=" {
  printf("ASSIGNMENT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"!" {
  printf("NAGATION OR LIST TAIL:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"?" {
  printf("HEADER OF LIST:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"%" {
  printf("TAIL OF LIST:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

">>" {
  printf("MAP:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"<<" {
  printf("FILTER:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"(" {
  printf("OPEN PARENTHESES:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

")" {
  printf("CLOSE PARENTHESES:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"{" {
  printf("OPEN CURLY BRACKET:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"}" {
  printf("CLOSE CURLY BRACKET:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"," {
  printf("COMMA:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

";" {
  printf("SEMICOLON:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

"\n" {
  yylineno++;
  column = 1;
}

{id} {
  printf("INDENTIFIER:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

. { 
  errors++;
  showError();
  column += yyleng; 
}

%%


//********** C Functions **********
void showError() {
  printf(BHRED "ERROR! Not a token!" reset "\n  Line: %d, Column: %d \t-->\t<%s>" reset " \n\n", yylineno, column, yytext);
}

void main() {
  yylex();

  printf(BHRED "Total number of errors: %d \n\n" reset, errors);
  
  yylex_destroy();
}

/*
int main( int argc, char **argv ) {
  ++argv, --argc;  // skip over program name
  if ( argc > 0 )
    yyin = fopen( argv[0], "r" );
  else
    yyin = stdin;

  yylex();
}
*/