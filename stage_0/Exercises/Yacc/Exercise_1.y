%{
	#include <stdio.h>
	#include <stdlib.h>
	int level;
%}

%token IF

%%

com :  IF'{'com'}'       {level++;}
  |    IF'{'com'}'com 	 {level++;}
  |	   IF'{''}'com  
  |	   IF'{''}'          {level++;}
  ;
 %%

 int yyerror()
 {
 	printf("Syntax Error\n");return 1; 
 }

 int main()
 {
 	level = 0;
 	yyparse();
 	printf("Level of nesting is %d\n",level);
 	return 1;
 }