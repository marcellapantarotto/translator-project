/* MARCELLA PANTAROTTO (13/0143880) */
/* PROJECT 4: TRANSLATOR */

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
int params_counter_declaration = 0;
int params_counter_calling = 0;
int calling_params_counter = 0;
char curr_type[] = "";
char return_type[13] = "";
char return_type_function[13] = "";
char param_type[13] = "";
parameter_list param_list;
int id = 0;
int id2 = 0;
FILE *tac_table;
FILE *tac_commands;
FILE *tac_file;
int tac_counter = 0;
int temp_counter = 0;
char *temp;
char *temp_string;
int temp_string_counter = 0;
int tac_params_counter = 0;
int tac_params_counter2;
int temp_read_counter = 0;
char *temp_read;
int param_id_counter = 0;

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
    "STRING",
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

void print_token(t_token *t)
{
  printf("(Token ");
  printf("lexeme: %s; ", t->lexeme);
  printf("line: %d; ", t->line);
  printf("column: %d;)", t->column);
}

void print_node(t_node *n)
{
  printf("(Node ");
  print_token(&n->token);
  printf(" label: %s ", rule_label[n->label]);
  printf(")\n");
}

//===============================================================
// SYMBOL TABLE SECTION
//===============================================================

// create symbol table
table create_table()
{
  table t;
  t.beginning = (table_node *)malloc(sizeof(table_node));
  t.beginning->id = 0;
  strcpy(t.beginning->token, "");
  t.beginning->next = NULL;
  t.final = t.beginning;
  return t;
}

// add node to symbol table
void add_table_node(char *tok, t_node *n, int i)
{
  table_node *node = (table_node *)malloc(sizeof(table_node));
  node->id = id_counter;
  strcpy(node->token, tok);
  node->next = NULL;
  node->scope = g_scope;
  node->line = yylineno;
  node->column = column;
  strcpy(node->type, curr_type);
  strcpy(node->vfp, "Variable");
  node->params = 0;

  sprintf(node->tac, "v%d", tac_counter);
  tac_counter++;

  int x = verify_existing_symbol(node);
  if (x == 0)
  {
    symbol_table.final->next = node;
    symbol_table.final = node;
    id_counter++;
  }
}

// verifies if symbol with same scope already exists in symbol table
int verify_existing_symbol(table_node *symbol)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    symbol->label = aux->label;
    if (strcmp(symbol->token, aux->token) == 0 && symbol->scope == aux->scope)
    {
      printf(RED "SEMANTIC ERROR (line: %d, column: %d): Redeclaration of variable or function <%s> inside scope! \n" RESET, symbol->line, symbol->column, symbol->token);
      semantic_errors++;
      return 1;
    }
  }
  return 0;
}

int is_variable(t_node *node)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(node->token.lexeme, aux->token) == 0 &&
        strcmp(aux->vfp, "Variable") == 0)
    {
      return 1;
    }
  }
  return 0;
}

char *return_var_type_from_table(t_node *node)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(node->token.lexeme, aux->token) == 0 &&
        strcmp(aux->vfp, "Variable") == 0)
    {
      return aux->type;
    }
  }
  return NULL;
}

// increments scope of symbols
void increment_scope()
{
  scope_counter += 1;
  g_scope = scope_counter;
  t_scope_node *temp = (t_scope_node *)malloc(sizeof(t_scope_node));
  temp->scope_number = g_scope;
  temp->parent = scope_node_curr;
  scope_node_curr = temp;
  params_counter_declaration = 0;
}

// decrements scope of symbols
void decrement_scope()
{
  g_scope = scope_node_curr->parent->scope_number;
  t_scope_node *temp = scope_node_curr;
  scope_node_curr = scope_node_curr->parent;
  free(temp);
}

// print symbol table
void print_table()
{
  table_node *aux = symbol_table.beginning;
  printf("\n\n=============================================================================================================\n");
  printf("\t\t\t\t\tSYMBOL TABLE");
  printf("\n=============================================================================================================\n");
  printf(" ID  |  TOKENS\t\t\t| TYPE         | SCOPE | LINE  | COLUMN |  V/F/P       | # PARAMS | TAC NAME");
  printf("\n=============================================================================================================\n");
  while (aux->next != NULL)
  {
    aux = aux->next;
    printf(" %-3d |  %-15s\t\t| %-13s|  %-2d   |  %-3d  |  %-3d   | %-12s |  %-7d | %s\n", aux->id, aux->token, aux->type, aux->scope, aux->line, aux->column, aux->vfp, aux->params, aux->tac);
  }
  printf("=============================================================================================================\n");
}

