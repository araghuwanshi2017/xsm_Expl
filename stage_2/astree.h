#define PROGRAM 0
#define STATEMENT 1
#define EXPRESSION 2
#define VARIABLE 3
#define INPUT 4
#define OUTPUT 5
#define ASSIGNMENT 6
#define PLUS 7
#define MINUS 8
#define MUL 9
#define DIV 10
#define CONSTANT 11
#define INTEGER 12
#define READ 13
#define WRITE 14
#define f(a, b) for(int i = a;i < b;i++)

typedef struct Astnode
{
 int val; //value of the expression tree
 int type;
 char *varname; //Indicates the variable name
 int nodetype;
 char *op; //indicates the opertor
 char *s;
 struct Astnode *left,*right; //left and right branches
 }Astnode;


int address[26];
int storage[26];


void allocate();	
/*Make a leaf tnode and set the value of val field*/
struct Astnode* makeVariableLeafNode(int, int, char, char *);
struct Astnode* makeConstantLeafNode(int, int, int, char *);
struct Astnode* makeStatementNode(int, int, struct Astnode *, struct Astnode *, char *);
struct Astnode* makeExpressionNode(int, int, char, struct Astnode *, struct Astnode *, char *);
struct Astnode* makeRWNodeLeafNode(int, int, struct Astnode *, char *);
	
/*Make a tnode with opertor, left and right branches set*/
// struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);
	
/*To evaluate an expression tree*/
int evaluate(struct Astnode *);
void prefix(struct Astnode *);
void postfix(struct Astnode *);

// ****************************************************************

#define reg_idx int
int reg[20];


// We have a total of 20 registers 
void init_reg(); //Initialization to 0

reg_idx getReg(); //From the total registers it returns the Ri with the smallest i 
reg_idx freeReg(); //From the used registers it frees the register Ri with largest i



reg_idx expression_codeGen(struct Astnode*, FILE *);
int assignment_codeGen(struct Astnode*, FILE *);
int read_codeGen(struct Astnode*, FILE *);
int write_codeGen(struct Astnode*, FILE *);
void codeGen_util(struct Astnode*, FILE*);
void codeGen(struct Astnode*, FILE*);
void print(struct Astnode*);

int expression_evaluator(struct Astnode *);
void assignment_evaluator(struct Astnode *);
void read_evaluator(struct Astnode *);
void write_evaluator(struct Astnode *);
void evaluator_util(struct Astnode *);
void evaluator(struct Astnode *);




