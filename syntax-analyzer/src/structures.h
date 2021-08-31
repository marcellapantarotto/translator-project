#ifndef STRUCTURES
#define STRUCTURES

#define BHRED "\e[1;91m"  // red
#define BHBLU "\e[1;94m"  // blue
#define reset "\e[0m"

enum rule_type {
  INT = 0,
  FLOAT,
  LIST,
  NUMBER,
  CONSTANT_NIL,
  STRING_STMT,
  ASSIGNMENT_COMMAND,
  CONDITIONAL_COMMAND,
  INTERATION_COMMAND,
  FUNCTION_CALLING,
  RETURN_COMMAND,
  LOGICAL_OPERATOR,
  RELATIONAL_OPERATOR,
  ARITHMETIC_OPERATOR,
  LIST_OPERATOR,
  DELIMITER,
  SEMICOLON,
  PUNCTUATION,
  IDENTIFIER,
  PROGRAM,
  LST_DECLARATIONS,
  DECLARATION,
  ROOT,
};

void show_error();
void total_lexical_errors();

int add_table_node(char *tok);
void print_table();
void destroy_table();
int column;
int errors;

// symbol table node
typedef struct table_node {
  int id;
  char token[31];
  struct table_node *next;
} table_node;

// symbol table (pointers to beginning and end)
typedef struct table {
  struct table_node *beginning;
  struct table_node *final;
} table;

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


table create_table();
table symbol_table;
// table *ptr_symbol_table = &symbol_table;
int id_counter;



#endif