// destroy symbol table
void destroy_table()
{
  table_node *curr = symbol_table.beginning;
  table_node *nxt;
  while (curr->next != NULL)
  {
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
void total_lexical_errors()
{
  printf(RED "\nTotal number of lexical errors: %d \n" RESET, lexical_errors);
}

// print total number of syntax errors
void total_syntax_errors()
{
  printf(RED "Total number of syntax errors: %d \n" RESET, syntax_errors);
}

// print total number of semantic errors
void total_semantic_errors()
{
  printf(RED "Total number of semantic errors: %d \n\n" RESET, semantic_errors);
}

//===============================================================
// TREE SECTION
//===============================================================

// creating empty token
t_token null_token()
{
  struct t_token t;
  t.line = -1;
  t.column = -1;
  strcpy(t.lexeme, "");
  return t;
}

// create new node in tree with the token that is bening passed
t_node *create_node(int label)
{
  struct t_node *node = (struct t_node *)malloc(sizeof(t_node));
  node->token = null_token();
  node->label = label;
  strcpy(node->type, "-");
  node->children = NULL;
  return node;
}

// add node to the tree
void add_tree_node(t_node *root, t_node *node)
{
  struct tree_node *aux = (struct tree_node *)malloc(sizeof(tree_node));
  aux->child = node;
  aux->sibilings = NULL;

  if (root->children == NULL)
  {
    root->children = aux; // node
  }
  else
  {
    tree_node *youngest = root->children;
    while (youngest->sibilings)
    {
      youngest = youngest->sibilings; // root
    }
    youngest->sibilings = aux; // node
  }

  set_type_node(root, node);
}

void set_type_node(t_node *root, t_node *node)
{
  if (strcmp(rule_label[root->children->child->label], "NUMBER_INT") == 0 ||
      strcmp(rule_label[root->label], "NUMBER_INT") == 0 ||
      strcmp(rule_label[node->label], "NUMBER_INT") == 0)
  {
    strcpy(root->type, "int");
    strcpy(root->children->child->type, "int");
    // strcpy(node->type, "int");
  }
  else if (strcmp(rule_label[root->children->child->label], "NUMBER_FLOAT") == 0 ||
           strcmp(rule_label[root->label], "NUMBER_FLOAT") == 0 ||
           strcmp(rule_label[node->label], "NUMBER_FLOAT") == 0)
  {
    strcpy(root->type, "float");
    strcpy(root->children->child->type, "float");
    // strcpy(node->type, "float");
  }
  else if (strcmp(rule_label[root->children->child->label], "LIST") == 0 ||
           strcmp(rule_label[root->label], "LIST") == 0 ||
           strcmp(rule_label[node->label], "LIST") == 0)
  {
    strcpy(root->type, curr_type);
    strcpy(root->children->child->type, curr_type);
  }
  else if (strcmp(rule_label[root->children->child->label], "NIL") == 0 ||
           strcmp(rule_label[root->label], "NIL") == 0 ||
           strcmp(rule_label[node->label], "NIL") == 0)
  {
    strcpy(root->type, "nil");
    strcpy(root->children->child->type, "nil");
  }
  else if (strcmp(rule_label[root->children->child->label], "IDENTIFIER") == 0 ||
           strcmp(rule_label[root->label], "IDENTIFIER") == 0 ||
           strcmp(rule_label[node->label], "IDENTIFIER") == 0)
  {
    if (is_variable(root->children->child))
    {
      strcpy(root->children->child->type, return_var_type_from_table(root->children->child));
    }
  }
  else if (strcmp(rule_label[root->label], "STRING") == 0)
  {
    strcpy(root->children->child->type, "+");
  }
  else
  {
    return;
  }
}

// converting token into node so it can be added to the tree
t_node *token_to_node(t_token *t, int label)
{
  struct t_node *node = (struct t_node *)malloc(sizeof(t_node));
  node->token = *t;
  node->label = label;
  node->children = NULL;
  return node;
}

// add a token (converted into node) to the tree
void add_tree_token_node(t_node *root, t_token *tok, int label)
{
  struct t_node *node;
  node = token_to_node(tok, label);
  add_tree_node(root, node);
}

void add_tree_operation_leaf(t_node *root, t_token *tok, int label, char *type)
{
  struct t_node *node;
  tok->scope = g_scope;
  node = token_to_node(tok, label);
  strcpy(node->type, type);
  add_tree_node(root, node);
}

// print tree header
void print_ast_tree()
{
  printf("\n========================================================\n");
  printf("\t\t    ABSTRACT TREE");
  printf("\n========================================================\n");
  print_ast(root, 1);
}

// print whole AST tree
void print_ast(t_node *root, int height)
{
  int i;
  printf(" |");
  for (i = 0; i < height - 1; i++)
  {
    printf(" |");
  }
  printf("- %s " MAGENTA " type: %s " RESET, rule_label[root->label], root->type);

  if (root->token.line != -1)
  {
    printf(": " BLUE "%s  (line: %d, column: %d)\n" RESET, root->token.lexeme, root->token.line, root->token.column);
  }
  else
  {
    printf("\n");
  }
  tree_node *curr = root->children;
  while (curr != NULL)
  {
    print_ast(curr->child, height + 1);
    curr = curr->sibilings;
  }
}

// destroy tree
void destroy_tree(t_node *root)
{
  if (root == NULL)
  {
    return;
  }
  tree_node *curr = root->children;
  tree_node *next;
  while (curr != NULL)
  {
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

int find_main()
{
  int found = 0;
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp("main", aux->token) == 0 && aux->scope == 0)
    {
      found = 1;
    }
  }
  if (!found)
  {
    printf(RED "\n\nSEMANTIC ERROR: No function main! \n" RESET);
    semantic_errors++;
    return 1;
  }
  return 0;
}

char *get_type(t_node *node, int i)
{
  tree_node *curr = node->children;
  char *aux;
  char buff[200][10];
  strcpy(buff[i], "");

  while (curr != NULL)
  {
    if (strcmp(rule_label[curr->child->label], "INT") == 0)
    {
      strcpy(buff[i], "int");
    }
    else if (strcmp(rule_label[curr->child->label], "FLOAT") == 0)
    {
      strcpy(buff[i], "float");
    }
    else if (strcmp(rule_label[curr->child->label], "LIST") == 0)
    {
      if (strcmp(buff[i], "int") == 0)
        strcpy(buff[i], "list (int)");
      else
        strcpy(buff[i], "list (float)");
    }
    else if (strcmp(rule_label[node->label], "OPERATION") == 0)
    {
      strcpy(buff[i], curr->child->type);
      strcpy(node->type, curr->child->type);
    }
    else if (strcmp(rule_label[node->label], "LIST_BINARY") == 0)
    {
      strcpy(buff[i], curr->child->type);
      strcpy(node->type, curr->child->type);
    }
    else if (strcmp(rule_label[node->label], "ARITHMETIC_BINARY") == 0)
    {
      strcpy(buff[i], curr->child->type);
      strcpy(node->type, curr->child->type);
    }
    curr = curr->sibilings;
  }
  aux = buff[i];
  return aux;
}

void set_F_table(t_node *node)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(aux->token, node->token.lexeme) == 0)
    {
      strcpy(aux->vfp, "Function");
      strcpy(aux->tac, node->token.lexeme);
    }
  }
}

