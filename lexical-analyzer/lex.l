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
numbers         ([0-9])+
letter          [a-zA-Z]
white-spaces    ([ \t])+
types           "int"|"float"|"list"

int             [-+]?{numbers}
float           [-+]?{numbers}[.]?{numbers}
nil             "NIL"

op-arithmetic   "+"|"-"|"*"|"/"





/********** Token Specifications **********/
%%
{int} {
  printf("INT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{float} {
  printf("FLOAT:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{nil} {
  printf("NIL:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{types} {
  printf("TYPE:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{op-arithmetic} {
  printf("ARITHMETIC OPERATION:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
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

{white-spaces} {
  printf("WHITE SPACE:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
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