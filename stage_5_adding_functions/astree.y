%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "astree.h"
	#include "astree.c"
	int yylex(void);
	FILE *ft, *yyin;
	struct Astnode *type_node , *tmp_ast;;
	struct Gsymbol *tmp;
	struct Pmtr *paramList , *Pnode;
	struct Lsymbol *LSTnode, *Lnode;
%}


%union
{
	struct Astnode *node;	
	struct Pmtr *param_node;
	struct Lsymbol *lst_node;
}

// *******************************Types and Tokens *******************************
%type <lst_node> LdeclBlock LdeclList Ldecl IdList 
%type <param_node> ParamList Param
%type <node>  Type _INT _STR
%type <node> GDeclBlock GdeclList Gdecl GidList Gid //type of nodes for declaration of global variable and functions  
%type <node>  Body MainBlock                //type of nodes for declaration of locally declared variable and function's body 
%type <node> FdefBlock Fdef
%type <node> _BREAK _CONTINUE _BREAKPOINT
%type <node> program
%type <node> Slist Stmt Retstmt Inputstmt Boolstmt Outputstmt Assgstmt Ifstmt Whilestmt RepeatUntil Dowhile 
%type <node> _NUM Ret_Type
%type <node> expr expr_str _ID id _END _STRING 
//Function Declaration
%token _MAIN
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
%token _BEGIN _END _RETURN
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
// ****************************** Globally Declarations Block ****************************** 

program : GDeclBlock FdefBlock MainBlock {
		print_GST(GSTroot);
		printf("Parsing Done\n");
		codeGen($3, ft);
		exit(1);  
}         
|	    GDeclBlock MainBlock {
		codeGen($2, ft);
		printf("Parsing Done\n");
		exit(1);
}
|		MainBlock {
		printf("Parsing Done\n");
		$$ = $1;
		exit(1);
}
;


 MainBlock : _INT _MAIN'('')' '{'LdeclBlock Body '}'{

 		print($7);
 		Lnode = init_lstnode("main");
 		LSTnode = install_lstnode(LSTnode, Lnode);

 		tmp = init_node(-1, FUNCTION, 0, "main");
 		GSTroot = installID(GSTroot, 0, tmp);

 		tmp = Lookup(GSTroot, "main");
 		tmp->LST_entry = LSTnode;
 		tmp_ast = $7->right;

 		if(!tmp)
 		{
 			printf("undefined  reference to 'main'\n");
 			exit(1);
 		}
 		if(tmp_ast->type != INTEGER)
 		{
 			printf("error: 'main' function must have a return type of integer :\n");
 			exit(1);
 		}
 		$$ = makeStatementNode(FUNCTION, FUNCTION, $7,(Astnode *)NULL, "MAIN_FUNCTION");
 		$$->GST_entry = tmp;
 		LSTnode = NULL;
 }
 ;

GDeclBlock : _DECL GdeclList _ENDDECL {

		$$ = $2;
		printf("Global Declaration Done\n");

}
|            _DECL _ENDDECL {
		printf("No Global Declaration\n");
		$$ = NULL;
}
;

GdeclList : GdeclList Gdecl {

		if($1->type != $2->type)
		{
			printf("error :Type Mismatch\n");
			exit(1);
		}

		$$ = makeStatementNode($1->type, STATEMENT, $1, $2, "STATEMENT");
}
| 			Gdecl {
	$$ = $1;
}

Gdecl :  Type GidList ';' {

	$$ = AST_typechange(GSTroot, $2, $1->type);
	$$->type = $1->type;
}
;

GidList : GidList ',' Gid {

		$$ = makeStatementNode(-1, STATEMENT, $1, $3, "STATEMENT");
}
|		  Gid {
		$$ = $1;
}
;

Gid :   _ID {

		tmp = init_node(-1, VARIABLE, 1, $1->varname);
		$1->GST_entry = tmp;
		GSTroot = installID(GSTroot, 1 ,tmp);
		$$ = $1;
}
| 	    _ID'['_NUM']' {

		tmp = init_node(-1, ARRAY_VARIABLE, $3->val, $1->varname);
		GSTroot = installID(GSTroot, $3->val, tmp);
		$$ = makeArrayVariableNode(-1, ARRAY_VARIABLE, $1, $3, $1->varname);	
		$$->GST_entry = tmp;
}
|       _ID'('ParamList')' {

		tmp = init_node(-1, FUNCT_VARIABLE, -1,  $1->varname);
		tmp->PList = $3;
		GSTroot = installID(GSTroot, -1, tmp);
		$$ = $1;
		$$->GST_entry = tmp;
		paramList = NULL;
}
;

// ***** 