void set_P_table(t_node *node)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(aux->token, node->children->sibilings->child->token.lexeme) == 0 &&
        aux->scope == g_scope)
    {
      strcpy(aux->vfp, "Variable (P)");
    }
  }
}

char *verify_existing_variable(t_token *tok)
{
  int found = 0;
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(tok->lexeme, aux->token) == 0)
    {
      found = 1;
      return aux->type;
    }
  }
  if (!found && strcmp(tok->lexeme, "") != 0)
  {
    printf(RED "SEMANTIC ERROR (line: %d, column: %d): Variable <%s> was not declared! \n" RESET, tok->line, tok->column, tok->lexeme);
    semantic_errors++;
  }
  return aux->type;
}

char *verify_existing_function(t_token *tok)
{
  int found = 0;
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(tok->lexeme, aux->token) == 0)
    {
      found = 1;
      return aux->type;
    }
  }
  if (!found)
  {
    printf(RED "SEMANTIC ERROR (line: %d, column: %d): Function <%s> was not declared! \n" RESET, tok->line, tok->column, tok->lexeme);
    semantic_errors++;
  }
  return aux->type;
}

// print tree header
void print_annotated_tree()
{
  printf("\n========================================================\n");
  printf("\t\t    ANNOTATED TREE");
  printf("\n========================================================\n");
  print_annotated(root, 1);
}

