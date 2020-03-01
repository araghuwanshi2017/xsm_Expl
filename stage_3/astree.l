%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "astree.h"
	
	int number;

%}

alpha[a-z]
digit[0-9]+

%%


begin 	 {return _BEGIN;}
end   	 {return _END;}
read  	 {return _READ;}
write 	 {return _WRITE;}
if    	 {return _IF;}
else  	 {return _ELSE;}
then  	 {return _THEN;}
endif 	 {return _ENDIF;}
while 	 {return _WHILE;}
do       {return _DO;}
endwhile {return _ENDWHILE;}
until    {return _UNTIL;}
repeat   {return _REPEAT;}
break    {yylval.node = makeBCBPNode(BREAK,BREAK,yytext); return _BREAK;}
continue {yylval.node = makeBCBPNode(CONTINUE,CONTINUE,yytext); return _CONTINUE;}
breakpoint {yylval.node = makeBCBPNode(BREAKPOINT,BREAKPOINT,yytext); return _BREAKPOINT;}
{alpha}* {yylval.node = makeVariableLeafNode(VARIABLE,INTEGER,*yytext,yytext); return _ID;}
{digit}* {number = atoi(yytext); yylval.node = makeConstantLeafNode(CONSTANT,INTEGER,number,yytext); return _NUM;}
";"      {return *yytext;}
"(" 	 {return *yytext;}
")" 	 {return *yytext;}
"+"	   	 {return _PLUS;}
"-"		 {return _MINUS;}
"*"		 {return _MUL;}
"/"		 {return _DIV;}
">"		 {return _GT;}
"<"		 {return _LT;}
([<][=]) {return _LE;}
([>][=]) {return _GE;}
([!][=]) {return _NE;}
([=][=]) {return _EQ;}
"=" 	 {return *yytext;}
"{"      {return *yytext;}
"}"      {return *yytext;}
[ \t]	{}
[\n]	{return NEWLINE;}
.	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
	return 1;
}