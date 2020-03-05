// *** Declaring an array of keywords
char * Keywords[20] = {"decl", "enddecl", "begin", "end", "do", "while", "repeat", "until", "break", "continue", "breakpoint", "if", "else", "then", "endif", "endwhile", "int", "str","read", "write"};

//**************************** Global_Declaration ******************************
int LABEL = -1;
int ADDR = 4096;


void print(struct Astnode * root)
{
    if(root)
    {
        print(root->left);
        if(root->left && root->left->nodetype == VARIABLE){
            printf("%s ",root->left->s);
            print_GST(root->left->GST_entry);
        }

        print(root->right);
        if(root->right && root->right->nodetype == VARIABLE)
        {
            printf("%s ",root->right->s);
            print_GST(root->right->GST_entry);
        }
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

// *********************** Checking for Reserved Keywords **********************
int chk_Reserved(char *keywords[], char *varname)
{
    for(int i = 0;i < 20;i++)
    {
        if(keywords[i] == varname)
            return 1;
    }
    return 0;
}

void print_GST(struct Gsymbol * root)
{

    struct Gsymbol * curr = root;
    if(curr == NULL)
        printf("asNULL\n");
    while(curr != NULL){
        printf("%s %d %d %d\n",curr->varname, curr->type, curr->size, curr->binding);
        curr = curr->next;
    }

    return ;


}

struct Gsymbol* Lookup(struct Gsymbol* root, char * varname)
{
    // printf("%s ",varname);
    // print_GST(root) ;
    struct Gsymbol * curr = root;

    while(curr != NULL)
    {
        if(!strcmp(curr->varname ,varname))
            return curr;

        curr = curr->next;
    }

    return NULL;
}

struct Gsymbol * GST_typechange(struct Astnode * t, struct Gsymbol * root, int type, char *varname)
{
    struct Gsymbol * curr = Lookup(root, varname);
    // printf("typechange %s\n",varname);

    if(!curr)
    {
        printf("error: %s variable undeclared:",varname);
        exit(1);
    }
    
    curr->type = type;
    t->GST_entry = curr;
    return root;
} 

int flag = 0;
struct Astnode* AST_typechange(struct Gsymbol* root, struct Astnode* t, int type)
{
    // if(!flag)
    // {
    //     print_GST(root);
    //     flag = 1;
    // }
    if(t)
    {
        t->left = AST_typechange(root, t->left, type);
        t->right = AST_typechange(root,t->right, type);

        if(t->nodetype == VARIABLE)
        {
            root = GST_typechange(t, root, type, t->s); 
        }
        //free(root);
    }
    return t;
}



// ************************* Initialization of a new variable ***********************

struct Gsymbol* init_node(int type, int nodetype, int size, char * varname)
{
    struct Gsymbol * new_node;
    new_node = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
    new_node->varname = (char *)malloc(strlen(varname));

    new_node->type = type  ;
    new_node->nodetype = nodetype;
    new_node->size = size;
    new_node->varname = strdup(varname);
    new_node->binding = allocate(size);
    new_node->next = NULL;
    return new_node;
}


struct Gsymbol * installID(struct Gsymbol * root, char * varname, int type, int nodetype, int size, struct Gsymbol* new_node)
{

    struct Gsymbol* tmp;
    tmp = Lookup(root, varname);
    if(chk_Reserved(Keywords, varname))
    {
        printf("%s is a reserved keyword\n",varname);
        exit(1);
    }
    else if(tmp != NULL)
    {
        printf("error : redeclaration of %s",varname);
        exit(1);
    }
    else
    {
        struct Gsymbol *curr, *prev;
        curr = root;
        if(curr == NULL)
        {
            // printf("\n%s %s\n",new_node->varname, varname);
            if(strcmp(new_node->varname , varname) == 0)
                root = new_node;

        }
        else
        {
            while(curr->next != NULL)
                curr = curr->next;

            curr->next = new_node;
        }

        if(Lookup(root, varname))
            return root;
        else
        {
            printf("Error Installing:");
            exit(1);
        }
    }   

}



// struct Astnode * update_Ast(struct Gsymbol * root, struct Astnode * t)
// {
//     if(t)
//     {
//         t->left =
//     }
// }


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


int allocate(int size)
{
    int binding_addr = ADDR;
    ADDR += size;
    return binding_addr;
}

int getLabel()
{
    int a = ++LABEL;
    return a;
}

int get_Address(struct Astnode * t)
{
    struct Gsymbol * curr = t->GST_entry;
    if(curr == NULL)
    {
        printf("NULL");
        exit(1);
    }
    return curr->binding;
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
        int var_Addr = get_Address(t);
        idx = getReg();
        if(idx == -1)
            exit(1);

        fprintf(ft,"MOV R%d, [%d]\n",idx, var_Addr);
        return idx;
    }
    if(t->nodetype == CONSTANT && t->type == STRING && t->op == NULL)
    {
        idx = getReg();
        if(idx == -1)
            exit(1);

        fprintf(ft,"MOV R%d, %s\n",idx, t->s);
        return idx;
    }
    if(t->nodetype == VARIABLE && t->type == STRING && t->varname != NULL)
    {
        int var_Addr = get_Address(t);
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
        int var_Addr = get_Address(t->left);

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
    if(t && t->left)
    {
        reg_idx idx = getReg();
        int var_Addr = get_Address(t->left);
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
    }
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
    fprintf(ft, "0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf(ft, "BRKP\n");
    fprintf(ft, "MOV SP, 4095\n");
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