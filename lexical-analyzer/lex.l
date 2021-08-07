%{
/********** C Stuff (headers, declarations, variables, etc.) **********/

  #include <stdio.h>
  #include <stdlib.h>
  void showError();
  int column = 1;

%}

%option noyywrap
/********** Regular Expressions **********/
numbers         ([0-9])+
types           int|float|list
white-spaces    ([ \t])+


/********** Token Specifications **********/
%%
{numbers} {
  printf("NUMBER:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
  column += yyleng;
}

{types} {
  printf("TYPE:\n  Line: %d, Column: %d \t-->\t<%s> \n\n", yylineno, column, yytext);
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
  showError();
  column += yyleng; 
}

%%


//********** C Functions **********
void showError() {
  printf("ERROR! Not a token!\n  Line: %d, Column: 0 \t-->\t<%s>\n\n", yylineno, yytext);
}

void main() {
  yylex();
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