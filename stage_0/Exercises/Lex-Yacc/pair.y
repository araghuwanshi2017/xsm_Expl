%{
  #include <stdio.h>
  int yyerror();
%}

%token DIGIT NEWLINE

%%

start : pair NEWLINE		{printf("\nComplete\n");exit(1); }
	;

pair:num','num	{ printf("pair(%d,%d)\n",$1,$3);}
  ;
num: DIGIT			{ $$=$1; }
  ;


%%

int yyerror()
{
	printf("Error");
}

int main()
{
	yyparse();
	return 1;
}