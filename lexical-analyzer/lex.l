%{
/********** C Stuff (headers, declarations, variables, etc.) **********/

  #include <stdio.h>
  #include <stdlib.h>
  void showError();

%}

/********** Regular Expressions **********/
numbers ([0-9])+


/********** Token Specifications **********/
%%
{numbers}   {printf("NUMBER");}
";"         {printf("SEMICOLON");}
.           {showError();}
%%


//********** C Functions **********
void showError() {
  printf("Not a token!");
}
