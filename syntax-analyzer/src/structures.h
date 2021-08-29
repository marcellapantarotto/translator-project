#ifndef STRUCTURES
#define STRUCTURES

#define BHRED "\e[1;91m"  // red
#define BHBLU "\e[1;94m"  // blue
#define reset "\e[0m"

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
    char lexeme[100];
    char type[20];
    int line;
    int column;
    // int scope;
} t_token;

// tree node
typedef struct tree_node {
  struct t_token token;
	struct tree_node *child1;
	struct tree_node *child2;
  struct tree_node *child3;
  struct tree_node *child4;
} tree_node;


table create_table();
table symbol_table;
// table *ptr_symbol_table = &symbol_table;
int id_counter;

// tree_node syntax_tree;

#endif