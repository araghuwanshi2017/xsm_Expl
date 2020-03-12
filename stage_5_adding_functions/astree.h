#define GT 15
#define LT 16
#define GE 17
#define LE 18
#define NE 19
#define EQ 20
#define IF 21
#define MUL 9
#define MOD 31
#define PLUS 7
#define DIV 10
#define INPUT 4
#define MINUS 8
#define READ 13
#define ELSE 22
#define LOOP 29
#define NONE 33	
#define OUTPUT 5
#define WRITE 14
#define WHILE 25
#define BREAK 26
#define PROGRAM 0
#define STRING 30
#define VARIABLE 3
#define INTEGER 12
#define IF_ELSE 23
#define BOOLEAN 24
#define STATEMENT 1
#define CONSTANT 11
#define CONTINUE 28
#define DO_WHILE 29
#define RESERVED 30
#define FUNCTION 34	
#define EXPRESSION 2
#define ASSIGNMENT 6
#define BREAKPOINT 27
#define REPEAT_UNTIL 28
#define ARRAY_VARIABLE 31
#define FUNCT_VARIABLE 32	

//35


#define f(a, b) for(int i = a;i < b;i++)

//********************************** Global_Symbol_Table **********************************
typedef struct Gsymbol {
	int type;              	 	 //type of the variable
	int size;            	    //size of the type of the variable
	int flabel;                //label for identifying the starting address of a function's code
	int binding;         	  //stores the static memory address allocated to the variable
	int nodetype;          	 //type of the node
	char *varname;          //name of the variable
	struct Pmtr * PList;   //Stores the List of Parameter's Passed in a function 
	struct Gsymbol *next; //Pointer to the next node in the symbol table 
	struct Lsymbol *LST_entry; //If it's a function Entry in GST then we will have a entry for function decl and body
}Gsymbol;

// ******

//************************** Structure of Abstract_Syntax_Tree ************************* 
typedef struct Astnode {
 int val;               //value of that node
 int type;             //type of that node
 char *op;            //indicates the opertor of the node
 int nodetype;       //eg(VARIABLE,CONSTANT);
 // char *node_name //In case of parent having expression or statements nodes
 char *varname;    //Indicates the variable name
 struct Gsymbol * GST_entry;   //Entry of the symbol table for the node
 struct Astnode *left,*right; //Left and Right Children's
 }Astnode;

// *****

 // ********************** Structure of Parameter list of function ****************** 
typedef struct Pmtr {
	int type;
	char *varname;
	struct Pmtr *next; 
}Pmtr;

// *****

//********************************** Local_Symbol_Table **********************************
typedef struct Lsymbol {
	int type;
	int binding;
	char *varname; 
	struct Lsymbol *next;
}Lsymbol; 

// *****

//Make a node of variables in the declaration section of the function to change the type of variables declared
struct Lsymbol *makeFunctDeclNode(int, struct Lsymbol *, struct Lsymbol *, char *);
//To assign the type to function's declared variable
struct Lsymbol *LST_typechange(struct Lsymbol *, struct Lsymbol *, int);
//To find the lst_entry in the Local_Symbol_Table
struct Lsymbol *find_lst_entry(struct Lsymbol *, char *);

//Creates a node of paramter passing in a funtion
struct Pmtr *init_pnode(int, char *);
//To chk whether the variable present or not in GST
struct Pmtr *PLookup(struct Pmtr *, char *);
//To Install a new parameter in the List
struct Pmtr *install_Pnode(struct Pmtr *, struct Pmtr *);	


//Creates a node for symbol table
struct Gsymbol *init_node(int, int, int, char*);
// Returns a pointer to the symbol table entry for the variable, returns NULL otherwise. 
struct Gsymbol *Lookup(struct Gsymbol *, char *);
// Creates a symbol table entry.
struct Gsymbol *installID(struct Gsymbol*, int, struct Gsymbol *); 
//To assign the type of a variable
struct Gsymbol *GST_typechange(struct Astnode *, struct Gsymbol *,int ,char *);

struct Gsymbol* GSTroot;



// For allocating binding_address
int allocate(int);
// for Allocating labels in code_Generation
int getLabel();	
//To get the address of an array or a variable
int get_Address(FILE*, struct Astnode *);
// to create a node of break , continue  and breakpoint  
struct Astnode* makeBCBPNode(int, int, char *);
//If a variable is identified make a node of it
struct Astnode* makeVariableLeafNode(int, int, char *);
//For any function definition/calling
struct Astnode* makeFunctNode(int, int, char *varname);
// If any string is identified make a node of it
struct Astnode *makeConstantStringLeafNode(int, int, char *);
// If a number is identified make a node of it
struct Astnode* makeConstantLeafNode(int, int, int);
// To change the type of a variable
struct Astnode* AST_typechange(struct Gsymbol*, struct Astnode *, int);
// Statements nodes like write,  read, if-else-if statements , while, do_while, repeat_until;   
struct Astnode* makeStatementNode(int, int, struct Astnode *, struct Astnode *, char *);
//f any array elemen tis identified make a node of it
struct Astnode *makeArrayVariableNode(int, int, struct Astnode*, struct Astnode*, char *);
// nodes for the expression plus, minus, div, mul, assignment 
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


// ********************** Code_Generation *************************

reg_idx expression_codeGen(struct Astnode*, FILE *);
int assignment_codeGen(struct Astnode*, FILE *);
int read_codeGen(struct Astnode*, FILE *);
int write_codeGen(struct Astnode*, FILE *);
void codeGen_util(struct Astnode*, FILE*, int, int);
void codeGen(struct Astnode*, FILE*);
void print(struct Astnode*);
void if_else_codeGen(struct Astnode*, FILE*,int,int);
void while_codeGen(struct Astnode*, FILE*);

// ******

// ********************** Evaluator *************************
int expression_evaluator(struct Astnode *);
void assignment_evaluator(struct Astnode *);
void read_evaluator(struct Astnode *);
void write_evaluator(struct Astnode *);
void evaluator_util(struct Astnode *);
void evaluator(struct Astnode *);
void if_else_evaluator(struct Astnode *t);

// *****




