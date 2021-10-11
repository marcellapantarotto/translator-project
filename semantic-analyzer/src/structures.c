#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/structures.h"

extern int yylineno;
extern int yyleng;
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
int idx = 0;
int params_counter = 0;
int calling_params_counter = 0;
char curr_type[] = "";

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
  "STOP_STMT",
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
  "TERM",
  "IDEN",
};

//===============================================================
// DEBUG SECTION
//===============================================================

void print_astoken(t_token *t) {
  printf("(Token ");
  printf("lexeme: %s; ", t->lexeme);
  printf("line: %d; ", t->line);
  printf("column: %d;)", t->column);
}

void print_node(t_node *n) {
 
  printf("(Node ");
  print_astoken(&n->token);
  printf(" label: %s ",  rule_label[n->label]);
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
void add_table_node(char *tok, t_node *n, int i) {
  table_node *node = (table_node*) malloc(sizeof(table_node));
  node->id = id_counter;
  strcpy(node->token,tok); //
  node->next = NULL;
  node->scope = g_scope;
  node->line = yylineno;
  node->column = column;
  // node->type = (char*) malloc(sizeof(strlen(get_type(n, i))+1));
  strcpy(node->type, curr_type); //
  // get_type(n, i
  strcpy(node->vfp,"Variable"); //
  
  node->params = 0;
  
  int x = verify_existing_symbol(node);
  if (x == 0) {
    symbol_table.final->next = node;
    symbol_table.final = node;
    id_counter++;
  }
}

// verifies if symbol with same scope already exists in symbol table
int verify_existing_symbol(table_node *symbol){
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    symbol->label = aux->label;
    if(strcmp(symbol->token, aux->token) == 0 && symbol->scope == aux->scope) {
      printf(BHRED "SEMANTIC ERROR (line: %d, column: %d): Redeclaration of variable or function <%s> inside scope! \n" reset, symbol->line, symbol->column, symbol->token);
      semantic_errors++;
      return 1;
    }
  }
  return 0;
}

// increments scope of symbols
void increment_scope()  {
  scope_counter += 1;
  g_scope = scope_counter;
  t_scope_node *temp = (t_scope_node*) malloc(sizeof(t_scope_node));
  temp->scope_number = g_scope;
  temp->parent = scope_node_curr;
  scope_node_curr = temp;
  params_counter = 0; 
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
  printf("\n\n==================================================================================================\n");
  printf("\t\t\t\t\tSYMBOL TABLE");
  printf("\n==================================================================================================\n");
  printf(" ID  |  TOKENS\t\t\t| TYPE         | SCOPE | LINE  | COLUMN |  V/F/P       | # PARAMS");
  printf("\n==================================================================================================\n");
  while(aux->next != NULL) {
    aux = aux->next;
    printf(" %-3d |  %-15s\t\t| %-13s|  %-2d   |  %-3d  |  %-3d   | %-12s |  %d\n", aux->id, aux->token, aux->type, aux->scope, aux->line, aux->column, aux->vfp, aux->params );
  }
  printf("==================================================================================================\n");
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
  return t;
}

// create new node in tree with the token that is bening passed
t_node *create_node(int label) {
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  node->token = null_token();
  node->label = label;
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
t_node *token_to_node(t_token *t, int label) {
  struct t_node *node = (struct t_node*)malloc(sizeof(t_node));
  node->token = *t;
  node->label = label;
  node->children = NULL;
  return node;
}

// add a token (converted into node) to the tree
void add_tree_token_node(t_node *root, t_token *tok, int label) {
  struct t_node *node;
  node = token_to_node(tok, label);
  add_tree_node(root, node);
}

// print tree header
void print_ast_tree() {
  printf("\n========================================================\n");
  printf("\t\t    ABSTRACT TREE");
  printf("\n========================================================\n");
  print_ast(root, 1);
}

// print whole AST tree
void print_ast(t_node *root, int height) {
  int i;
  printf(" |");
  for(i = 0; i < height-1; i++) {
    printf(" |");
  }
  printf("- %s", rule_label[root->label]);

  if(root->token.line != -1) {  
    // printf("- %s", rule_label[root->label]);
    printf(": " BHBLU "%s  (line: %d, column: %d)\n" reset, root->token.lexeme, root->token.line, root->token.column);
  } else {
    printf("\n");
  }
  tree_node *curr = root->children;
  while(curr != NULL) {
    print_ast(curr->child, height+1);
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
    printf(BHRED "\n\nSEMANTIC ERROR: No function main! \n" reset);
    semantic_errors++;
    return 1;
  }
  return 0;
}

char *get_type(t_node *node, int i) {
  tree_node *curr = node->children;
  char *aux;
  char buff[200][10];

  while(curr != NULL) {
    if(strcmp(rule_label[curr->child->label], "INT" ) == 0 || strcmp(rule_label[curr->child->label], "FLOAT" ) == 0) {
      strcpy(buff[i], rule_label[curr->child->label]);
    } else if(strcmp(rule_label[curr->child->label], "LIST") == 0) {
      strcat(buff[i], " ");  
      strcat(buff[i], rule_label[curr->child->label]);      
    }
    curr = curr->sibilings;
  }  
  aux = buff[i];
  return aux;
}

int get_amount_params(t_node *node) {
  tree_node *curr = node->children;
  while(curr != NULL) {
    if(strcmp(rule_label[curr->child->label], "UNIQUE_DECLARATION") == 0) {
      curr = curr->sibilings;
    } 
    if(strcmp(curr->child->token.lexeme, "") != 0) {
      params_counter++;
    }
    curr = curr->sibilings;
    }
  return params_counter;
}

void set_amount_params(char *func, int x) {
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    if (strcmp(aux->token, func) == 0) {
      aux->params = x;
    }
  }
}

