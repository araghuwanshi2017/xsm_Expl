int LABEL = -1;
void print(struct Astnode * root)
{
    if(root)
    {
        print(root->left);
        printf("%s ",root->s);
        // printf("%d   ",root->type);
        print(root->right);
    }
    return ;
}

struct Astnode* makeVariableLeafNode(int nodetype, int type, char varname, char *s)
{
    struct Astnode *temp;
    temp = (struct Astnode*)malloc(sizeof(struct Astnode));
    temp->op = malloc(sizeof(char));
    temp->s = (char *)malloc(strlen(s)*sizeof(char));
    temp->s = strdup(s);
    temp->type = type;
    temp->nodetype = nodetype;
    temp->varname = (char *)malloc(sizeof(char));
    *(temp->varname) = varname;
    temp->op = NULL;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct Astnode* makeConstantLeafNode(int nodetype, int type, int val, char *s){
    struct Astnode *temp;
    temp = (struct Astnode*)malloc(sizeof(struct Astnode));
    temp->s = (char *)malloc(strlen(s)*sizeof(char));
    temp->s = strdup(s);
    temp->op = malloc(sizeof(char));
    temp->type = type;
    temp->nodetype = nodetype;
    temp->val = val;
    temp->left = NULL;
    temp->right = NULL;
    temp->op = NULL;
    temp->varname =  NULL;
    return temp;
}

struct Astnode* makeStatementNode(int nodetype, int type,struct Astnode *l,struct Astnode *r, char *s){
    struct Astnode *temp;
    temp = (struct Astnode*)malloc(sizeof(struct Astnode));
    temp->s = (char *)malloc(strlen(s)*sizeof(char));
    temp->s = strdup(s);
    temp->op = malloc(sizeof(char));
    temp->type = type;
    temp->nodetype = nodetype;
    temp->left = l;
    temp->right = r;
    temp->op = NULL;
    temp->varname =  NULL;
    return temp;
}

struct Astnode* makeExpressionNode(int nodetype, int type,char op, struct Astnode* l,struct Astnode* r, char *s){
    struct Astnode *temp;
    temp = (struct Astnode*)malloc(sizeof(struct Astnode));
    temp->s = (char *)malloc(strlen(s)*sizeof(char));
    temp->s = strdup(s);
    temp->op = malloc(sizeof(char));
    *(temp->op) = op;
    temp->type = type;
    temp->nodetype = nodetype;
    temp->left = l;
    temp->right = r;
    temp->varname =  NULL;
    return temp;
}

struct Astnode *makeBCBPNode(int nodetype, int type, char *s)
{
    struct Astnode *temp;
    temp = (struct Astnode*)malloc(sizeof(struct Astnode));
    temp->s = (char *)malloc(strlen(s)*sizeof(char));
    temp->s = strdup(s);
    temp->type = type;
    temp->nodetype = nodetype;
    return temp;
}

void prefix(struct Astnode *t)
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

void postfix(struct Astnode *t)
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


void allocate()
{
    int ptr = 4096;
    f(0, 26)
        address[i] = ptr++;
}

void clear_storage()
{
    for (int i = 0; i < 26; i++)
        storage[i] = 0;
    return;
}

int getLabel()
{
    int a = ++LABEL;
    return a;
}
// ***************************** Code_Generation ****************************

reg_idx expression_codeGen(struct Astnode*t,FILE *ft)
{
    reg_idx idx;
    if(t->nodetype == CONSTANT && t->type == INTEGER && t->op == NULL)
    {
        idx = getReg();
        if(idx == -1)
            exit(1);

        fprintf(ft,"MOV R%d, %d\n",idx, t->val);
        return idx;
    }

    if(t->nodetype == VARIABLE && t->type == INTEGER && t->varname != NULL)
    {
        int var_Addr = address[*(t->varname) - 'a'];
        idx = getReg();
        if(idx == -1)
            exit(1);

        fprintf(ft,"MOV R%d, [%d]\n",idx, var_Addr);
        return idx;
    }

    else
    {
        reg_idx left = expression_codeGen(t->left, ft);
        reg_idx right = expression_codeGen(t->right, ft);


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

int assignment_codeGen(struct Astnode*t, FILE *ft)
{
    reg_idx idx;
    if(t && t->left && t->right)
    {
        idx = expression_codeGen(t->right, ft);
        int var_Addr = address[*(t->left->varname) - 'a'];
        fprintf(ft,"MOV [%d], R%d\n",var_Addr,idx);
        idx = freeReg();

        if(idx == -1)
            exit(1);
        return 1;
    }
    printf("Invalid Statement\n");
    exit(1);
    return -1;
}

int write_codeGen(struct Astnode*t, FILE *ft)
{
    reg_idx idx;
    if (t && t->left)
    {
        idx = expression_codeGen(t->left, ft);
        reg_idx temp = getReg();
        if (temp == -1)
            exit(1);
        fprintf(ft, "MOV R%d,\"Write\"\n", temp);
        fprintf(ft, "PUSH R%d\n", temp);
        fprintf(ft, "MOV R%d,-2\n", temp);
        fprintf(ft, "PUSH R%d\n", temp);
        fprintf(ft, "PUSH R%d\n", idx);
        fprintf(ft, "PUSH R%d\n", temp);
        fprintf(ft, "PUSH R%d\n", temp);
        fprintf(ft, "CALL 0\n");
        fprintf(ft, "POP R%d\n", temp);
        fprintf(ft, "POP R%d\n", temp);
        fprintf(ft, "POP R%d\n", temp);
        fprintf(ft, "POP R%d\n", temp);
        fprintf(ft, "POP R%d\n", temp);
        idx = freeReg();
        if (idx == -1)
            exit(1);
        idx = freeReg();
        if (idx == -1)
            exit(1);
        return 1;
    }
    printf("Invalid Write Statement\n");
    return -1;   
}

int read_codeGen(struct Astnode*t, FILE *ft)
{
    int var_Addr = address[*(t->left->varname) - 'a'];
    reg_idx idx = getReg();
    if (idx == -1)
        exit(1);
    reg_idx temp = getReg();
    if (temp == -1)
        exit(1);
    fprintf(ft, "MOV R%d,%d\n", idx, var_Addr);
    fprintf(ft, "MOV R%d,\"Read\"\n", temp);
    fprintf(ft, "PUSH R%d\n", temp);
    fprintf(ft, "MOV R%d,-1\n", temp);
    fprintf(ft, "PUSH R%d\n", temp);
    fprintf(ft, "PUSH R%d\n", idx);
    fprintf(ft, "PUSH R%d\n", temp);
    fprintf(ft, "PUSH R%d\n", temp);
    fprintf(ft, "CALL 0\n");
    fprintf(ft, "POP R%d\n", temp);
    fprintf(ft, "POP R%d\n", temp);
    fprintf(ft, "POP R%d\n", temp);
    fprintf(ft, "POP R%d\n", temp);
    fprintf(ft, "POP R%d\n", temp);
    temp = freeReg();
    if (temp == -1)
        exit(1);
    idx = freeReg();
    if (idx == -1)
        exit(1);
    return 1;
}

void boolean_codeGen(struct Astnode *t, FILE *ft, int label)
{
    int a, b;
    a = expression_codeGen(t->left,ft);
    b = expression_codeGen(t->right,ft);

    switch(t->type)
    {
        case LT:
            fprintf(ft,"LT R%d,R%d\n",a,b);
            break;
        case GT:
            fprintf(ft,"GT R%d,R%d\n",a,b);
            break;
        case LE:
            fprintf(ft,"LE R%d,R%d\n",a,b);
            break;
        case GE:
            fprintf(ft,"GE R%d,R%d\n",a,b);
            break;
        case EQ:
            fprintf(ft,"EQ R%d,R%d\n",a,b);
            break;
        case NE:
            fprintf(ft,"NE R%d,R%d\n",a,b);
            break;
    }
    reg_idx tmp = freeReg();
    fprintf(ft,"JZ R%d, L%d\n",a,label);
    tmp = freeReg();
    return ;
}

void if_else_codeGen(struct Astnode * t, FILE *ft,int break_label, int continue_label)
{
    if(t)
    {
        if(t->left)
        {
            int label_1 = getLabel();
            int label_2 = getLabel();
            if(t->left->left)
                boolean_codeGen(t->left->left,ft,label_1);

            if(t->left->right)
            {
                // cout << "if_else " << break_label << " " << continue_label << "\n";
                // printf("if_else %d %d\n",break_label, continue_label);
                codeGen_util(t->left->right,ft,break_label,continue_label);
            }
            fprintf(ft,"JMP L%d\n",label_2);
            fprintf(ft,"L%d:\n",label_1);

            if(t->right)
                codeGen_util(t->right,ft,label_2,label_1);

            fprintf(ft,"L%d:\n",label_2);
            return ;
        }
    }
    printf("Not valid\n");
    exit(0);
}

void while_codeGen(struct Astnode *t, FILE *ft)
{
    if(t->left)
    {
        int label_1 = getLabel();
        int label_2 = getLabel();
        fprintf(ft,"L%d:\n",label_1);
        if(t->left)
            boolean_codeGen(t->left,ft,label_2);

        // printf("while %d %d\n",label_2, label_1);
        if(t->right)
            codeGen_util(t->right,ft,label_2,label_1);

        fprintf(ft, "JMP L%d\n",label_1);
        fprintf(ft, "L%d:\n",label_2);
        return ;
    }
    printf("Invalid WHILE\n");
    exit(0);
}

void repeat_until_codeGen(struct Astnode *t, FILE * ft)
{
    if(t->left)
    {
        int label_1 = getLabel();
        int label_2 = getLabel();
        fprintf(ft,"L%d:\n",label_1);
        if(t->left)
            codeGen_util(t->left,ft,label_2,label_1);

        if(t->right)
            boolean_codeGen(t->right,ft,label_2);

        fprintf(ft, "JMP L%d\n",label_1);
        fprintf(ft, "L%d:\n",label_2);
        return ;
    }
    printf("Invalid REPEAT_UNTIL\n");
    exit(0);
}

void do_while_codeGen(struct Astnode *t, FILE * ft)
{
    if(t->left)
    {
        int label_1 = getLabel();
        int label_2 = getLabel();
        fprintf(ft,"L%d:\n",label_1);
        if(t->left)
            codeGen_util(t->left,ft,label_2,label_1);

        if(t->right)
            boolean_codeGen(t->right,ft,label_2);

        fprintf(ft, "JMP L%d\n",label_1);
        fprintf(ft, "L%d:\n",label_2);
        return ;
    }
    printf("Invalid REPEAT_UNTIL\n");
    exit(0);
}

void codeGen_util(struct Astnode*t, FILE *ft, int break_label, int continue_label)
{
    // printf("codeGen_util %d %d   %d\n",break_label, continue_label,t->nodetype);
    if(t)
    {
        if(t->nodetype == EXPRESSION && t->type == ASSIGNMENT)
        {
            assignment_codeGen(t, ft);
            return ;
        }
        if(t->nodetype == STATEMENT && t->type == READ)
        {
            read_codeGen(t, ft);
            return ;
        }
        if(t->nodetype == STATEMENT && t->type == WRITE)
        {
            write_codeGen(t, ft);
            return ;
        }
        if(t->nodetype == STATEMENT && t->type == IF_ELSE)
        {
            if_else_codeGen(t,ft,break_label,continue_label);
            return ;
        }
        if(t->nodetype == LOOP && t->type == WHILE)
        {
            while_codeGen(t,ft);
            return ;
        }
        if(t->nodetype == BREAK)
        {   
            if(break_label != -1)
                fprintf(ft,"JMP L%d\n",break_label);
            return ;   
        }
        if(t->nodetype == CONTINUE)
        {
            if(continue_label != -1)
                fprintf(ft,"JMP L%d\n",continue_label);
            return ;
        }
        if(t->nodetype == BREAKPOINT)
        {
            fprintf(ft,"BRKP\n");
            return ;
        }
        if(t->nodetype == LOOP && t->type == REPEAT_UNTIL)
        {
            repeat_until_codeGen(t,ft);
            return;
        }
        if(t->nodetype == LOOP && t->type == DO_WHILE)
        {
            do_while_codeGen(t,ft);
            return;
        }
        codeGen_util(t->left, ft,break_label,continue_label);
        codeGen_util(t->right, ft,break_label,continue_label);
    }
    return ;
}
void codeGen(struct Astnode*t, FILE *ft)
{
    init_reg(); //Initialization
    allocate();
    fprintf(ft, "0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf(ft, "BRKP\n");
    fprintf(ft, "MOV SP, 4121\n");
    codeGen_util(t, ft,-1,-1);

    reg_idx tmp = getReg();

    if(tmp == -1)
        exit(1);

    fprintf(ft,"MOV R%d,\"Exit\"\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"PUSH R%d\n",tmp);
    fprintf(ft,"CALL 0\n");
    fclose(ft);
}


// ********************* Evaluation ****************************


int expression_evaluator(struct Astnode *t){
    if (t->nodetype == CONSTANT && t->type == INTEGER && t->op == NULL)
    {
        int ans = t->val;
        return ans;
    }
    if (t->nodetype == VARIABLE && t->type == INTEGER && t->varname != NULL)
    {
        int var_Addr = *(t->varname) - 'a';
        return storage[var_Addr];
    }
    else{
        switch(*(t->op)){
            case '+' : return expression_evaluator(t->left) + expression_evaluator(t->right);
                       break;
            case '-' : return expression_evaluator(t->left) - expression_evaluator(t->right);
                       break;
            case '*' : return expression_evaluator(t->left) * expression_evaluator(t->right);
                       break;
            case '/' : return expression_evaluator(t->left) / expression_evaluator(t->right);
                       break;
        }
    }
}

void assignment_evaluator(struct Astnode *t)
{
    int ans = expression_evaluator(t->right);
    int var_Addr = *(t->left->varname) - 'a';
    storage[var_Addr] = ans;
    return;
}

void write_evaluator(struct Astnode *t)
{
    int ans = expression_evaluator(t->left);
    printf("%d\n", ans);
    return;
}

void read_evaluator(struct Astnode *t)
{
    int var_Addr = *(t->left->varname) - 'a';
    scanf("%d", &storage[var_Addr]);
    return;
}

int boolean_evaluator(struct Astnode * t)
{
    int a, b;
    a = expression_evaluator(t->left);
    b = expression_evaluator(t->right);
    switch(t->type)
    {
        case LT :
            if(a < b)
                return 1;
            else
                return 0;
            break;
        case GT :
            if(a > b)
                return 1;
            else
                return 0;
            break;
        case GE :
            if(a >= b)
                return 1;
            else
                return 0;
            break;
        case LE :
            if(a <= b)
                return 1;
            else
                return 0;
            break;
        case EQ :
            if(a == b)
                return 1;
            else
                return 0;
            break;
        case NE :
            if(a != b)
                return 1;
            else
                return 0;
            break;
    }
}
void if_else_evaluator(struct Astnode *t)
{
    int res = -1;
    if(t)
    {
        if(t->left)
        {
            if(t->left->left)
                res = boolean_evaluator(t->left->left);
            if(res == -1)
            {
                printf("Not valid\n");
                exit(0);
            }

            if(res == 1)
            {
                evaluator_util(t->left->right);  
                return ; 
            }
            else
            {
                evaluator_util(t->right->left);
                return ;
            }
        }
    }   
    printf("Not valid\n");
    exit(0);
}


void evaluator_util(struct Astnode *t)
{
    // printf("%d %d\n",t->nodetype, t->type);
    if(t)
    {
        if(t->nodetype == EXPRESSION && t->type == ASSIGNMENT)
        {
            assignment_evaluator(t);
            return;
        }
        if(t->nodetype == STATEMENT && t->type == READ)
        {
            read_evaluator(t);
            return ;
        }
        if(t->nodetype == STATEMENT && t->type == WRITE)
        {
            write_evaluator(t);
            return;
        }
        if(t->nodetype == STATEMENT && t->type == IF_ELSE)
        {
            // printf("If_node\n");
            if_else_evaluator(t);
            return ;
        }
        evaluator_util(t->left);
        evaluator_util(t->right);

    }
    return;
}

void evaluator(struct Astnode *t)
{
    clear_storage();
    evaluator_util(t);
}