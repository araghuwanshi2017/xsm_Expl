%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "astree.h"
	#include "astree.c"
	int yylex(void);
	FILE *ft, *yyin;
	struct Gsymbol *tmp;
%}


%union
{
	struct Astnode *node;	
}

%type <node> _BREAK _CONTINUE _BREAKPOINT
%type <node> DeclList Decl Declarations VarList
%type <node> program
%type <node> Slist Stmt Inputstmt Boolstmt Outputstmt Assgstmt Ifstmt Whilestmt RepeatUntil Dowhile 
%type <node> _NUM
%type <node> expr expr_str _ID id _END _STRING
//declaration
%token _DECL _ENDDECL
//operator
%token _PLUS _MINUS _MUL _DIV _MOD
//constants and identifiers
%token _NUM _STRING _ID
//relop
%token _LT _LE _GT _GE _NE _EQ
//data type
%token _INT _STR
//read and write
%token _READ _WRITE
//begin and end of function
%token _BEGIN _END
//if-else
%token _IF _THEN _ELSE _ENDIF
//while and do-while
%token _WHILE _DO _ENDWHILE
//repeat-until
%token _REPEAT _UNTIL
//break, continue, breakpoint
%token _BREAK _CONTINUE _BREAKPOINT
%left _PLUS _MINUS 
%left _MUL _DIV _MOD

%start program

%%

// ***************************** DECLARATIONS *******************************
Declarations : _DECL DeclList _ENDDECL {

	print_GST(GSTroot);
	$$ = $2;
	printf("Declarations Done\n");
} 
| _DECL _ENDDECL {
	printf("No Declarations\n");
}
;


DeclList : DeclList Decl {$$ = $1;}
| Decl {$$ = $1;}
;

Decl : _INT VarList ';' {

	$$ = AST_typechange(GSTroot, $2, INTEGER);
}
| _STR VarList ';'{
	 $$ = AST_typechange(GSTroot, $2, STRING);
}
;
VarList : VarList ',' _ID {
	tmp = init_node(-1, VARIABLE, 1, $3->s);
	GSTroot = installID(GSTroot, $3->s, -1, VARIABLE, 1,tmp);
	$3->GST_entry = tmp;
	$3->GST_entry->next = NULL;
	$$ = makeStatementNode(STATEMENT, STATEMENT, $1, $3, "ST");
}
| VarList ',' _ID'['_NUM']' {
	tmp = init_node(-1, ARRAY_VARIABLE, $5->val, $3->s);
	GSTroot = installID(GSTroot, $3->s, -1, ARRAY_VARIABLE, $5->val,tmp);
	$3->GST_entry = tmp;
	$3->GST_entry->next = NULL;
	$$ = makeStatementNode(STATEMENT, STATEMENT, $1, $3, "ST");	
}
| _ID {
	tmp = init_node(-1, VARIABLE, 1, $1->s);
	$1->GST_entry = tmp;
	$1->GST_entry->next = NULL;
	GSTroot = installID(GSTroot, $1->s, -1, VARIABLE, 1,tmp);
	$$ = $1;
}
| _ID'['_NUM']'{

	tmp = init_node(-1, ARRAY_VARIABLE, $3->val, $1->s);
	$$->GST_entry = tmp;
	$$->GST_entry->next = NULL;
	GSTroot = installID(GSTroot, $1->s, -1, ARRAY_VARIABLE, $3->val,tmp);
	$$ = makeArrayVariableNode(ARRAY_VARIABLE,ARRAY_VARIABLE,$1,$3,$1->s);
}
;
// *****

// ********************* BEGIN_END ***********************

program: Declarations _BEGIN Slist _END ';'{

	//$$ = $3;
	print($3);
	printf("Parsing Done\n");
	codeGen($3,ft);
	exit(1);
}
| Declarations _BEGIN _END ';'{
	$$ = $3;
	printf("Parsing Done\n");
	exit(1);
}
;

// *****
Slist: Slist Stmt{
	 $$ = makeStatementNode(STATEMENT,STATEMENT,$1,$2,"STATEMENT");
}
| Stmt {
	$$ = $1;
}
;

// *************************** STATEMENT ********************************


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
Inputstmt: _READ '(' id ')'';'{
	tmp = Lookup(GSTroot, $3->s);


	if(tmp == NULL)
	{
		printf("error: %s",$3->s);
		exit(1);
	}

	$3->GST_entry = tmp;
	$3->type = tmp->type;
	$$ = $3;
	$$ = makeStatementNode(STATEMENT,READ,$3,(Astnode *)NULL,"Read");
}
;
Outputstmt: _WRITE'('expr_str')'';'{
	$$ = makeStatementNode(STATEMENT,WRITE,$3,(Astnode *)NULL, "Write");
}
;
Assgstmt: id '=' expr_str ';'{
	//printf("Assmt\n");
	if($1->type != $3->type){
		printf("Invalid operatinon b/w operands\n");
		exit(1);
	}
	$$ = makeExpressionNode(EXPRESSION,ASSIGNMENT,'=',$1,$3,"=");
}
;

expr_str : expr {$$ = $1;}
| _STRING {$$ = $1;}
;


