#ifndef STRUCTURES
#define STRUCTURES

#define BHRED "\e[1;91m"  // red
#define BHBLU "\e[1;94m"  // blue
#define reset "\e[0m"

void show_error();
void total_lexical_errors();

int add_node(char *tok);
void print_table();
void destroy_table();
int column;
int errors;

typedef struct table_node {
  int id;
  char token[31];
  struct table_node *next;
} table_node;

typedef struct table {
  struct table_node *beginning;
  struct table_node *final;
} table;

// table create_table();
table symbol_table;
// table *ptr_symbol_table = &symbol_table;
int id_counter;

#endif