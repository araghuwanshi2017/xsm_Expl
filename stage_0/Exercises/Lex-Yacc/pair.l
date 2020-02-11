%{

  #include "y.tab.h"
  #include<stdlib.h>
  #include<stdio.h>
  
%}

number[0-9]+
%%

{number} {
	yylval = atoi(yytext);
	return DIGIT;
}

.	return *yytext;
[\n]  return NEWLINE;

%%

yywrap()
{
	return 1;
}