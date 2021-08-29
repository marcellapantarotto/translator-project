#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structures.h"

table create_table() {
  table t;

  t.beginning = (table_node*)malloc(sizeof(table_node));
  t.beginning->id = 0;
  strcpy(t.beginning->token,"");
  t.beginning->next = NULL;

  t.final = t.beginning;

  return t;
}

int add_node(char *tok) {
  table_node *node = (table_node*) malloc(sizeof(table_node));
  node->id = id_counter;
  strcpy(node->token,tok);
  node->next = NULL;

  symbol_table.final->next = node;
  symbol_table.final = node;

  id_counter++;

  return id_counter;
}

void print_table() {
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    printf("%d  |  %s\n", aux->id, aux->token);
  }
}

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