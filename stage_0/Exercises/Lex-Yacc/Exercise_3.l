 
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
%}

chars [a-zA-Z]+

%%

{chars}* {

	char *str = strdup(yytext);
	printf("%s\n",str);
	yylval.string = strdup(yytext);return LETTER;}

\n {yylval.character = yytext[0];return NEWLINE;};

[+|*]   {yylval.character = yytext[0]; return yylval.character;}
%%

int yywrap(){
    return 1;
}