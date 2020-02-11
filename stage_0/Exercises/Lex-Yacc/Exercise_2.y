/*Declaration Section*/
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    char * con_cat(char *,char *,char);
    char *to_string(char *);
%}

%union{
    char character;
    char* string;

};

%token LETTER
%token NEWLINE
%left '+'
%left '*'
%type <string> LETTER

%%
start: expr NEWLINE              {printf("%s\nParsing Done.\n",$<string>$);exit(1);}
expr : expr '+' expr             {$<string>$ = con_cat($<string>1,$<string>3,$<character>2);}
     | expr '*' expr             {$<string>$ = con_cat($<string>1,$<string>3,$<character>2);}
     | LETTER                    {$<string>$ = to_string($<string>1);}
;
%%

int yyerror()
{
    printf("Syntax Error\n");
    return 1;
}

char* con_cat(char *str1,char *str2,char s){
    int len1 = strlen(str1),len2 = strlen(str2);
    char * arr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    int z = 0;
    for(int i = 0;i < len1;i++){
        arr[z++] = str1[i];
    }
    for(int i = 0;i < len2;i++){
        arr[z++] = str2[i];
    }
    
    arr[z++] = s;
    return arr;
}
char *to_string(char* str){
    int len = strlen(str), cnt = 0;
    char *arr = (char *)malloc(len * sizeof(char));
    
    for(int i = 0;i < len;i++)
        arr[cnt++] = str[i];
    return arr;
}

int main()
{
    yyparse();
    return 1;
}