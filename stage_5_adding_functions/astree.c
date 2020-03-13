// *** Declaring an array of keywords
char * Keywords[21] = {"main", "decl", "enddecl", "begin", "end", "do", "while", "repeat", "until", "break", "continue", "breakpoint", "if", "else", "then", "endif", "endwhile", "int", "str","read", "write"};

//**************************** Global_Declaration ******************************
int LABEL = -1;
int FLABEL = -1;
int ADDR = 4096;

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

int get_func_label()
{
    int a = ++FLABEL;
    return a;
}

void print_type(struct Astnode *root)
{
    if(root)
    {
        if(root->nodetype == VARIABLE)
        {
            printf("Node_type Variable and Type ");
            if(root->type == INTEGER)
                printf("int\n");
            else if(root->type == STRING)
                printf("str\n");
                
        }
        else if(root->nodetype == ARRAY_VARIABLE)
        {
            printf("Node_type Array Variable and Type ");
            if(root->type == INTEGER)
                printf("int\n");
            else if (root->type == STRING)
                printf("str\n");
        }
        else if(root->nodetype == FUNCT_VARIABLE)
        {
            printf("Node_type Function Variable and Type ");
            if(root->type == INTEGER)
                printf("int\n");
            else if(root->type == STRING)
                printf("str\n");
        }
    }
    return ;
}
void print(struct Astnode * root)
{
    print_type(root);
    if(root)
    {
        print(root->left);
        // if(root->left && root->left->nodetype == VARIABLE){
        //     printf("%s ",root->left->s);
        //     print_GST(root->left->GST_entry);
        // }
        printf("%s\n",root->varname);
        print(root->right);
        // if(root->right && root->right->nodetype == VARIABLE)
        // {
        //     printf("%s ",root->right->s);
        //     print_GST(root->right->GST_entry);
        // }
    }
    return ;
}

struct Astnode * init(struct Astnode *temp, int len)
{
    temp = (struct Astnode*)malloc(sizeof(struct Astnode));
    temp->op = malloc(sizeof(char));
    temp->varname = (char *)malloc(len*sizeof(char));

    temp->val = 0;
    temp->op = NULL;
    temp->type = -1;
    temp->left = NULL;
    temp->right = NULL;
    temp->varname = "";
    temp->nodetype = -1;
    temp->GST_entry = NULL;
}
struct Astnode* makeVariableLeafNode(int type, int nodetype, char *varname)
{
    struct Astnode *temp = init(temp, strlen(varname));

    temp->type = type;
    temp->nodetype = nodetype;
    temp->varname = strdup(varname);

    return temp;
}

struct Astnode* makeConstantLeafNode(int type, int nodetype, int val, char *varname){
    struct Astnode *temp = init(temp, 0);

    temp->val = val;
    temp->type = type;
    temp->varname = varname;
    temp->nodetype = nodetype;

    return temp;
}

struct Astnode* makeConstantStringLeafNode(int type, int nodetype, char *varname){
    struct Astnode *temp = init(temp, strlen(varname));

    temp->type = type;
    temp->varname = varname;
    temp->nodetype = nodetype;

    return temp;
}

struct Astnode* makeStatementNode(int type, int nodetype, struct Astnode *l,struct Astnode *r, char *node_name){
    struct Astnode *temp = init(temp, strlen(node_name));

    temp->left = l;
    temp->right = r;
    temp->type = type;
    temp->varname = node_name;
    temp->nodetype = nodetype;

    return temp;
}

struct Astnode* makeExpressionNode(int type, int nodetype, char op, struct Astnode* l, struct Astnode* r, char *varname){
    struct Astnode *temp = init(temp, strlen(varname));


    temp->left = l;
    temp->right = r;
    *(temp->op) = op;
    temp->type = type;
    temp->varname = varname;
    temp->nodetype = nodetype;

    return temp;
}

