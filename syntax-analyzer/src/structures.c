#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structures.h"

const char *rule_label[] = {
  "INT",
  "FLOAT",
  "LIST",
  "CONSTANT_NUMBER",
  "CONSTANT_NIL",
  "STRING_STMT",
  "ASSIGNMENT_COMMAND",
  "CONDITIONAL_COMMAND",
  "INTERATION_COMMAND",
  "FUNCTION_CALLING",
  "RETURN_COMMAND",
  "LOGICAL_OPERATOR",
  "RELATIONAL_OPERATOR",
  "ARITHMETIC_OPERATOR",
  "LIST_OPERATOR",
  "DELIMITER",
  "SEMICOLON",
  "PUNCTUATION",
  "IDENTIFIER",
  "PROGRAM",
  "LST_DECLARATIONS",
  "DECLARATION",
};


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
int add_table_node(char *tok) {
  table_node *node = (table_node*) malloc(sizeof(table_node));
  node->id = id_counter;
  strcpy(node->token,tok);
  node->next = NULL;

  symbol_table.final->next = node;
  symbol_table.final = node;

  id_counter++;

  return id_counter;
}

// print symbol table
void print_table() {
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    printf("%d  |  %s\n", aux->id, aux->token);
  }
}

// destrou symbol table
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

void total_lexical_errors() {
  printf(BHRED "\nTotal number of lexical errors: %d \n\n" reset, errors);
}

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
  printf("type: %d; ", n->type);
  // printf("(CHILDREN ");
  // print_children(n->children);
  printf(")\n");
}

void print_children(tree_node *c) {
  print_node(c->child);
  printf("(sibilings: ");
  print_children(c->sibilings);
  printf(")\n");
}

//=======================

// creating empty token
t_token null_token() {
  struct t_token *t = (struct t_token*)malloc(sizeof(t_token));
  t->line = -1;
  t->column = -1;
  strcpy(t->lexeme, "");
  // t->scope = -1;
  return *t;
}


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
  printf("CREATE NODE: ");
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  node = t;
  node->token = null_token(NULL);
  node->type = type;
  node->children = NULL;
  print_node(node);
  return *node;
}

// add tree node
t_node add_tree_node(t_node *root, t_node *node) {
  struct tree_node *aux = (struct tree_node*)malloc(sizeof(tree_node));
  aux->child = node;
  aux->sibilings = NULL;

  if(root->children == NULL) {
    root->children = aux;
  } else {
    tree_node *youngest = root->children;
    
    while(youngest->sibilings) {
      youngest = youngest->sibilings;
      youngest->sibilings = aux;
    } 
  }

  printf("add_tree_node: ");
  print_node(node);
  return *node;
}

// converting token into node so it can be added to the tree
t_node token_to_node(t_token *t, int type) {
  printf("token_to_node: ");
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  node->token = *t;
  node->type = type;
  node->children = NULL;
  print_node(node);
  return *node;
}

// add tree node that is a token
t_node add_tree_token_node(t_node *root, t_token *tok, int type) {
  // tok->lexeme;
  // tok->line;
  // tok->column;
  printf("ADD TREE TOKEN NODE: ");

  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  *node = token_to_node(tok, type);

  add_tree_node(root, node);
  print_node(node);
  return *node;
}


// // print tree
void print_tree(t_node *root, int height) {
  for (int i = 0; i < height; i++) {
    printf(".%s\n", rule_label[root->type]);
  }
  
  tree_node *curr = root->children;
  while(curr != NULL) {
    print_tree(curr->child, height++);
    curr = curr->sibilings;
  } 

  if(root->children != NULL) {
    for (int i = 0; i < height-1; i++) {
      printf("...");
    }
    printf("\n");
  }
}
