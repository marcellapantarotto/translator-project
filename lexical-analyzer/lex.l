%{
/********** C Stuff (headers, declarations, variables, etc.) **********/

  #include <stdio.h>
  #include <stdlib.h>
  void showError();

%}

%option noyywrap
/********** Regular Expressions **********/
numbers ([0-9])+


/********** Token Specifications **********/
%%
{numbers}   {printf("<NUMBER: %s>\n", yytext);}
";"         {printf("<SEMICOLON>\n");}
.           {showError();}
"\n"        { yylineno++; }
%%


//********** C Functions **********
void showError() {
  printf("Not a token! In line: %d\n", yylineno);
}

void main() {
  printf("main");

  yylex();
}