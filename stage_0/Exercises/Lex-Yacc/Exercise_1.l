 
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
%}

chars [a-zA-Z]+

%%

{chars} {yylval.character = *yytext;return LETTER;}

\n {yylval.character = *yytext;return NEWLINE;};

[+|*]   {yylval.character = *yytext; return yylval.character;}
%%

int yywrap(){
    return 1;
}