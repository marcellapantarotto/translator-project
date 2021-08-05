%{
/********** C Stuff (headers, declarations, variables, etc.) **********/

  #include <stdio.h>
  void showError();

%}

/********** Regular Expressions **********/
numbers ([0-9])+


/********** Token Specifications **********/
%%
{numbers}   {return (NUMBER);}
";"         {return (SEMICOLON);}
.           (showError(); return(OTHER);)
%%


//********** C Functions **********
void showError() {
  printf("Not a token!");
}
