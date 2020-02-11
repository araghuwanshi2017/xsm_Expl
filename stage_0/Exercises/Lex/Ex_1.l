%{
	#include<stdio.h>
	int new_l = 0,characters = 0, words = 0;
%}

%%
\n {new_l++;}
[a-zA-Z] {characters++;}
%%


int main()
{
	yylex();

	printf("Number of New_Lines :- %d\n",new_l);
	printf("Number of Characters :- %d\n",characters);
}