// print whole anonotated tree
void print_annotated(t_node *root, int height)
{
  if (root == NULL)
  {
    return;
  }

  if (root->token.line != -1)
  {
    for (int i = 0; i < height - 4; i++)
    {
      printf(" |");
    }
    if (strcmp(rule_label[root->label], "IDENTIFIER") == 0)
    {
      printf("- " BLUE "%s  (line: %d, column: %d) " MAGENTA " type: %s \n" RESET, root->token.lexeme, root->token.line, root->token.column, root->type);
    }
    else if (strcmp(rule_label[root->label], "NUMBER_INT") == 0)
    {
      printf("- int: " BLUE "%s  (line: %d, column: %d) " MAGENTA " type: %s \n" RESET, root->token.lexeme, root->token.line, root->token.column, root->type);
    }
    else if (strcmp(rule_label[root->label], "NUMBER_FLOAT") == 0)
    {
      printf("- float: " BLUE "%s  (line: %d, column: %d) " MAGENTA " type: %s \n" RESET, root->token.lexeme, root->token.line, root->token.column, root->type);
    }
    else if (strcmp(root->type, "") == 0 || strcmp(root->type, "-") == 0)
    {
      printf("- %s: %s  (line: %d, column: %d) \n" RESET, rule_label[root->label], root->token.lexeme, root->token.line, root->token.column);
    }
    else
    {
      printf("- %s: %s  (line: %d, column: %d) " MAGENTA " type: %s \n" RESET, rule_label[root->label], root->token.lexeme, root->token.line, root->token.column, root->type);
    }
  }

  tree_node *curr = root->children;
  while (curr != NULL)
  {
    if (root->token.line != -1)
    {
      print_annotated(curr->child, height);
    }
    else
    {
      print_annotated(curr->child, height + 1);
    }
    curr = curr->sibilings;
  }
}

char *type_check_num(t_node *node1, t_node *node2, t_token *op_node)
{
  strcpy(return_type, "");
  if (strcmp(node1->type, "int") == 0 && strcmp(node2->type, "float") == 0)
  {
    strcpy(node1->type, "float");
    strcpy(node1->children->child->type, "float");
    strcpy(op_node->type, "float");
    strcpy(return_type, "float");
  }
  else if (strcmp(node1->type, "float") == 0 && strcmp(node2->type, "int") == 0)
  {
    strcpy(node2->type, "float");
    strcpy(node2->children->child->type, "float");
    strcpy(op_node->type, "float");
    strcpy(return_type, "float");
  }
  else if (strcmp(node1->type, "float") == 0 && strcmp(node2->type, "float") == 0)
  {
    strcpy(node1->children->child->type, "float");
    strcpy(node2->children->child->type, "float");
    strcpy(op_node->type, "float");
    strcpy(return_type, "float");
  }
  else if (strcmp(node1->type, "int") == 0 && strcmp(node2->type, "int") == 0)
  {
    strcpy(node1->children->child->type, "int");
    strcpy(node2->children->child->type, "int");
    strcpy(op_node->type, "int");
    strcpy(return_type, "int");
  }
  else if (strcmp(node1->type, "nil") == 0 || strcmp(node2->type, "nil") == 0)
  {
    strcpy(node1->children->child->type, "nil");
    strcpy(node2->children->child->type, "nil");
    strcpy(op_node->type, "nil");
    strcpy(return_type, "nil");
  }
  else if (strcmp(rule_label[node1->label], "IDEN") == 0)
  {
    if (strcmp(node2->type, "float") == 0)
    {
      strcpy(node1->children->child->type, "float");
      strcpy(op_node->type, "float");
      strcpy(return_type, "float");
    }
    else
    {
      if (strcmp(get_type_table(node1), "float") == 0)
      {
        strcpy(node2->children->child->type, "float");
        strcpy(op_node->type, "float");
        strcpy(return_type, "float");
      }
      else
      {
        strcpy(node1->children->child->type, "int");
        strcpy(node2->children->child->type, "int");
        strcpy(op_node->type, "int");
        strcpy(return_type, "int");
      }
    }
  }
  else if (strcmp(rule_label[node2->label], "IDEN") == 0)
  {
    if (strcmp(node1->type, "float") == 0)
    {
      strcpy(node2->children->child->type, "float");
      strcpy(op_node->type, "float");
      strcpy(return_type, "float");
    }
    else
    {
      if (strcmp(get_type_table(node2), "float") == 0)
      {
        strcpy(node1->children->child->type, "float");
        strcpy(op_node->type, "float");
        strcpy(return_type, "float");
      }
      else
      {
        strcpy(node1->children->child->type, "int");
        strcpy(node2->children->child->type, "int");
        strcpy(op_node->type, "int");
        strcpy(return_type, "int");
      }
    }
  }
  return return_type;
}

