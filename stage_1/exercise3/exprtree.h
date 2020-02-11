
typedef struct tnode
{
 int val; //value of the expression tree
 char *op; //indicates the opertor
 struct tnode *left,*right; //left and right branches
 }tnode;
	
/*Make a leaf tnode and set the value of val field*/
struct tnode* makeLeafNode(int n);
	
/*Make a tnode with opertor, left and right branches set*/
struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);
	
/*To evaluate an expression tree*/
int evaluate(struct tnode *);
void prefix(struct tnode *);
void postfix(struct tnode *);

// ****************************************************************

#define reg_idx int
int reg[20];


// We have a total of 20 registers 
void init_reg(); //Initialization to 0

reg_idx getReg(); //From the total registers it returns the Ri with the smallest i 
reg_idx freeReg(); //From the used registers it frees the register Ri with largest i

void codeGen(struct tnode*, FILE*);
reg_idx codeGen_util(struct tnode*, FILE*);


