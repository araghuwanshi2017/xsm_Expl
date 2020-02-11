%{
/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>
#include "y.tab.h"



%}

%%

if   {return IF;}
.    {return *yytext;}

%%

yywrap()
{
	return 1;
}