#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structures.h"

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

// t_token new_token() {
//   struct t_token *t = (struct tree*)malloc(sizeof(t_token));
//   t->line = 0;
//   t->column = 0;
//   strcpy(t->lexeme, "");
//   // t->scope = 0;
// }

t_token create_token(t_token *t) {
  struct t_token *token = (struct t_token*)malloc(sizeof(t_token));
  strcpy(token->lexeme, t->lexeme);
  token->line = t->line;
  token->column = t->column;
  strcpy(token->lexeme, t->lexeme);
  // token->scope = t->scope;
  return *token;
}

// create new node in tree with the token that is bening passed
t_node create_node(t_node *t, int type) {
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  node->token = create_token(NULL);
  node->type = type;
  node->children = NULL;
  return *node;
}

// add tree node
t_node add_tree_node(t_node *root, t_node *node) {
  struct tree_node *n = (struct tree_node*)malloc(sizeof(tree_node));
  n->child = node;
  n->sibilings = NULL;

  if(root->children == NULL) {
    root->children = n;
  } else {
    tree_node *youngest = root->children;
    while(youngest->sibilings) {
      youngest = youngest->sibilings;
      youngest->sibilings = n;
    } 
  }
  // if(t < node->token) {
  //   node->left = add_tree_node(t, node->left);
  // } else {
  //   if(t > node-> token) {
  //     node->right = add_tree_node(t, node->right);
  //   }
  // }
  return *node;
}

// create new node in tree with the token that is bening passed
t_node create_token_node(t_token *t, int type) {
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  node->token = create_token(t);
  node->type = type;
  node->children = NULL;
  return *node;
}

// add tree node that is a token
t_node add_tree_token_node(t_node *root, t_token *tok, int type) {
  // tok->lexeme;
  // tok->line;
  // tok->column;
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  *node = create_token_node(tok, type);
  add_tree_node(root, node);
  return *node;
}


// // print tree
void print_tree(t_node *root, int height) {
  printf("\nABSTRACT TREE:\n");
  for (int i = 0; i < height; i++) {
    printf("%d\n", root->type);
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