struct Astnode* makeArrayVariableNode(int type, int nodetype , struct Astnode * l, struct Astnode *r, char *varname)
{
    struct Astnode *temp = init(temp, strlen(varname));

    temp->left = l;
    temp->right = r;
    temp->type = type;
    temp->varname = varname;
    temp->nodetype = nodetype;

    return temp;
}

struct Astnode *makeBCBPNode(int type, int nodetype, char *varname)
{
    struct Astnode *temp = init(temp, strlen(varname));

    temp->type = type;
    temp->varname = varname;
    temp->nodetype = nodetype;

    return temp;
}

// struct Lsymbol *makeFunctNode(int type, int nodetype, char *varname)
// {
//     struct Astnode *temp = init(temp, strlen(varname));

//     temp->type = type;
//     temp->varname = varname;
//     temp->nodetype = nodetype;
    
//     return temp;   
// }


// *********************** Checking for Reserved Keywords **********************
int chk_Reserved(char *keywords[], char *varname)
{
    for(int i = 0;i < 21;i++)
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
        printf("IS_NULL\n");
    while(curr != NULL){
        printf("\n%s %d %d %d",curr->varname, curr->type, curr->size, curr->binding);
        if(curr->PList)
            printf("\nParameter List for the function %s\n", curr->varname);
        struct Pmtr *tmp = curr->PList;
        while(tmp)
        {
            printf("%s %d\n",tmp->varname, tmp->type);
            tmp = tmp->next;
        }
        printf("\n");
        curr = curr->next;
    }

    return ;


}

struct Gsymbol* Lookup(struct Gsymbol* root, char * varname)
{
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

    if(!curr)
    {
        printf("error: %s variable undeclared:",varname);
        exit(1);
    }
    
    t->type = type;
    curr->type = type;
    t->GST_entry = curr;
    return root;
} 

int flag = 0;
struct Astnode* AST_typechange(struct Gsymbol* head, struct Astnode* root, int type)
{
    if(root)
    {
        root->left = AST_typechange(head, root->left, type);
        root->right = AST_typechange(head,root->right, type);

        if(root->nodetype == VARIABLE) {
            head = GST_typechange(root, head, type, root->varname);
        }
        else if(root->nodetype == ARRAY_VARIABLE) {
            head = GST_typechange(root, head, type, root->varname);
        }
        else if(root->nodetype == FUNCT_VARIABLE)
        {
            head = GST_typechange(root, head, type, root->varname);
        }
    }
    return root;
}



// ************************* Initialization of a new variable ***********************

struct Gsymbol* init_node(int type, int nodetype, int size, char * varname)
{
    struct Gsymbol * new_node;
    new_node = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
    new_node->varname = (char *)malloc(strlen(varname));

    new_node->type = type  ;
    new_node->size = size;
    new_node->nodetype = nodetype;
    new_node->varname = strdup(varname);
    if(nodetype != FUNCT_VARIABLE)
        new_node->binding = allocate(size);
    if(nodetype == FUNCT_VARIABLE)
        new_node->flabel = get_func_label();

    new_node->next = NULL;
    return new_node;
}


struct Gsymbol * installID(struct Gsymbol * root, int size, struct Gsymbol* new_node)
{