char *get_type_table(t_node *node)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(aux->token, node->token.lexeme) == 0)
      return aux->type;
  }
  return aux->type;
}

int get_scope_from_table(t_token *func)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(aux->token, func->lexeme) == 0)
    {
      return aux->scope;
    }
  }
  return -1;
}

//===============================================================
// PARAMETERS
//===============================================================

int get_amount_params_declaration(t_node *node, char *function)
{
  tree_node *curr = node->children;
  while (curr != NULL)
  {
    if (strcmp(rule_label[curr->child->label], "UNIQUE_DECLARATION") == 0)
      curr = curr->sibilings;
    if (strcmp(curr->child->token.lexeme, "") != 0)
      params_counter_declaration++;
    curr = curr->sibilings;
  }
  return params_counter_declaration;
}

int get_amount_params_calling(t_node *node, char *function)
{
  tree_node *curr = node->children;
  while (curr != NULL)
  {
    if (strcmp(rule_label[curr->child->label], "UNIQUE_DECLARATION") == 0)
      curr = curr->sibilings;
    if (strcmp(curr->child->token.lexeme, "") != 0)
      params_counter_calling++;
    curr = curr->sibilings;
  }
  return params_counter_calling;
}

void set_amount_params(char *func, int x)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(aux->token, func) == 0)
    {
      aux->params = x;
    }
  }
}

int verify_amount_params(t_token *func)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(func->lexeme, aux->token) == 0)
    {
      if (calling_params_counter < aux->params)
      {
        printf(RED "SEMANTIC ERROR (line: %d, column: %d): Amount of parameters passed is lower then the amount expected by the function! \n" RESET, yylineno, column - yyleng);
        semantic_errors++;
        return 1;
      }
      else if (calling_params_counter > aux->params)
      {
        printf(RED "SEMANTIC ERROR (line: %d, column: %d): Amount of parameters passed is higher then the amount expected by the function! \n" RESET, yylineno, column - yyleng);
        semantic_errors++;
        return 1;
      }
    }
  }
  return 0;
}

int get_num_params_table(t_token *func)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(func->lexeme, aux->token) == 0)
      return aux->params;
  }
  return 0;
}

int get_params_table(char *func)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(func, aux->token) == 0)
      return aux->params;
  }
  return 0;
}

parameter_list create_param_list()
{
  parameter_list s;
  s.beginning = (parameter *)malloc(sizeof(parameter));
  s.beginning->id = param_id_counter;
  s.beginning->node = NULL;
  s.beginning->next = NULL;
  s.beginning->previous = NULL;
  s.final = s.beginning;
  s.size = 0;
  return s;
}

void add_all_params_2list(t_node *node)
{
  tree_node *curr = node->children->child->children;
  while (curr != NULL)
  {
    if (strcmp(rule_label[curr->child->label], "LIST_CALLING_PARAMETERS") == 0)
      curr = curr->child->children;

    add_param(curr->child);
    curr = curr->sibilings;
  }
}

void add_param(t_node *node)
{
  parameter *new = (parameter *)malloc(sizeof(parameter));
  new->id = param_id_counter;
  new->node = node->children->child;
  new->previous = param_list.final;
  new->next = NULL;
  sprintf(new->tac, "#%d", new->id);

  param_list.size++;
  param_list.final->next = new;
  param_list.final = new;
  param_id_counter++;
}

void print_params_stack()
{
  parameter *aux = param_list.beginning;
  printf("\n\n=========================================\n");
  printf("   LIST OF PARAMETERS IN FUNCION CALL");
  printf("\n=========================================\n");
  printf(" ID | TYPE         | TOKEN      | TAC");
  printf("\n=========================================\n");
  while (aux->next != NULL)
  {
    aux = aux->next;
    printf(" %d  | %-13s| %-10s | %s\n", aux->id, aux->node->type, aux->node->token.lexeme, aux->tac);
  }
  printf("=========================================\n\n");
}

void destroy_params_list()
{
  parameter *curr = param_list.beginning;
  parameter *nxt;
  while (curr->next != NULL)
  {
    nxt = curr->next;
    free(curr);
    curr = nxt;
  }
  free(curr);
}

