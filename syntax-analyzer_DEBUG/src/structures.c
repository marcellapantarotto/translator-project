#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/structures.h"

int column;
int errors;
table symbol_table;
int id_counter;
int g_scope = 0;
int scope_counter = 0;
t_scope_node *root_scope_tree;
t_scope_node *scope_node_curr;

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
  "STATEMENT",
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
  "BINARY_OPERATION",
  "SINGLE_OPERATION",
  "ARITHMETIC_BINARY",
  "ARITHMETIC_SINGLE",
  "+",
  "-",
  "*",
  "/",
  "LIST_BINARY",
  "LIST_SINGLE",
  "!",
  ":",
  "?",
  "%",
  ">>",
  "<<",
  "LOGIC_OPERATOR",
  "&&",
  "||",
  "RELATIONAL_OPERATOR",
  ">",
  ">=",
  "<",
  "<=",
  "==",
  "!=",
  ",",
  ";",
  "(",
  ")",
  "{",
  "}",
};

//===============================================================
// DEBUG SECTION
//===============================================================

void print_token(t_token *t) {
  printf("(Token ");
  printf("lexeme: %s; ", t->lexeme);
  printf("line: %d; ", t->line);
  printf("column: %d;) ", t->column);
}

void print_node(t_node *n) {
  printf("(Node ");
  print_token(&n->token);
  printf("type: %s ",  rule_label[n->type]);
  // printf("(CHILDREN ");
  // print_children(n->children);
  // print_node(n->children->child);
  printf(")\n");
}

void print_children(tree_node *c) {
  printf("child: ");
  print_node(c->child);
  printf(";");

  // tree_node *aux;
  // printf("(sibilings: ");
  // while (c->sibilings != NULL) {
  //   aux = c->sibilings;
  //   print_children(aux);
  // }
  
  // print_children(c->sibilings);
  printf(")\n");

  // table_node *aux = symbol_table.beginning;
  // while(aux->next != NULL) {
  //   aux = aux->next;
  //   printf("  %d\t|  %-15s\t\t|  %d\n", aux->id, aux->token, aux->scope);
  // }
}

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
  return;
  g_scope = scope_node_curr->parent->scope_number;
  t_scope_node *temp = scope_node_curr;
  scope_node_curr = scope_node_curr->parent;
  free(temp);
}

// print symbol table
void print_table() {
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    printf("  %d\t|  %-15s\t\t|  %d\n", aux->id, aux->token, aux->scope);
  }
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

// print total number of lexical errors
void total_lexical_errors() {
  printf(BHRED "\nTotal number of lexical errors: %d \n\n" reset, errors);
}

//===============================================================
// TREE SECTION
//===============================================================

// creating empty token
t_token null_token() {
  struct t_token *t = (struct t_token*)malloc(sizeof(t_token));
  t->line = -1;
  t->column = -1;
  strcpy(t->lexeme, "");
  // t->scope = -1;
  return *t;
}

// creating token
t_token create_token(t_token *t) {
  printf("CREATE TOKEN: ");
  struct t_token *token = (struct t_token*)malloc(sizeof(t_token));
  strcpy(token->lexeme, t->lexeme);
  token->line = t->line;
  token->column = t->column;
  strcpy(token->lexeme, t->lexeme);
  // token->scope = t->scope;
  print_token(token);
  return *token;
}

// create new node in tree with the token that is bening passed
t_node create_node(t_node *t, int type) {
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  // node = t;
  node->token = null_token(NULL);
  node->type = type;
  node->children = NULL;
  // printf("CREATE NODE: ");
  // print_node(node);
  return *node;
}

// add node to the tree
t_node add_tree_node(t_node *root, t_node *node) {
  // if (!node) {
  //   *node = create_node(node, type);
  // }
  struct tree_node *aux = (struct tree_node*)malloc(sizeof(tree_node));
  aux->child = node;
  aux->sibilings = NULL;

  if(root->children == NULL) {
    root->children = aux;   // node
  } else {
    tree_node *youngest = root->children;
    
    while(youngest->sibilings) {
      youngest = youngest->sibilings;
    }
    youngest->sibilings = aux; // node
  }
  
  // printf("add_tree_node: ");
  // print_node(node);
  return *node;
}

// converting token into node so it can be added to the tree
t_node token_to_node(t_token *t, int type) {
  // printf("token_to_node: ");
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  node->token = *t;
  node->type = type;
  node->children = NULL;
  // print_node(node);
  return *node;
}

// add a token (converted into node) to the tree
t_node add_tree_token_node(t_node *root, t_token *tok, int type) {
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  *node = token_to_node(tok, type);
  add_tree_node(root, node);

  // printf("ADD TOKEN TO TREE: ");
  // printf("token added as node: ");
  // print_node(node);
  return *node;
}

// print whole tree
void print_tree(t_node *root, int height) {
  int i;
  for(i = 0; i < height-1; i++) {
    printf(".");
  }
  printf(". %s\n", rule_label[root->type]);

  tree_node *curr = root->children;
  while(curr != NULL) {
    print_tree(curr->child, height+1);
    curr = curr->sibilings;
  }
  
  if(root->children != NULL) {
    for(i = 0; i < height-1; i++) {
      printf(".");
    }
    printf("\n");
  }
}