
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"
	int yylex(void);
	FILE *ft;
%}



%union
{
	struct tnode *node;
	
}

%type <node> expr NUM start END
%token NUM PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

start : expr END	{
				$$ = $2;
				codeGen($1, ft);
				
				exit(1);
			}
		;

expr : PLUS expr expr		{$$ = makeOperatorNode('+',$2,$3);}
	 | MINUS expr expr  	{$$ = makeOperatorNode('-',$2,$3);}
	 | MUL expr expr	{$$ = makeOperatorNode('*',$2,$3);}
	 | DIV expr expr	{$$ = makeOperatorNode('/',$2,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 ;

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(int argc, char *argv[]) {

	if(argc > 1)
	{
		printf("Generating File %s\n",argv[1]);
		ft = fopen(argv[1],"w");
		yyparse();
	}
	else
	{
		printf("Xsm file as code.xsm\n");
		ft = fopen("code.xsm","w");
		yyparse();
	}
	
	return 0;
}