// ****************************** Function's Declarations Block ******************************

FdefBlock : FdefBlock Fdef {

			LSTnode = NULL;
}
| 		    Fdef {
			$$ = $1;
 }
;

 Fdef :  Type _ID'('ParamList')' '{'LdeclBlock Body'}' {

 			LSTnode = update_lst(LSTnode, GSTroot, $2);

 			tmp = Lookup(GSTroot, $2->varname);
 			if(!tmp)
 			{
 				printf("error : implicit declaration of function '%s'",$2->varname);
 				exit(1);
 			}
 			else if(tmp->type != $1->type)
 			{
 				printf("error : Invalid return Type of function '%s'\n",$2->varname);
 				exit(1);
 			}

 			$8->type = $1->type;
 			tmp->LST_entry = LSTnode;
 			LSTnode = NULL;
 			$$ = $8;
 			//print_funct_body($8);
 			//funct_codeGen(ft, $8);
 }
 ;
ParamList : ParamList ',' Param {

			$$ = paramList;

}
| 			Param {

		$$ = $1;
}
;

Param : Type _ID {

		Pnode = PLookup(paramList, $2->varname);
		if(Pnode)
		{
			printf("error : redeclaration of a parameter  '%s'\n",$2->varname);
			exit(1);
		}

		Pnode = init_pnode($1->type, $2->varname);
		paramList = install_Pnode(paramList, Pnode);

		$$ = paramList;
}
;

// ***** 

// ****************************** Local Variables Declarations Block ******************************

LdeclBlock : _DECL LdeclList _ENDDECL {

			print_lst(LSTnode);
			printf("Function Declaration\n");
			$$ = $2;
}
| 			_DECL _ENDDECL {
			printf("No Function Declaration\n");
			$$ = NULL;
}
;

LdeclList : LdeclList Ldecl {

}
| 			Ldecl {

	$$ = $1;
}
;

Ldecl : Type IdList ';' {

	$$ = lst_typechange(LSTnode, $2, $1->type);
}
;

IdList : IdList ',' _ID {

		Lnode = init_lstnode($1->varname);	
		LSTnode = install_lstnode(LSTnode, Lnode);

		$$ = makeFunctDeclNode(-1, $1, $3, "FUNCT_DECL");	
}
| 		_ID {

		Lnode = init_lstnode($1->varname);
		LSTnode = install_lstnode(LSTnode, Lnode);

		$$ = LSTnode;

}
;

Type : _INT {

	type_node = (Astnode *)malloc(sizeof(Astnode));
	$1 = type_node;
	$1->type = INTEGER;
	$$ = $1;
}
| 	   _STR {

	type_node = (Astnode *)malloc(sizeof(Astnode));
	$1 = type_node;
	$1->type = STRING;
	$$ = $1;
}
;

// *****

// ****************************** Function Calling Syntax ******************************

// E : _ID'('')' {

// }
// |	_ID'('ArgList')' {

// }
// ;

// ArgList : ArgList ',' E {

// }
// | 		  E {

// }
// ;



// ********************* BEGIN_END ***********************

 Body : _BEGIN Slist Retstmt _END ';'{

 		$$ = makeStatementNode(STATEMENT, STATEMENT, $2, $3, "STATEMENT");
 		printf("Body of the function parsed\n");
}
| _BEGIN Retstmt _END ';'{

		$$ = $2;
 		$$ = makeStatementNode(STATEMENT, STATEMENT,(Astnode *)NULL , $2, "STATEMENT");
 		printf("Body of the function parsed\n");
}
;

Retstmt : _RETURN Ret_Type ';'{
	$$ = $2;
}
;
Ret_Type : _ID {
	$$ = $1;
}
| _NUM {
	$$ = $1;
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
	tmp = Lookup(GSTroot, $3->varname);


	if(tmp == NULL)
	{
		printf("error: %s",$3->varname);
		exit(1);
	}

	$3->GST_entry = tmp;
	$3->type = tmp->type;
	$$ = $3;
	$$ = makeStatementNode(READ,STATEMENT,$3,(Astnode *)NULL,"Read");
}
;
Outputstmt: _WRITE'('expr_str')'';'{
	$$ = makeStatementNode(WRITE,STATEMENT,$3,(Astnode *)NULL, "Write");
}
;
Assgstmt: id '=' expr_str ';'{
	//printf("Assmt\n");
	if($1->type != $3->type){
		printf("Invalid operatinon b/w operands\n");
		exit(1);
	}

	$$ = makeExpressionNode(ASSIGNMENT,EXPRESSION,'=',$1,$3,"=");
}
;

expr_str : expr {$$ = $1;}
| _STRING {$$ = $1;}
;


