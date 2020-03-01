#define GT 15
#define LT 16
#define GE 17
#define LE 18
#define NE 19
#define EQ 20
#define IF 21
#define MUL 9
#define PLUS 7
#define DIV 10
#define INPUT 4
#define MINUS 8
#define READ 13
#define ELSE 22
#define LOOP 29
#define OUTPUT 5
#define WRITE 14
#define WHILE 25
#define BREAK 26
#define PROGRAM 0
#define VARIABLE 3
#define INTEGER 12
#define IF_ELSE 23
#define BOOLEAN 24
#define STATEMENT 1
#define CONSTANT 11
#define CONTINUE 28
#define EXPRESSION 2
#define ASSIGNMENT 6
#define BREAKPOINT 27
#define REPEAT_UNTIL 28
#define DO_WHILE 29




#define f(a, b) for(int i = a;i < b;i++)

typedef struct Astnode
{
 int val;   //value of the expression tree
 int type; //type of the variable
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
struct Astnode* makeBCBPNode(int, int, char *);
struct Astnode* makeStatementNode(int, int, struct Astnode *, struct Astnode *, char *);
struct Astnode* makeExpressionNode(int, int, char, struct Astnode *, struct Astnode *, char *);
	
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
void codeGen_util(struct Astnode*, FILE*,int,int);
void codeGen(struct Astnode*, FILE*);
void print(struct Astnode*);
void if_else_codeGen(struct Astnode*, FILE*,int,int);
void while_codeGen(struct Astnode*, FILE*);


// ********************** Evaluator *************************
int expression_evaluator(struct Astnode *);
void assignment_evaluator(struct Astnode *);
void read_evaluator(struct Astnode *);
void write_evaluator(struct Astnode *);
void evaluator_util(struct Astnode *);
void evaluator(struct Astnode *);
void if_else_evaluator(struct Astnode *t);





