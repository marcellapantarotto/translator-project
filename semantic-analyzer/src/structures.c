#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/structures.h"

extern int yylineno;
int column;
int lexical_errors = 0;
int syntax_errors = 0;
int semantic_errors = 0;
table symbol_table;
int id_counter;
int g_scope = 0;
int scope_counter = 0;
t_scope_node *root_scope_tree;
t_scope_node *scope_node_curr;
t_node *root;

const char *rule_label[] = {
  "PROGRAM",
  "LIST_DECLARATIONS",
  "DECLARATION",
  "FUNCTION_DECLARATION",
  "PARAMETERS",
  "LIST_PARAMETERS",
  "FUNCTION_CALLING",
  "CALLING_PARAMETERS",
  "LIST_CALLING_PARAMETERS",
  "BLOCK_COMMANDS",
  "COMMAND",
  "VARIABLE_DECLARATION",
  "UNIQUE_DECLARATION",
  "INIT_VARIABLE",
  "INIT_STMT",
  "CONDITIONAL_STMT",
  "IF",
  "ELSE",
  "RETURN_STMT",
  "RETURN",
  "ITERATION_PROCESS",
  "FOR",
  "INPUT_OPERATION",
  "READ",
  "OUTPUT_OPERATION",
  "WRITE",
  "WRITELN",
  "LOOP_CONDITION",
  "UPDATE_STMT",
  "EXPRESSION",
  "CONSTANT",
  "NUMBER",
  "IDENTIFIER",
  "NIL",
  "NUMBER_INT",
  "NUMBER_FLOAT",
  "STRING_STMT",
  "TYPE",
  "TYPE_LIST",
  "LIST",
  "TYPE_NUMBER",
  "INT",
  "FLOAT",
  "OPERATION",
  "SINGLE_OPERATION",
  "ARITHMETIC_BINARY",
  "ARITHMETIC_SINGLE",
  "ADD",
  "MINUS",
  "MULTIPLY",
  "DIVISION",
  "LIST_BINARY",
  "LIST_SINGLE",
  "NOT_OR_TAIL",
  "CONSTRUCTOR",
  "HEAD",
  "POP",
  "MAP",
  "FILTER",
  "LOGIC_OPERATOR",
  "AND",
  "OR",
  "RELATIONAL_OPERATOR",
  "GREATER_THEN",
  "GREATER_EQUAL",
  "LESS_THEN",
  "LESS_EQUAL",
  "EQUAL",
  "NOT_EQUAL",
  "COMMA",
  "SEMICOLON",
  "OPEN_PARENTHESES",
  "CLOSE_PARENTHESES",
  "OPEN_CURLY_BRACKET",
  "CLOSE_CURLY_BRACKET",
  "ASSIGN",
};

//===============================================================
// DEBUG SECTION
//===============================================================

void print_token(t_token *t) {
  printf("(Token ");
  printf("lexeme: %s; ", t->lexeme);
  printf("line: %d; ", t->line);
  printf("column: %d; ", t->column);
  // printf("scope: %d;)", t->scope);
}

void print_node(t_node *n) {
  printf("(Node ");
  print_token(&n->token);
  printf("type: %s ",  rule_label[n->type]);
  // printf("(CHILDREN ");
  // print_children(n->children);
  printf(")\n");
}

// void print_children(tree_node *c) {
//   printf("child: ");
//   print_node(c->child);
//   printf(";");
//   tree_node *aux;
//   printf("(sibilings: ");
//   while (c->sibilings != NULL) {
//     aux = c->sibilings;
//     print_node(aux->child);
//   }
//   printf(")\n");
// }

//===============================================================
// SYMBOL TABLE SECTION
//===============================================================

// create symbol table
table create_table() {
  table t;
  t.beginning = (table_node*)malloc(sizeof(table_node));
  t.beginning->id = 0;
  strcpy(t.beginning->token,"");
  t.beginning->next = NULL;
  t.final = t.beginning;
  return t;
}

// add node to symbol table
void add_table_node(char *tok) {
  table_node *node = (table_node*) malloc(sizeof(table_node));
  node->id = id_counter;
  strcpy(node->token,tok);
  node->next = NULL;
  node->scope = g_scope;
  node->line = yylineno;
  node->column = column;
  
  table_node *x = verify_existing_symbol(node);
  if (x == NULL) {
    symbol_table.final->next = node;
    symbol_table.final = node;
    id_counter++;
  }
}

// verifies if symbol with same scope already exists in symbol table
table_node *verify_existing_symbol(table_node *symbol){
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    if(strcmp(symbol->token, aux->token) == 0 && symbol->scope == aux->scope) {
      return aux;
    }
  }
  return NULL;
}

// increments scope of symbols
void increment_scope()  {
  scope_counter += 1;
  g_scope = scope_counter;
  t_scope_node *temp = (t_scope_node*) malloc(sizeof(t_scope_node));
  temp->scope_number = g_scope;
  temp->parent = scope_node_curr;
  scope_node_curr = temp;
}

// decrements scope of symbols
void decrement_scope() {
  g_scope = scope_node_curr->parent->scope_number;
  t_scope_node *temp = scope_node_curr;
  scope_node_curr = scope_node_curr->parent;
  free(temp);
}

