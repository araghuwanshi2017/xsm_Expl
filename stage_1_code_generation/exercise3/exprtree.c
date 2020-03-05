struct tnode* makeLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

int evaluate(struct tnode *t){
    if(t->op == NULL)
    {
        return t->val;
    }
    else{
        switch(*(t->op)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
                       break;
            case '-' : return evaluate(t->left) - evaluate(t->right);
                       break;
            case '*' : return evaluate(t->left) * evaluate(t->right);
                       break;
            case '/' : return evaluate(t->left) / evaluate(t->right);
                       break;
        }
    }
}

void prefix(struct tnode *t)
{
    if(t->op == NULL)
    {
        printf("%d ",t->val);
    }
    else
    {  
        printf("%c ",*(t->op));
        prefix(t->left);
        prefix(t->right);
    }   

    return;
}

void postfix(struct tnode *t)
{
    if(t->op == NULL)
    {
        printf("%d ",t->val);
    }
    else
    {  
        postfix(t->left);
        postfix(t->right);
        printf("%c ",*(t->op));
    }   

    return;
}

// Intialization of registers
void init_reg()
{
    for(int i = 0;i < 20;i++)
        reg[i] = 0;
    return ;
}


//Get a register
reg_idx getReg()
{
    for(int i = 0;i < 20;i++)
    {
        if(reg[i] == 0)
        {
            reg[i] = 1;
            return i;
        }
    }

    printf("Out of Registers\n");
    return -1;
}

//Free a register
reg_idx freeReg()
{
    int i = 0;
    while(i < 20 && reg[i] == 1)
        i++;
    if(i > 0 && reg[i - 1] == 1){
        reg[i - 1] = 0; //Free the register with largest i;
        return i - 1;
    }
    else
    {
        printf("Invalid Register\n");
        return -1;
    }
}


// ***************************** Code_Generation ****************************

reg_idx codeGen_util(struct tnode*t,FILE *ft)
{
    reg_idx idx;
    if(t->op == NULL)
    {
        idx = getReg();
        if(idx == -1)
            exit(1);

        fprintf(ft,"MOV R%d, %d\n",idx, t->val);
        return idx;
    }
    else
    {
        reg_idx left = codeGen_util(t->left, ft);
        reg_idx right = codeGen_util(t->right, ft);


        switch(*(t->op))
        {
            case '+':
                    fprintf(ft,"ADD R%d, R%d\n",left, right);
                    idx = freeReg();

                    if(idx == -1)
                        exit(1);
                    return left;
                    break;
            case '-':
                    fprintf(ft,"SUB R%d, R%d\n",left, right);
                    idx = freeReg();

                    if(idx == -1)
                        exit(1);
                    return left;
                    break;
            case '*':
                    fprintf(ft,"MUL R%d, R%d\n",left, right);
                    idx = freeReg();

                    if(idx == -1)
                        exit(1);
                    return left;
                    break;
            case '/':
                    fprintf(ft,"DIV R%d, R%d\n",left, right);
                    idx = freeReg();

                    if(idx == -1)
                        exit(1);
                    return left;
                    break;
        }

    }

}



void codeGen(struct tnode*t, FILE *ft)
{
    init_reg(); //Initialization
    fprintf(ft, "0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf(ft, "BRKP\n");
    reg_idx result = codeGen_util(t, ft);

    if(result == -1)
        exit(1);

    fprintf(ft, "MOV [4096], R%d\n", result);
    fprintf(ft, "MOV SP, 4096\n");
    reg_idx tmp = getReg();

    if(tmp == -1)
        exit(1);

    fprintf(ft,"MOV R%d,\"Write\"\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"MOV R%d,-2\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"PUSH R%d\n",result);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"CALL 0\n");
    fprintf(ft,"POP R%d\n",tmp);
    fprintf(ft,"POP R%d\n",tmp);
    fprintf(ft,"POP R%d\n",result);
    fprintf(ft,"POP R%d\n",tmp);
    fprintf(ft,"POP R%d\n",tmp);
    fprintf(ft,"MOV R%d,\"Exit\"\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"CALL 0\n");
    fclose(ft);



}