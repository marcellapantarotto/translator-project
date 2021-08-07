%{
/********** C Stuff (headers, declarations, variables, etc.) **********/

  #include <stdio.h>
  #include <stdlib.h>
  void showError();

%}

%option noyywrap
/********** Regular Expressions **********/
numbers ([0-9])+
types   int|float|list


/********** Token Specifications **********/
%%
{numbers}   {printf("<NUMBER: %s>\n", yytext);}
{types}     {printf("<TYPE: %s>\n", yytext);}
";"         {printf("<SEMICOLON>\n");}
.           {showError();}
"\n"        { yylineno++; }
%%


//********** C Functions **********
void showError() {
  printf("Not a token! In line: %d\n", yylineno);
}

void main() {
  yylex();
  yylex_destroy();
}