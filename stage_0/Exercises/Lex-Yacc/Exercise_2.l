 
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
%}

chars [a-zA-Z]+

%%

{chars}* {

	int len_str = strlen(yytext), cnt = 0;
	char* str = (char *)malloc(len_str * sizeof(char));
	for(int i = 0;i < len_str;i++)
		str[cnt++] = yytext[i];

	yylval.string = str;return LETTER;}

\n {yylval.character = yytext[0];return NEWLINE;};

[+|*]   {yylval.character = yytext[0]; return yylval.character;}
%%

int yywrap(){
    return 1;
}