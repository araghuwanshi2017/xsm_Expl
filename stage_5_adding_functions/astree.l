%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "astree.h"
	int number;

%}

alpha[a-zA-Z_]+
digit[0-9]+

%%

do       {return _DO;}
if    	 {return _IF;}
int      {return _INT;}
str      {return _STR;}
end   	 {return _END;}
decl     {return _DECL; }
read  	 {return _READ;}
else  	 {return _ELSE;}
then  	 {return _THEN;}
main 	 {return _MAIN;}
begin 	 {return _BEGIN;}
write 	 {return _WRITE;}
endif 	 {return _ENDIF;}
while 	 {return _WHILE;}
until    {return _UNTIL;}
repeat   {return _REPEAT;}
enddecl  {return _ENDDECL;}
endwhile {return _ENDWHILE;}
break    {yylval.node = makeBCBPNode(BREAK,BREAK,yytext); return _BREAK;}
continue {yylval.node = makeBCBPNode(CONTINUE,CONTINUE,yytext); return _CONTINUE;}
breakpoint {yylval.node = makeBCBPNode(BREAKPOINT,BREAKPOINT,yytext); return _BREAKPOINT;}

{alpha}({alpha}|{digit})* {
	
	yylval.node = makeVariableLeafNode(VARIABLE,-1,yytext); return _ID;
}
([\"]({alpha}|{digit})*[\"]) {yylval.node = makeConstantStringLeafNode(STRING,CONSTANT,yytext);return _STRING;}

{digit}* {number = atoi(yytext); yylval.node = makeConstantLeafNode(INTEGER, CONSTANT,number); return _NUM;}
">"		 {return _GT;}
"<"		 {return _LT;}
([<][=]) {return _LE;}
([>][=]) {return _GE;}
([!][=]) {return _NE;}
([=][=]) {return _EQ;}
"%"		 {return _MOD;}
"*"		 {return _MUL;}
"/"		 {return _DIV;}
"+"	   	 {return _PLUS;}
"-"		 {return _MINUS;}
";"      {return *yytext;}
"(" 	 {return *yytext;}
")" 	 {return *yytext;}
"=" 	 {return *yytext;}
"{"      {return *yytext;}
"}"      {return *yytext;}
","      {return *yytext;}
"["		 {return *yytext;}
"]"		 {return *yytext;}
[ \t]	 {}
.	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
	return 1;
}