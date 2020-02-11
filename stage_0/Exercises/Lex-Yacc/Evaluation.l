%{

	#include "y.tab.h"
	#include<stdio.h>
	#include<stdlib.h>

%}

numbers [0-9]+

%%
{numbers} {
	yylval = atoi(yytext);
	return DIGIT;
}

. return *yytext;
[\n] return NEWLINE;

%%

yywrap()
{
	return 1;
}

