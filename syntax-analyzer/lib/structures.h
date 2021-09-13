#ifndef STRUCTURES
#define STRUCTURES

#define BHRED "\e[1;91m"  // red
#define BHBLU "\e[1;94m"  // blue
#define reset "\e[0m"

enum rule_type {
  PROGRAM,
  LIST_OF_DECLARATIONS,
  DECLARATION,
  VARIABLE_DECLARATION,
  FUNCTION_DECLARATION,
  COMMAND,
  UNIQUE_DECLARATION,
  LIST_OF_PARAMETERS,
  BLOCK_OF_COMMANDS,
  TYPE,
  PARAMETER,
  EXPRESSION,
  ASSIGN_STMT,
  CONDITIONAL_STMT,
  RETURN_STMT,
  ITERATION_PROCESS,
  INPUT_OPERATION,
  OUTPUT_OPERATION,
  FUNCTION_CALLING,
  STATEMENT,
  LOOP_CONDITION,
  INITIALIZATION_STMT,
  UPDATE_STMT,
  OPERATION,
  LOGIC_OPERATOR,
  RELATIONAL_OPERATOR,
  ARITHMETIC_OPERATOR,
  LIST_OPERATOR,
  NUMBER,
  IDENTIFIER,
  NUMBER_INT,
  NUMBER_FLOAT,
  NIL,
  STRING_STMT,
  TYPE_INT,
  TYPE_FLOAT,
  TYPE_LIST,
  AND_OP,
  OR_OP,
  GT_OP,
  GE_OP,
  LT_OP,
  LE_OP,
  EQ_OP,
  NE_OP,
  ADD_OP,
  MINUS_OP,
  MULTIPLY_OP,
  DIVISION_OP,
  CONSTRUCTOR_OP,
  HEAD_OP,
  POP_OP,
  MAP_OP,
  FILTER_OP,
  NOT_OR_TAIL,
  COMMA,
  SEMICOLON,
  OPEN_PARENTHESES,
  CLOSE_PARENTHESES,
  OPEN_CURLY_BRACKET,
  CLOSE_CURLY_BRACKET,
  SYMBOL,
  ROOT,
  S_OPERATION,
  B_OPERATION,
  TYPE_LST,
  CONSTANT,
  ARITHMETIC_SINGLE,
  ARITHMETIC_BINARY,
  LIST_SINGLE,
  LIST_BINARY,
  WRITE,
  WRITELN,
  READ,
  ASSIGN,
  IF,
  ELSE,
  RETURN,
  FOR,
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
  // int scope;
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
// SCOPE THINGS
//===============================================================

typedef struct t_scope_node {
  struct t_scope_node *parent;
  int scope_number;
} t_scope_node;

//===============================================================
// FUNCTION DECLATARIONS
//===============================================================

void show_error();
void total_lexical_errors();
table create_table();
void add_table_node(char *tok);
void print_table();
void destroy_table();
// void print_token();
// void print_node();
// void print_children();
t_token null_token();
t_token create_token(t_token *t);
t_node create_node(t_node *t, int type);
t_node add_tree_node(t_node *root, t_node *node);
t_node token_to_node(t_token *t, int type);
t_node add_tree_token_node(t_node *root, t_token *tok, int type);
void print_tree(t_node *root, int height);
table_node *verify_existing_symbol(table_node *symbol);
void increment_scope();
void decrement_scope();

//===============================================================
// VARIABLE DECLARATIONS
//===============================================================

extern int column;
extern int errors;
extern table symbol_table;
// table *ptr_symbol_table = &symbol_table;
extern int id_counter;
extern int g_scope;
extern int scope_counter;
extern t_scope_node *root_scope_tree;
extern t_scope_node *scope_node_curr;

#endif