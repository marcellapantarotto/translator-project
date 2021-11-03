/* MARCELLA PANTAROTTO (13/0143880) */
/* PROJECT 4: TRANSLATOR */

#ifndef STRUCTURES
#define STRUCTURES

#define RED "\e[1;91m"  // red
#define BLUE "\e[1;94m"  // blue
#define MAGENTA "\e[1;95m"  // magenta
#define RESET "\e[0m"

enum rule_label {
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
  STOP_STMT,
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
  enum rule_label label;
  char type[13];
  char vfp[12];
  int params;
  char tac[10];
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
  char type[14];
  int scope;
  char tac[10];
} t_token;

// tree structure
typedef struct t_node {
  struct t_token token; //--------> value (for node = NULL; for token = terminal)
  enum rule_label label;
  char type[14];
	struct tree_node *children;
  char tac[10];
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
// PARAMETER SECTION
//===============================================================

// symbol table_node
typedef struct parameter {
  char name[31];
  char type[14];
  char function[31];
  struct parameter *next;
} parameter;

// symbol table (pointers to beginning and end)
typedef struct parameter_list {
  struct parameter *beginning;
  struct parameter *final;
} parameter_list;


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
t_node *create_node(int label);
void add_tree_node(t_node *root, t_node *node);
t_node *token_to_node(t_token *t, int label);
void add_tree_token_node(t_node *root, t_token *tok, int label);
void add_tree_operation_leaf(t_node *root, t_token *tok, int label, char *type);
void print_ast(t_node *root, int height);
void print_ast_tree();
void destroy_tree(t_node *root);

int find_main();
char *get_type(t_node *node, int i);
int get_amount_params(t_node *node, char *function);
void set_amount_params(char *func, int x);
int verify_amount_params(t_token *func);
int get_num_params_table(t_token *func);
void set_F_table(t_node *node);
void set_P_table(t_node *node);
void set_V_table();
char *verify_existing_variable(t_token *tok);
char *verify_existing_function(t_token *tok);

void print_annotated(t_node *root, int height);
void print_annotated_tree();
char *type_check_num(t_node *node1, t_node *node2, t_token *op_node);
char *type_check_id(t_token *token, t_node *node, int op);
int is_variable(t_node *node);
char *return_var_type_from_table(t_node *node);
void set_type_node(t_node *root, t_node *node);
parameter *find_param(char *type);
void remove_param_from_list(t_node *node);
parameter_list create_params_list();

void strip_ext(char *fname);
char *get_type_table(t_node *node);

void strip_ext(char *fname);
void build_tac();
char *get_tac_name(char *lexeme);
void add_variables_tac(t_token *id);
char *create_temp_4op(t_node *op);
char *create_temp_4string(t_token *s);
void print_params_tac(t_node *node);
void print_assign_tac(t_node *id, t_node *op, char *temp);
char *add_parameter_tac(t_token *id);

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
extern int params_counter2;
extern int calling_params_counter;
extern char func_name[];
extern char curr_type[];
extern char return_type[];
extern char return_type_function[];
extern char param_type[];
extern parameter_list param_lst;
extern int id;
extern int id2;
extern FILE *tac_table;
extern FILE *tac_commands;
extern FILE *tac_file;
extern int tac_counter;
extern int temp_counter;
extern char *temp;
extern char *temp_string;
extern int temp_string_counter;
extern int tac_params_counter;
extern int tac_params_counter2;


#endif