int verify_amount_params(t_node *node, t_token *func) {
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    if(strcmp(func->lexeme, aux->token) == 0) {
      if (calling_params_counter < aux->params) {
        printf(BHRED "SEMANTIC ERROR (line: %d, column: %d): Amount of parameters passed is lower then the amount expected by the function! \n" reset, yylineno, column-yyleng);
        semantic_errors++;
        return 1;
      } else if (calling_params_counter > aux->params) {
        printf(BHRED "SEMANTIC ERROR (line: %d, column: %d): Amount of parameters passed is higher then the amount expected by the function! \n" reset, yylineno, column-yyleng);
        semantic_errors++;
        return 1;
      } 
    }
  } 
  return 0;
}

void set_F_table(t_node *node) {
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    if (strcmp(aux->token, node->token.lexeme) == 0) {
      strcpy(aux->vfp, "Function");
    }
  }
}

void set_P_table(t_node *node) {
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    if (strcmp(aux->token, node->children->sibilings->child->token.lexeme) == 0 &&
        aux->scope  == g_scope) {
      strcpy(aux->vfp, "Variable (P)");
    }
  }
}

int verify_existing_variable(t_token *tok) {
  int found = 0;
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    if(strcmp(tok->lexeme, aux->token) == 0) {
      found = 1;
    }
  }
  if(!found) {
    printf(BHRED "SEMANTIC ERROR (line: %d, column: %d): Variable <%s> was not declared! \n" reset, tok->line, tok->column, tok->lexeme);
    semantic_errors++;
    return 1;
  }
  return 0;
}

int verify_existing_function(t_token *tok) {
  int found = 0;
  table_node *aux = symbol_table.beginning;
  while(aux->next != NULL) {
    aux = aux->next;
    if(strcmp(tok->lexeme, aux->token) == 0) {
      found = 1;
    }
  }
  if(!found) {
    printf(BHRED "SEMANTIC ERROR (line: %d, column: %d): Function <%s> was not declared! \n" reset, tok->line, tok->column, tok->lexeme);
    semantic_errors++;
    return 1;
  }
  return 0;
}

// print tree header
void print_annotated_tree() {
  printf("\n========================================================\n");
  printf("\t\t    ANNOTATED TREE");
  printf("\n========================================================\n");
  print_annotated(root, 1);
}

// print whole anonotated tree
void print_annotated(t_node *root, int height) {
  if(root == NULL) {
    return;
  }

  if(root->token.line != -1) {  
    if (strcmp(rule_label[root->label], "IDENTIFIER") == 0) {
      for(int i = 0; i < height-3; i++) {
        printf(" |");
      }
      printf("- " BHBLU "%s  (line: %d, column: %d)\n" reset, root->token.lexeme, root->token.line, root->token.column);
    } else if (strcmp(rule_label[root->label], "NUMBER_INT") == 0) {
      for(int i = 0; i < height-3; i++) {
        printf(" |");
      }
      printf("- int: " BHBLU "%s  (line: %d, column: %d)\n" reset, root->token.lexeme, root->token.line, root->token.column);
    }  else if (strcmp(rule_label[root->label], "NUMBER_FLOAT") == 0) {
      for(int i = 0; i < height-3; i++) {
        printf(" |");
      }
      printf("- float: " BHBLU "%s  (line: %d, column: %d)\n" reset, root->token.lexeme, root->token.line, root->token.column);
    } 
    else {     
      for(int i = 0; i < height-3; i++) {
        printf(" |");
      } 
      printf("- %s  (line: %d, column: %d)\n", rule_label[root->label], root->token.line, root->token.column);
    }
  } 
  
  tree_node *curr = root->children;
  while(curr != NULL) {
    if (root->token.line != -1) {
      print_annotated(curr->child, height);
    } else {
      print_annotated(curr->child, height+1);
    }
    curr = curr->sibilings;
  }
}

// void type_check(t_node *node1, t_node *node2, t_token *op) {
  
// }

//===============================================================
// NUMBER CONVERTION
//===============================================================

// double int_to_float(t_node num1, t_node num2, char* operation) {
//   double num_float;
//   double aux1 = atof(num1.token.lexeme);
//   double aux2 = atof(num2.token.lexeme);
//   char *aux_lexeme;

//   // find a way to verify is number is floating point number
//   if (num1.label == NUMBER_INT) {
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