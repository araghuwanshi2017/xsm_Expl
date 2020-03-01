%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "astree.h"
	#include "astree.c"
	int yylex(void);
	FILE *ft;
%}


%union
{
	struct Astnode *node;	
}

%type <node> program Slist Stmt Inputstmt Outputstmt Assgstmt Ifstmt Boolstmt Whilestmt RepeatUntil Dowhile id  expr _NUM  _END _ID _BREAK _CONTINUE _BREAKPOINT 
%token _ID _NUM _PLUS _MINUS _MUL _DIV _BEGIN _END _READ _WRITE  NEWLINE _IF _ELSE _ENDIF _THEN _WHILE _DO _ENDWHILE _GT _LT _LE _GE _NE _EQ _BREAK _CONTINUE _BREAKPOINT _REPEAT _UNTIL 
%left _PLUS _MINUS 
%left _MUL _DIV

%%

program:  _BEGIN Slist _END ';'{
	//printf("Hello2\n");
	$$ = $3;
	printf("Parsing Done\n");
	//print($2);
	//printf("\n");

	//evaluator($2);
	codeGen($2,ft);
	//printf("\n");
	exit(1);
}
| _BEGIN _END ';'{
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
| Ifstmt {
	$$= $1;
}
| Whilestmt {
	$$ = $1;
}	
| _BREAK ';'{
	$$ = $1;
}
| _BREAKPOINT ';'{
	$$ = $1;
}
| _CONTINUE ';'{
	$$ = $1;
}
| RepeatUntil {
	$$ = $1;
}
| Dowhile {
	$$ = $1;
}
;

Inputstmt: _READ '(' _ID ')'';'{
	$$ = makeStatementNode(STATEMENT,READ,$3,(Astnode *)NULL,"Read");
}
;
Outputstmt: _WRITE'('expr')'';'{
	$$ = makeStatementNode(STATEMENT,WRITE,$3,(Astnode *)NULL, "Write");
}
;
Assgstmt: id '=' expr ';'{
	$$ = makeExpressionNode(EXPRESSION,ASSIGNMENT,'=',$1,$3,"=");
}
;

Ifstmt: _IF'('Boolstmt')' _THEN Slist _ELSE Slist _ENDIF ';'{
		Astnode *if_node = makeStatementNode(STATEMENT,IF,$3,$6,"IF");
		Astnode *else_node = makeStatementNode(STATEMENT,ELSE,$8,(Astnode *)NULL,"ELSE");

		$$ = makeStatementNode(STATEMENT,IF_ELSE,if_node,else_node,"IF_ELSE");
	}
	|
	_IF'('Boolstmt')' _THEN Slist  _ENDIF ';'{
		Astnode * if_node = makeStatementNode(STATEMENT,IF,$3,$6,"IF");
		$$ = makeStatementNode(STATEMENT,IF_ELSE,if_node,(Astnode *)NULL,"IF_ELSE");
	}
;
Boolstmt:  expr _GT expr {
		//printf("Hello1\n");
		$$ = makeStatementNode(BOOLEAN,GT,$1,$3,"GT");
	}
	| expr _LT expr {
		$$ = makeStatementNode(BOOLEAN,LT,$1,$3,"LT");
	}
	| expr _GE expr {
		$$ = makeStatementNode(BOOLEAN,GE,$1,$3,"GE");
	}
	| expr _LE expr {
		$$ = makeStatementNode(BOOLEAN,LE,$1,$3,"LE");
	}
	| expr _NE expr {
		$$ = makeStatementNode(BOOLEAN,NE,$1,$3,"NE");
	}
	| expr _EQ expr {
		$$ = makeStatementNode(BOOLEAN,EQ,$1,$3,"EQ");
	}
;

Whilestmt : _WHILE'('Boolstmt')' _DO Slist _ENDWHILE ';'{

	$$ = makeStatementNode(LOOP,WHILE,$3,$6,"WHILE");
}
;

RepeatUntil : _REPEAT Slist  _UNTIL'('Boolstmt')'';'{

	//printf("Hello\n");
	$$ = makeStatementNode(LOOP,REPEAT_UNTIL,$2,$5,"REPEAT_UNTIL"); 
} 
;
Dowhile : _DO '{'Slist'}' _WHILE'('Boolstmt')'';'{

	$$ = makeStatementNode(LOOP,DO_WHILE,$3,$7,"DO_WHILE"); 
}
;

expr : expr _PLUS expr		{
	//printf("Hello2\n");
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
