%option noyywrap
%{
	#include <stdio.h>
	#include <stdlib.h>
%}

lower [a-z]
upper [A-Z]
space [ ]
new_line [\n]
%%

({space}*)((^A)|(A))({lower}|{upper})({lower}|{upper})({space}|{new_line}) {printf("%s\n",yytext + 1);}
. {}
%%

int main()
{
	yylex();
	return 0;
}