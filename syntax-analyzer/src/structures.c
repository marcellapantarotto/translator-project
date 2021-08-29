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
  strcpy(token->type, t->type);
  token->line = t->line;
  token->column = t->column;
  strcpy(token->lexeme, t->lexeme);
  // token->scope = t->scope;
  return *token;
}

// create new node in tree with the token that is bening passed
tree_node *new_tree_node(t_token *t) {
  tree_node *node = (struct tree_node*)malloc(sizeof(tree_node));
  node->token = create_token(t);
  node->child1 = NULL;
  node->child2 = NULL;
  node->child3 = NULL;
  node->child4 = NULL;
  return(node);
}

// add tree node
// tree_node add_tree_node(t_token *t, tree_node *node) {
//   if(!node) {
//     new_tree_node(t);
//   }
// }

  // node->right = add_tree_node(t, node->right);

  // if(t < node->token) {
  //   node->left = add_tree_node(t, node->left);
  // } else {
  //   if(t > node-> token) {
  //     node->right = add_tree_node(t, node->right);
  //   }
  // }

//   return *node;
// };

// // print tree
// void print_tree(tree_node *t) {

// };