    struct Gsymbol* tmp;
    tmp = Lookup(root, new_node->varname);
    if(chk_Reserved(Keywords, new_node->varname))
    {
        printf("error :'%s' is a reserved keyword\n",new_node->varname);
        exit(1);
    }
    else if(tmp != NULL)
    {
        printf("error : '%s' redeclared as different kind of symbol\n",new_node->varname);
        exit(1);
    }
    else
    {
        struct Gsymbol *curr, *prev;
        curr = root;
        if(curr == NULL)
            root = new_node;

        else
        {
            while(curr->next != NULL)
                curr = curr->next;

            curr->next = new_node;
        }

        if(Lookup(root, new_node->varname))
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

// ********************************* ParamList Nodes ****************************** 
struct Pmtr *PLookup(struct Pmtr *head, char *varname)
{
    struct Pmtr *curr = head;
    while(curr != NULL)
    {
        if(!strcmp(curr->varname, varname))
            return curr;    
        curr = curr->next;
    } 
    return curr; 
}

struct Pmtr *init_pnode(int type, char *varname)
{
    struct Pmtr *curr;
    curr = (Pmtr *)malloc(sizeof(Pmtr));
    curr->varname = (char *)malloc(strlen(varname));

    curr->type = type;
    curr->varname = varname;
    curr->next = NULL;
}

struct Pmtr *install_Pnode(struct Pmtr * head, struct Pmtr *new_node)
{
    struct Pmtr *curr = head;

    if(chk_Reserved(Keywords, new_node->varname))
    {
        printf("error: '%s' is a reserverd keyword\n",new_node->varname);
        exit(1);
    }
    else
    {
        if(curr == NULL)
            head = new_node;

        else
        {
            while(curr->next != NULL)
                curr = curr->next;

            curr->next = new_node;    
        }
        
    }

    return head;
}

// *****

// ********************************* Local_Symbol_Table Nodes ****************************** 
void print_lst(struct Lsymbol *lst_head)
{
    struct Lsymbol *curr = lst_head;
    
    while(curr)
    {
        printf("%d %s\n",curr->type, curr->varname);
        curr = curr->next;
    } 
    return ;  
}
struct Lsymbol *init_lstnode(char *varname)
{
    struct Lsymbol *curr = (Lsymbol *)malloc(sizeof(Lsymbol));
    curr->varname = (char *)malloc(strlen(varname));

    curr->type = -1;
    curr->binding = 0;
    curr->varname = varname;
    curr->next = NULL;

    return curr;
}

struct Lsymbol *lst_lookup(struct Lsymbol * head, char *varname)
{
    struct Lsymbol *curr = head;

    while(curr)
    {
        if(!strcmp(curr->varname, varname))
            return curr;
        curr = curr->next;
    }

    return curr;
}

struct Lsymbol *install_lstnode(struct Lsymbol *head, struct Lsymbol *new_node)
{
    struct Lsymbol *curr = lst_lookup(head, new_node->varname);

    if(!chk_Reserved(Keywords, new_node->varname))
    {
        printf("error: '%s' is a reserved keyword\n",new_node->varname);
        exit(1);
    }
    else
    {
        if(curr == NULL)
            head = new_node;
        else
        {
           while(curr->next != NULL)
                curr = curr->next;

            curr->next = new_node;    
        }
    }
    return head;
}
struct Lsymbol *lst_typechange(struct Lsymbol * head, struct Lsymbol * root, int type)
{
    struct Lsymbol *curr;
    if(root)
    {
        if(!root->left && !root->right)
        {
            curr = lst_lookup(head, root->varname);
            if(!curr)
            {
                printf("Varaible undeclared in the function\n");
                exit(1);
            }
            curr->type = type;
            root->type = type;
        }
    }
    return root;
}
struct Lsymbol *update_lst(struct Lsymbol *lst_head, struct Gsymbol *gst_head, struct Astnode *var_node)
{
    char *varname = var_node->varname;
    struct Gsymbol *gst_curr = gst_head; 
    struct Lsymbol *lst_curr;

    while(gst_curr)
    {
        if(!strcmp(gst_curr->varname, varname))
            break;
        gst_curr = gst_curr->next;
    }

    if(gst_curr)
    {
        struct Pmtr *gst_curr_pmtr = gst_curr->PList;
        while(gst_curr_pmtr)
        {
            lst_curr = init_lstnode(gst_curr_pmtr->varname);

            if(!lst_lookup(lst_head, gst_curr_pmtr->varname)){
                printf("error : '%s' redeclared as different kind of symbol\n",gst_curr_pmtr->varname);
                exit(1);
            }

            lst_head = install_lstnode(lst_head, lst_curr);

            gst_curr_pmtr = gst_curr_pmtr->next;
        }
    }
    else
    {
        printf("Function undeclared\n");
        exit(1);
    }

    return lst_head;
}

struct Lsymbol *makeFunctDeclNode(int type, struct Lsymbol *l, struct Astnode *r, char * varname)
{


    struct Lsymbol *curr = init_lstnode(varname);

    curr->left = l;
    curr->right = r;
}


// *****

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

int get_Address(FILE *ft,struct Astnode * t)
{
    reg_idx tmp;
    struct Gsymbol * curr = t->GST_entry;
    if(curr == NULL)
    {
        printf("GST_Entry NULL");
        exit(1);
    }
    if(t->nodetype == ARRAY_VARIABLE)
    {
        tmp = getReg();
        fprintf(ft,"MOV R%d, %d\n",tmp,curr->binding);
        reg_idx tmp1 = expression_codeGen(t->right,ft);
        fprintf(ft,"ADD R%d, R%d\n",tmp,tmp1);
        tmp1 = freeReg();
        return tmp;
    }
    return curr->binding;
}

// ***************************** Code_Generation ****************************

reg_idx expression_codeGen(struct Astnode*t,FILE *ft)
{
    // printf("%d %d %s",t->nodetype, t->type, t->varname);
    // exit(1);
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
        int var_Addr = get_Address(ft,t);
        idx = getReg();
        if(idx == -1)
            exit(1);

        fprintf(ft,"MOV R%d, [%d]\n",idx, var_Addr);
        return idx;
    }
    if(t->nodetype == ARRAY_VARIABLE && t->type == INTEGER)
    {
        int var_Addr = get_Address(ft,t);
        idx = getReg();
        if(idx == -1)
            exit(1);

        fprintf(ft,"MOV R%d, [R%d]\n",idx,var_Addr);
        return idx;
    }
    if(t->nodetype == CONSTANT && t->type == STRING && t->op == NULL)
    {
        idx = getReg();
        if(idx == -1)
            exit(1);

        fprintf(ft,"MOV R%d, %s\n",idx, t->varname);
        return idx;
    }
    if(t->nodetype == VARIABLE && t->type == STRING && t->varname != NULL)
    {
        int var_Addr = get_Address(ft,t);
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
            case '%':
                    fprintf(ft,"MOD R%d, R%d\n",left, right);
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
        int var_Addr;
        idx = expression_codeGen(t->right, ft);
        if(t->left->nodetype == VARIABLE)
        {
            var_Addr = get_Address(ft,t->left);
            fprintf(ft,"MOV [%d], R%d\n",var_Addr,idx);
        }
        else if(t->left->nodetype == ARRAY_VARIABLE)
        {
            var_Addr = get_Address(ft,t->left);
            fprintf(ft,"MOV [R%d], R%d\n",var_Addr,idx);
            var_Addr = freeReg();
        }
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
        int var_Addr;
        reg_idx idx = getReg();
        if(t->left->nodetype == VARIABLE)
        {
            var_Addr = get_Address(ft,t->left);
            fprintf(ft, "MOV R%d,%d\n", idx, var_Addr);
        }
        else if(t->left->nodetype == ARRAY_VARIABLE)
        {
            var_Addr = get_Address(ft,t->left);
            fprintf(ft, "MOV R%d,R%d\n", idx ,var_Addr);
            var_Addr = freeReg();   
        }
        if (idx == -1)
            exit(1);
        reg_idx temp = getReg();
        if (temp == -1)
            exit(1);
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
    printf("%d\n",ADDR-1);
    init_reg(); //Initialization
    fprintf(ft, "0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf(ft, "BRKP\n");
    fprintf(ft, "MOV SP, %d\n",ADDR - 1);
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