// print symbol table
void print_table() {
  table_node *aux = symbol_table.beginning;
  printf("\n\n========================================================\n");
  printf("\t\t    SYMBOL TABLE");
  printf("\n========================================================\n");
  printf(" ID  |  TOKENS\t\t\t| SCOPE | LINE | COLUMN");
  printf("\n========================================================\n");
  while(aux->next != NULL) {
    aux = aux->next;
    printf(" %-2d  |  %-15s\t\t|  %-2d\t|  %-2d  |  %d\n", aux->id, aux->token, aux->scope, aux->line, aux->column );
  }
  printf("========================================================\n\n\n");
}

// destroy symbol table
void destroy_table() {
  table_node *curr = symbol_table.beginning;
  table_node *nxt;
  while(curr->next != NULL) {
    nxt = curr->next;
    free(curr);
    curr = nxt;
  }
  free(curr);
}

//===============================================================
// ERROR SECTION
//===============================================================

// print total number of lexical errors
void total_lexical_errors() {
  printf(BHRED "\nTotal number of lexical errors: %d \n" reset, lexical_errors);
}

// print total number of syntax errors
void total_syntax_errors() {
  printf(BHRED "Total number of syntax errors: %d \n" reset, syntax_errors);
}

// print total number of semantic errors
void total_semantic_errors() {
  printf(BHRED "Total number of semantic errors: %d \n\n" reset, semantic_errors);
}

//===============================================================
// TREE SECTION
//===============================================================

// creating empty token
t_token null_token() {
  struct t_token t;
  t.line = -1;
  t.column = -1;
  strcpy(t.lexeme, "");
  // t.scope = -1;
  return t;
}

// create new node in tree with the token that is bening passed
t_node *create_node(int type) {
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  node->token = null_token();
  node->type = type;
  node->children = NULL;
  return node;
}

// add node to the tree
void add_tree_node(t_node *root, t_node *node) {
  struct tree_node *aux = (struct tree_node*)malloc(sizeof(tree_node));
  aux->child = node;
  aux->sibilings = NULL;

  if(root->children == NULL) {
    root->children = aux;   // node
  } else {
    tree_node *youngest = root->children;
    while(youngest->sibilings) {
      youngest = youngest->sibilings; // root
    }
    youngest->sibilings = aux; // node
  }
}

// converting token into node so it can be added to the tree
t_node token_to_node(t_token *t, int type) {
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  node->token = *t;
  node->type = type;
  node->children = NULL;
  return *node;
}

// add a token (converted into node) to the tree
void add_tree_token_node(t_node *root, t_token *tok, int type) {
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  *node = token_to_node(tok, type);
  add_tree_node(root, node);
}

// print tree header
void print_tree() {
  printf("\n========================================================\n");
  printf("\t\t    ABSTRACT TREE");
  printf("\n========================================================\n\n");
  print_t(root, 1);
}

// print whole tree
void print_t(t_node *root, int height) {
  int i;
  printf(" |");
  for(i = 0; i < height-1; i++) {
    printf(" |");
  }
  printf("- %s", rule_label[root->type]);

  if(root->token.line != -1) {  
    // printf("- %s", rule_label[root->type]);
    printf(": " BHBLU "%s  (line: %d, column: %d)\n" reset, root->token.lexeme, root->token.line, root->token.column);
  } else {
    printf("\n");
  }
  tree_node *curr = root->children;
  while(curr != NULL) {
    print_t(curr->child, height+1);
    curr = curr->sibilings;
  }
}

// destroy tree
void destroy_tree(t_node *root) {
  if(root == NULL) {
    return;
  }
  tree_node *curr = root->children;
  tree_node *next;
  while(curr != NULL) {
    next = curr->sibilings;
    destroy_tree(curr->child);
    free(curr);
    curr = next;
  }
  free(root);
}

//===============================================================
// SEMANTIC ERROR CHECKING
//===============================================================

void semantic_parser() {
  find_main();
}

int find_main() {
  int found = 0;
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    if(strcmp("main", aux->token) == 0) {
      found = 1;
    }
  }
  if(!found) {
    printf(BHRED "SEMANTIC ERROR: No function main! \n\n" reset);
    semantic_errors++;
    return 1;
  }
  return 0;
}

//===============================================================
// NUMBER CONVERTION
//===============================================================

// double int_to_float(t_node num1, t_node num2, char* operation) {
//   double num_float;
//   double aux1 = atof(num1.token.lexeme);
//   double aux2 = atof(num2.token.lexeme);
//   char *aux_lexeme;

//   // find a way to verify is number is floating point number
//   if (num1.type == NUMBER_INT) {
//     num_float = strtof(num1.token.lexeme, NULL);
//     return num_float;
//   } else if(num2 == aux2) {
//     num_float = strtof(num2.token.lexeme, NULL);
//     return num_float;
//   }
   
// }

// int int_to_char(int num_int, t_node node) {
//   return itoa(num_int, node.token.lexeme, 200)
// }

// float char_to_float(char *c) {}

// double float_to_int(t_node num1, t_node num2, char* operation) {
//   double num_int;
//   double aux1 = atof(num1.token.lexeme);
//   double aux2 = atof(num2.token.lexeme);
//   char *aux_lexeme;

//   // find a way to verify is number is floating point number
//   // if returns the number converted to integer and then to string
//   if (num1 == aux1) {
//     num_int = itoa(aux1, num1.token.lexeme, 200);
//     return num_int;
//   } else if(num2 == aux2) {
//     num_int = itoa(aux2, num1.token.lexeme, 200);
//     return num_int;
//   }

//   // atoll() is meant for integers.
//   printf("float value : %4.8f\n", atof(num1.token.lexeme)); 
// }


// // atof()/strtof() is for floats.
// printf("float value : %4.8f\n" ,strtof(num1.token.lexeme, NULL)); 