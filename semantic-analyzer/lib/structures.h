#ifndef STRUCTURES
#define STRUCTURES

#define BHRED "\e[1;91m"  // red
#define BHBLU "\e[1;94m"  // blue
#define reset "\e[0m"

enum rule_type {
  PROGRAM,
  LIST_DECLARATIONS,
  DECLARATION,
  FUNCTION_DECLARATION,
  PARAMETERS,
  LIST_PARAMETERS,
  FUNCTION_CALLING,
  CALLING_PARAMETERS,
  LIST_CALLING_PARAMETERS,
  BLOCK_COMMANDS,
  COMMAND,
  VARIABLE_DECLARATION,
  UNIQUE_DECLARATION,
  INIT_VARIABLE,
  INIT_STMT,
  CONDITIONAL_STMT,
  IF,
  ELSE,
  RETURN_STMT,
  RETURN,
  ITERATION_PROCESS,
  FOR,
  INPUT_OPERATION,
  READ,
  OUTPUT_OPERATION,
  WRITE,
  WRITELN,
  LOOP_CONDITION,
  UPDATE_STMT,
  EXPRESSION,
  CONSTANT,
  NUMBER,
  IDENTIFIER,
  NIL,
  NUMBER_INT,
  NUMBER_FLOAT,
  STRING_STMT,
  TYPE,
  TYPE_LIST,
  LIST,
  TYPE_NUMBER,
  INT,
  FLOAT,
  OPERATION,
  SINGLE_OPERATION,
  ARITHMETIC_BINARY,
  ARITHMETIC_SINGLE,
  ADD_OP,
  MINUS_OP,
  MULTIPLY_OP,
  DIVISION_OP,
  LIST_BINARY,
  LIST_SINGLE,
  NOT_OR_TAIL,
  CONSTRUCTOR_OP,
  HEAD_OP,
  POP_OP,
  MAP_OP,
  FILTER_OP,
  LOGIC_OPERATOR,
  AND_OP,
  OR_OP,
  RELATIONAL_OPERATOR,
  GT_OP,
  GE_OP,
  LT_OP,
  LE_OP,
  EQ_OP,
  NE_OP,
  COMMA,
  SEMICOLON,
  OPEN_PARENTHESES,
  CLOSE_PARENTHESES,
  OPEN_CURLY_BRACKET,
  CLOSE_CURLY_BRACKET,
  ASSIGN,
  TERM,
  IDEN,
};

//===============================================================
// SYMBOL TABLE SECTION
//===============================================================

// symbol table node
typedef struct table_node {
  int id;
  char token[31];
  struct table_node *next;
  int scope;
  int line;
  int column;
  enum rule_type type;
  char s_type[15];
  char vfp[10];
  int params;
} table_node;

// symbol table (pointers to beginning and end)
typedef struct table {
  struct table_node *beginning;
  struct table_node *final;
} table;

//===============================================================
// TREE SECTION
//===============================================================

// token
typedef struct t_token {
  char lexeme[200];
  int line;
  int column;
} t_token;

// tree structure
typedef struct t_node {
  struct t_token token; //--------> value (for node = NULL; for token = terminal)
  enum rule_type type;
	struct tree_node *children;
} t_node;

// tree node struct
typedef struct tree_node {
  struct t_node *child;
  struct tree_node *sibilings;
} tree_node;

//===============================================================
// SCOPE SECTION
//===============================================================

typedef struct t_scope_node {
  struct t_scope_node *parent;
  int scope_number;
} t_scope_node;

//===============================================================
// FUNCTION DECLATARIONS
//===============================================================

void print_token();
void print_node();
void print_children();

void show_error();
void total_lexical_errors();
void total_syntax_errors();
void total_semantic_errors();

table create_table();
void add_table_node(char *tok, t_node *n, int i);
int verify_existing_symbol(table_node *symbol);
void increment_scope();
void decrement_scope();
void print_table();
void destroy_table();

t_token null_token();
t_token create_token(t_token *t);
t_node *create_node(int type);
void add_tree_node(t_node *root, t_node *node);
t_node *token_to_node(t_token *t, int type);
void add_tree_token_node(t_node *root, t_token *tok, int type);
void print_t(t_node *root, int height);
void print_tree();
void destroy_tree(t_node *root);

void semantic_parser();
int find_main();
char *get_type(t_node *node, int i);
int get_amount_params(t_node *node) ;
void set_amount_params(char *func, int x);
int verify_amount_params(t_node *root, t_token *func);
void set_F_table(t_node *node);
void set_P_table(t_node *node);
void set_V_table();
int verify_existing_variable(t_token *tok);
int verify_existing_function(t_token *tok);

//===============================================================
// VARIABLE DECLARATIONS
//===============================================================

extern int column;
extern int line;
extern int lexical_errors;
extern int syntax_errors;
extern int semantic_errors;
extern table symbol_table;
extern int id_counter;
extern int g_scope;
extern int scope_counter;
extern t_scope_node *root_scope_tree;
extern t_scope_node *scope_node_curr;
extern t_node *root;
extern int idx;
extern int params_counter;
extern int calling_params_counter;
extern char func_name[];
extern char curr_type[];

#endif