
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "exprtree.h"
	#include "exprtree.c"
	int yylex(void);
	FILE *ft;
%}


%union
{
	struct Astnode *node;	
}

%type <node> program Slist Stmt Inputstmt Outputstmt Assgstmt id  expr _NUM  _END _ID
%token _ID _NUM _PLUS _MINUS _MUL _DIV _BEGIN _END _READ _WRITE  NEWLINE 
%left _PLUS _MINUS 
%left _MUL _DIV

%%

program:  _BEGIN Slist _END{
	$$ = $3;
	printf("Parsing Done\n");
	codeGen($2,ft);
	printf("\n");
	print($2);
	printf("\n");
	exit(1);
}
| _BEGIN _END {
	$$ = $2;
	printf("Parsing Done\n");
	exit(1);
}
;

Slist: Slist Stmt{
	 $$ = makeStatementNode(STATEMENT,STATEMENT,$1,$2,"STATEMENT");
}
| Stmt {
	$$ = $1;
}
;
Stmt: Inputstmt {
	$$ = $1;
}
| Outputstmt {
	$$ = $1;
}
| Assgstmt {
	$$ = $1;
}	
;
Inputstmt: _READ '(' _ID ')' ';'{
	$$ = makeStatementNode(STATEMENT,READ,$3,(struct AstNode *)NULL,"Read");
}
;
Outputstmt: _WRITE'('expr')'';'{
	$$ = makeStatementNode(STATEMENT,WRITE,$3,(struct Astnode *)NULL, "Write");
}
;
Assgstmt: id '=' expr ';'{
	$$ = makeExpressionNode(EXPRESSION,ASSIGNMENT,'=',$1,$3,"=");
}
;

expr : expr _PLUS expr		{
	$$ = makeExpressionNode(EXPRESSION,PLUS,'+',$1,$3,"+"); 
	}
	 | expr _MINUS expr 		{
	$$ = makeExpressionNode(EXPRESSION,MINUS,'-',$1,$3,"-"); 
	}
	 | expr _MUL expr		{
	$$ = makeExpressionNode(EXPRESSION,MUL,'*',$1,$3,"*"); 
	}
	 | expr _DIV expr		{
	$$ = makeExpressionNode(EXPRESSION,DIV,'/',$1,$3,"/"); 
	}
	 | '(' expr ')'		{$$ = $2;}
	 | _NUM			{$$ = $1;}
	 | _ID          {$$ = $1;}
	 ;
id:  _ID {$$ = $1;}
;
%%

void yyerror(char const *s)
{
    printf("yyerror: %s\n",s);
    return ;
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