Ifstmt: _IF'('Boolstmt')' _THEN Slist _ELSE Slist _ENDIF ';'{
		if($3->nodetype == BOOLEAN)
		{
			Astnode *if_node = makeStatementNode(IF,STATEMENT, $3,$6,"IF");
			Astnode *else_node = makeStatementNode(ELSE,STATEMENT,$8,(Astnode *)NULL,"ELSE");

			$$ = makeStatementNode(IF_ELSE,STATEMENT,if_node,else_node,"IF_ELSE");
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
			Astnode * if_node = makeStatementNode(IF,STATEMENT,$3,$6,"IF");
			$$ = makeStatementNode(IF_ELSE,STATEMENT,if_node,(Astnode *)NULL,"IF_ELSE");
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
	$$ = makeStatementNode(GT,BOOLEAN,$1,$3,"GT");
	}
	| expr _LT expr {
		if($1->type != $3->type)
		{
			printf("aaError Invalid operator b/w operands\n");
			exit(1);
		}
		$$ = makeStatementNode(LT,BOOLEAN,$1,$3,"LT");
	}
	| expr _GE expr {
		if($1->type != $3->type)
		{
			printf("bbError Invalid operator b/w operands\n");
			exit(1);
		}
		$$ = makeStatementNode(GE,BOOLEAN,$1,$3,"GE");
	}
	| expr _LE expr {
		if($1->type != $3->type)
		{
			printf("ccError Invalid operator b/w operands\n");
			exit(1);
		}
		$$ = makeStatementNode(LE,BOOLEAN,$1,$3,"LE");
	}
	| expr _NE expr {
		if($1->type != $3->type)
		{
			printf("ddError Invalid operator b/w operands\n");
			exit(1);
		}
		$$ = makeStatementNode(NE,BOOLEAN,$1,$3,"NE");
	}
	| expr _EQ expr {
		if($1->type != $3->type)
		{
			printf("eeError Invalid operator b/w operands\n");
			exit(1);
		}
		$$ = makeStatementNode(EQ,BOOLEAN,$1,$3,"EQ");
	}
;

Whilestmt : _WHILE'('Boolstmt')' _DO Slist _ENDWHILE ';'{

	if($3->nodetype == BOOLEAN)
	{
		$$ = makeStatementNode(WHILE,LOOP,$3,$6,"WHILE");
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
		$$ = makeStatementNode(REPEAT_UNTIL,LOOP,$2,$5,"REPEAT_UNTIL"); 
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
		$$ = makeStatementNode(DO_WHILE,LOOP,$3,$7,"DO_WHILE"); 
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
	$$ = makeExpressionNode(PLUS,EXPRESSION,'+',$1,$3,"+"); 
	$$->type = $1->type;
}
| expr _MINUS expr 	{
	if($1->type != $3->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	$$ = makeExpressionNode(MINUS,EXPRESSION,'-',$1,$3,"-"); 
	$$->type = $1->type;
}
| expr _MUL expr{
	if($1->type != $3->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	$$ = makeExpressionNode(MUL,EXPRESSION,'*',$1,$3,"*"); 
	$$->type = $1->type;
}
| expr _DIV expr{
	if($1->type != $3->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	$$ = makeExpressionNode(DIV,EXPRESSION,'/',$1,$3,"/"); 
	$$->type = $1->type;
}
| expr _MOD expr{
	if($1->type != $3->type)
	{
		printf("Error Invalid operator b/w operands\n");
		exit(1);
	}
	$$ = makeExpressionNode(MOD,EXPRESSION,'%',$1,$3,"%"); 
	$$->type = $1->type;
}
| '(' expr ')'		{$$ = $2;}
| _NUM			{$$ = $1;}
| id   {$$ = $1;}
;


id:  _ID {

	tmp = Lookup(GSTroot, $1->varname);
	if(tmp == NULL)
	{
		printf("error: %s",$1->varname);
		exit(1);
	}

	$$ = $1;
	$1->GST_entry = tmp;
	$$->type = tmp->type;
}
| _ID'['expr']'
{
	tmp = Lookup(GSTroot, $1->varname);
	if(tmp == NULL)
	{
		printf("error: %s",$1->varname);
		exit(1);
	}

	if($3->type != INTEGER)
	{
		printf("error : size of an array must be an integer\n");
		exit(1);
	}
	$1->GST_entry = tmp;
	$$->type = tmp->type;
	$$ = makeArrayVariableNode($$->type, ARRAY_VARIABLE, $1, $3,$1->varname);
	$$->GST_entry = $1->GST_entry;
	
}
;

// *****

%%

void yyerror(char const *err)
{
    printf("yyerror: %s\n",err);
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
