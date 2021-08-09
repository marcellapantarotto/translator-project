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

%option noyywrap

/********** Regular Expressions **********/
number          [0-9]
letter          [a-zA-Z]
white-space     [ \t]+
types           "int"|"float"|"list"


int             {number}+
float           {number}+[.]?{number}+
nil             "NIL"

op-arithmetic   "+"|"-"|"*"|"/"
op-logic        "!"|"&&"|"||"
op-relational   "<"|"<="|">"|">="|"=="|"!="

assignment      "="
conditional     "if"
else            "else"
interation      "for"

parentheses      "("|")"
curly-brackets   "{"|"}"

input           "write"|"wirteln"
output          "read"
return          "return"
main            "main"

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

{assignment} {
  printf("ASSIGNMENT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{int} {
  printf("INT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{float} {
  printf("FLOAT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{op-arithmetic} {
  printf("ARITHMETIC OPERATION:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{op-logic} {
  printf("LOGIC OPERATION:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{op-relational} {
  printf("RELATIONAL OPERATION:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{parentheses} {
  printf("PARENTHESES:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{curly-brackets} {
  printf("CURLY BRACKET:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{conditional} {
  printf("CONDITIONAL:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{else} {
  printf("ELSE:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{interation} {
  printf("INTERATION:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{types} {
  printf("TYPE:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{nil} {
  printf("CONSTANT NIL:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
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



{main} {
  printf("FUNCTION MAIN:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{return} {
  printf("RETURN STATEMENT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{id} {
  printf("INDENTIFIER:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
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