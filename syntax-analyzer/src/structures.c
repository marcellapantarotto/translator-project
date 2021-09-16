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
  printf("column: %d;)", t->column);
}

void print_node(t_node *n) {
  printf("(Node ");
  print_token(&n->token);
  printf("type: %s ",  rule_label[n->type]);
  // printf("(CHILDREN ");
  // print_children(n->children);
  printf(")\n");
}

void print_children(tree_node *c) {
  printf("child: ");
  print_node(c->child);
  printf(";");

  tree_node *aux;
  printf("(sibilings: ");
  while (c->sibilings != NULL) {
    aux = c->sibilings;
    print_node(aux->child);
  }
  printf(")\n");
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
  // return;
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
  struct t_token t;
  t.line = -1;
  t.column = -1;
  strcpy(t.lexeme, "");
  // t->scope = -1;
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

// print whole tree
void print_tree(t_node *root, int height) {
  int i;
  printf(" |");
  for(i = 0; i < height-1; i++) {
    printf(" |");
  }
  printf("- %s", rule_label[root->type]);

  if(root->token.line != -1) {
    printf(": " BHBLU "%s  (line: %d, column: %d)\n" reset, root->token.lexeme, root->token.line, root->token.column);
  } else {
    printf("\n");
  }

  tree_node *curr = root->children;
  while(curr != NULL) {
    print_tree(curr->child, height+1);
    curr = curr->sibilings;
  }
}

// destroy tree
void destroy_tree(t_node *root) {
  if(root == NULL) {
    return;
  }
  tree_node *curr = root->children;
  while(curr != NULL) {
    destroy_tree(curr->child);
    curr = curr->sibilings;
  }
  free(root->children);
  free(root);
}