void set_tac_name_param()
{
  parameter *aux = param_list.beginning;
  int size = param_list.size - 1;
  while (aux->next != NULL)
  {
    aux = aux->next;
    sprintf(aux->tac, "$%d", size);
    size--;
  }
}

void print_params(parameter *aux)
{
  if (aux == NULL)
    return;
  print_params(aux->next);
  fprintf(tac_commands, "param %s\n", get_tac_name(&aux->node->token));
  return;
}

//===============================================================
// TAC
//===============================================================

void strip_ext(char *fname)
{
  char *end = fname + strlen(fname);

  while (end > fname && *end != '.')
    --end;

  if (end > fname)
    *end = '\0';
}

void build_tac()
{
  int ch;
  FILE *commands_read = fopen("tests/tac_commands.tac", "r");
  FILE *table_read = fopen("tests/tac_table.tac", "r");

  fprintf(tac_file, ".table\n");
  while ((ch = fgetc(table_read)) != EOF)
  {
    fputc(ch, tac_file);
  }

  fprintf(tac_file, "\n.code");
  while ((ch = fgetc(commands_read)) != EOF)
  {
    fputc(ch, tac_file);
  }
  fprintf(tac_table, "\n");

  fclose(commands_read);
  fclose(table_read);
}

char *get_tac_name(t_token *token)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(aux->token, token->lexeme) == 0 && (aux->scope == token->scope || aux->scope == 0))
      return aux->tac;
  }
  return token->lexeme;
}

char *create_temp_4op(t_node *op)
{
  sprintf(op->tac, "t%d", temp_counter);
  temp_counter++;
  return op->tac;
}

char *create_temp_4string(t_token *s)
{
  sprintf(s->tac, "s%d", temp_string_counter);
  temp_string_counter++;
  return s->tac;
}

char *create_temp_4read(t_token *s)
{
  sprintf(s->tac, "r%d", temp_read_counter);
  temp_read_counter++;
  return s->tac;
}

void add_variables_tac(t_token *id)
{
  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(aux->token, id->lexeme) == 0 && strcmp(aux->vfp, "Variable") == 0 && id->scope == aux->scope)
    {
      if (strcmp(aux->type, "list (int)") == 0)
        fprintf(tac_table, "int %s[] = {0}\n", aux->tac);
      else if (strcmp(aux->type, "list (float)") == 0)
        fprintf(tac_table, "float %s[] = {0.0}\n", aux->tac);
      else
        fprintf(tac_table, "%s %s\n", aux->type, aux->tac);
    }
  }
}

char *add_parameter_tac(t_token *id)
{
  sprintf(id->tac, "#%d", tac_params_counter2);
  tac_params_counter2++;

  table_node *aux = symbol_table.beginning;
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(aux->token, id->lexeme) == 0 && strcmp(aux->vfp, "Variable (P)") == 0 && g_scope == aux->scope)
      strcpy(aux->tac, id->tac);
  }
  return id->tac;
}

void print_params_tac(t_node *node)
{
  tree_node *curr = node->children->child->children;
  while (curr != NULL)
  {
    if (strcmp(rule_label[curr->child->label], "LIST_CALLING_PARAMETERS") == 0)
      curr = curr->child->children;

    if (strcmp(rule_label[curr->child->label], "IDEN") == 0)
    {
      fprintf(tac_commands, "param %s\n", get_tac_name(&curr->child->children->child->token));
    }
    else
    {
      fprintf(tac_commands, "mov $%d, %s\n", tac_params_counter, get_tac_name(&curr->child->children->child->token));
      fprintf(tac_commands, "param $%d\n", tac_params_counter);
      tac_params_counter++;
    }
    curr = curr->sibilings;
  }
}

void print_assign_tac(t_token *id, t_node *op, char *temp)
{
  tree_node *curr = op->children;
  while (curr != NULL)
  {
    if (strcmp(rule_label[curr->child->label], "IDENTIFIER") == 0)
    {
      fprintf(tac_commands, "mov %s, %s\n", get_tac_name(id), get_tac_name(&curr->child->token));
      return;
    }
    else if (strcmp(rule_label[curr->child->label], "NUMBER_INT") == 0 || strcmp(rule_label[curr->child->label], "NUMBER_FLOAT") == 0)
    {
      fprintf(tac_commands, "mov %s, %s\n", get_tac_name(id), get_tac_name(&curr->child->token));
      return;
    }
    else
    {
      fprintf(tac_commands, "mov %s, %s\n", get_tac_name(id), temp);
      return;
    }

    curr = curr->sibilings;
  }
}