Ifstmt: _IF'('Boolstmt')' _THEN Slist _ELSE Slist _ENDIF ';'{
		if($3->nodetype == BOOLEAN)
		{
			Astnode *if_node = makeStatementNode(STATEMENT,IF,$3,$6,"IF");
			Astnode *else_node = makeStatementNode(STATEMENT,ELSE,$8,(Astnode *)NULL,"ELSE");

			$$ = makeStatementNode(STATEMENT,IF_ELSE,if_node,else_node,"IF_ELSE");
		}
		else 
		{
			printf("Invalid Boolean Statement\n");
			exit(1);
		}
}
| _IF'('Boolstmt')' _THEN Slist  _ENDIF ';'{
		if($3->nodetype == BOOLEAN)
		{
			Astnode * if_node = makeStatementNode(STATEMENT,IF,$3,$6,"IF");
			$$ = makeStatementNode(STATEMENT,IF_ELSE,if_node,(Astnode *)NULL,"IF_ELSE");
		}
		else
		{
			printf("Invalid Boolean Statement\n");
			exit(1);
		}
	}
;
Boolstmt:  expr _GT expr {

	if($1->type != $3->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	$$ = makeStatementNode(BOOLEAN,GT,$1,$3,"GT");
	}
	| expr _LT expr {
		if($1->type != $3->type)
		{
			printf("aaError Invalid operator b/w operands\n");
			exit(1);
		}
		$$ = makeStatementNode(BOOLEAN,LT,$1,$3,"LT");
	}
	| expr _GE expr {
		if($1->type != $3->type)
		{
			printf("bbError Invalid operator b/w operands\n");
			exit(1);
		}
		$$ = makeStatementNode(BOOLEAN,GE,$1,$3,"GE");
	}
	| expr _LE expr {
		if($1->type != $3->type)
		{
			printf("ccError Invalid operator b/w operands\n");
			exit(1);
		}
		$$ = makeStatementNode(BOOLEAN,LE,$1,$3,"LE");
	}
	| expr _NE expr {
		if($1->type != $3->type)
		{
			printf("ddError Invalid operator b/w operands\n");
			exit(1);
		}
		$$ = makeStatementNode(BOOLEAN,NE,$1,$3,"NE");
	}
	| expr _EQ expr {
		if($1->type != $3->type)
		{
			printf("eeError Invalid operator b/w operands\n");
			exit(1);
		}
		$$ = makeStatementNode(BOOLEAN,EQ,$1,$3,"EQ");
	}
;

Whilestmt : _WHILE'('Boolstmt')' _DO Slist _ENDWHILE ';'{

	if($3->nodetype == BOOLEAN)
	{
		$$ = makeStatementNode(LOOP,WHILE,$3,$6,"WHILE");
	}
	else
	{
		printf("error: Invalid Comparison:");
		exit(1);
	}
}
;

RepeatUntil : _REPEAT Slist  _UNTIL'('Boolstmt')'';'{

	//printf("Hello\n");
	if($5->nodetype == BOOLEAN)
	{
		$$ = makeStatementNode(LOOP,REPEAT_UNTIL,$2,$5,"REPEAT_UNTIL"); 
	}
	else
	{
		printf("error: Invalid Comparison:");
		exit(1);
	}
} 
;
Dowhile : _DO '{'Slist'}' _WHILE'('Boolstmt')'';'{

	if($7->nodetype == BOOLEAN)
	{
		$$ = makeStatementNode(LOOP,DO_WHILE,$3,$7,"DO_WHILE"); 
	}
	else
	{
		printf("error: Invalid Comparison:");
		exit(1);
	}
}
;

// *****

// ******************************EXPRESSION ******************************
expr : expr _PLUS expr		{
	if($1->type != $3->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	$$ = makeExpressionNode(EXPRESSION,PLUS,'+',$1,$3,"+"); 
	$$->type = $1->type;
}
| expr _MINUS expr 	{
	if($1->type != $3->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	$$ = makeExpressionNode(EXPRESSION,MINUS,'-',$1,$3,"-"); 
	$$->type = $1->type;
}
| expr _MUL expr{
	if($1->type != $3->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	$$ = makeExpressionNode(EXPRESSION,MUL,'*',$1,$3,"*"); 
	$$->type = $1->type;
}
| expr _DIV expr{
	if($1->type != $3->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	$$ = makeExpressionNode(EXPRESSION,DIV,'/',$1,$3,"/"); 
	$$->type = $1->type;
}
| expr _MOD expr{
	if($1->type != $3->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	$$ = makeExpressionNode(EXPRESSION,MOD,'%',$1,$3,"%"); 
	$$->type = $1->type;
}
| '(' expr ')'		{$$ = $2;}
| _NUM			{$$ = $1;}
| id   {$$ = $1;}
;


id:  _ID {

	tmp = Lookup(GSTroot, $1->s);
	if(tmp == NULL)
	{
		printf("a1error: %s",$1->s);
		exit(1);
	}

	$$ = $1;
	$$->GST_entry = tmp;
	$$->type = tmp->type;
}
| _ID'['expr']' {
	tmp = Lookup(GSTroot, $1->s);
	if(tmp == NULL)
	{
		printf("a2error: %s",$1->s);
		exit(1);
	}

	if($3->type != INTEGER)
	{
		printf("error : size of an array must be an integer\n");
		exit(1);
	}
	$1->GST_entry = tmp;
	$$->type = tmp->type;
	$$ = makeArrayVariableNode(ARRAY_VARIABLE, $$->type, $1, $3,$1->s);
	$$->GST_entry = $1->GST_entry;
	
}
;

// *****

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
		
		ft = fopen(argv[1],"r");
		if(ft) yyin = ft;
	
	}	
		printf("Xsm file as code.xsm\n");
		ft = fopen("code.xsm","w");
		yyparse();
	
	return 0;
}
