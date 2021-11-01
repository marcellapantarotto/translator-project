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
char return_type[13] = "";
char return_type_function[13] = "";
char param_type[13] = "";
parameter_list param_lst;
int id = 0;
int id2 = 0;
FILE *tac_output;
int tac_counter = 0;

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
  
  char *num;
  if(asprintf(&num, "%d", tac_counter) == -1) {
    perror("asprintf");
  } else {
    strcat(strcpy(node->tac, "v"), num);
    free(num);
    tac_counter++;
  }

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
  params_counter = 0;
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
  fprintf(tac_output, ".table\n");
  table_node *aux = symbol_table.beginning;
  printf("\n\n=============================================================================================================\n");
  printf("\t\t\t\t\tSYMBOL TABLE");
  printf("\n=============================================================================================================\n");
  printf(" ID  |  TOKENS\t\t\t| TYPE         | SCOPE | LINE  | COLUMN |  V/F/P       | # PARAMS | TAC NAME");
  printf("\n=============================================================================================================\n");
  while (aux->next != NULL)
  {
    aux = aux->next;
    if (strcmp(aux->vfp, "Function") != 0)
    {
      if (strcmp(aux->type, "list (int)") == 0)
        fprintf(tac_output, "int %s[] = {0}\n", aux->tac);
      else if (strcmp(aux->type, "list (float)") == 0)
        fprintf(tac_output, "float %s[] = {0}\n", aux->tac);
      else
        fprintf(tac_output, "%s %s\n", aux->type, aux->tac);
    }
    printf(" %-3d |  %-15s\t\t| %-13s|  %-2d   |  %-3d  |  %-3d   | %-12s |  %-7d | %s\n", aux->id, aux->token, aux->type, aux->scope, aux->line, aux->column, aux->vfp, aux->params, aux->tac);
  }
  printf("=============================================================================================================\n");
  fprintf(tac_output, "\n.code\n");
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
  // if(strcmp(rule_label[root->children->child->label], "NUMBER_INT") == 0 ||

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
      // strcpy(node->type, return_var_type_from_table(root->children->child));
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
    // printf("- %s", rule_label[root->label]);
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
      fprintf(tac_output, "main:\n");
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

int get_amount_params(t_node *node, char *function)
{
  // parameter *p = (parameter*) malloc(sizeof(parameter));
  tree_node *curr = node->children;
  while (curr != NULL)
  {
    if (strcmp(rule_label[curr->child->label], "UNIQUE_DECLARATION") == 0)
    {
      curr = curr->sibilings;
    }
    if (strcmp(curr->child->token.lexeme, "") != 0)
    {
      params_counter++;

      // strcpy(p->name, curr->child->token.lexeme);
      // strcpy(p->type, curr->child->type);
      // strcpy(p->function, function);
      // p->next = NULL;

      // param_lst.final->next = p;
      // param_lst.final = p;
    }
    curr = curr->sibilings;
  }
  return params_counter;
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

int verify_amount_params(t_node *node, t_token *func)
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

parameter_list create_params_list()
{
  parameter_list lst;
  lst.beginning = (parameter *)malloc(sizeof(parameter));
  strcpy(lst.beginning->name, "");
  strcpy(lst.beginning->type, "");
  lst.beginning->next = NULL;
  lst.final = lst.beginning;
  return lst;
}

void remove_param_from_list(t_node *node)
{
  parameter *p = param_lst.beginning;
  // parameter *next;
  tree_node *curr = node->children;

  while (curr != NULL)
  {
    if (strcmp(curr->child->token.lexeme, "") != 0)
    {
      printf("~~~~ %s %s \n", curr->child->token.lexeme, curr->child->type);
      if (strcmp(curr->child->type, p->type) == 0)
      {
        //   next = p->next;
        // free(p);
        // p = next;
        printf(" %-10s - %-13s - %-s \n", p->name, p->type, p->function);
      }
    }
    curr = curr->sibilings;
  }
}

void print_params_list()
{
  parameter *aux = param_lst.beginning;
  printf("\n\n========================================================\n");
  printf("\t\tLIST OF PARAMETERS");
  printf("\n========================================================\n");
  printf(" NAME\t    | TYPE\t    | FUNCTION ");
  printf("\n========================================================\n");

  while (aux->next != NULL)
  {
    aux = aux->next;
    printf(" %-10s | %-13s | %-s \n", aux->name, aux->type, aux->function);
  }
  printf("========================================================\n\n");
}

void destroy_params_list()
{
  parameter *curr = param_lst.beginning;
  parameter *nxt;
  while (curr->next != NULL)
  {
    nxt = curr->next;
    free(curr);
    curr = nxt;
  }
  free(curr);
}

// char *type_check_id(t_token *token, t_node *node, int op) {
//   if (strcmp(token, "int") == 0 && strcmp(node->type, "float") == 0) {
//     strcpy(token->type, "float");
//     strcpy(token->children->child->type, "float");
//     strcpy(return_type, "float");
//     if (strcmp(rule_label[token->label], "NUMBER") == 0) {
//       strcat(token->children->child->token.lexeme, ".00");
//     }
//   } else if (strcmp(token->type, "float") == 0 && strcmp(node->type, "int") == 0) {
//     strcpy(node->type, "float");
//     strcpy(node->children->child->type, "float");
//     strcpy(return_type, "float");
//     if (strcmp(rule_label[node->label], "NUMBER") == 0) {
//       strcat(node->children->child->token.lexeme, ".00");
//     }
//   } else if (strcmp(token->type, "float") == 0 && strcmp(node->type, "float") == 0) {
//     strcpy(token->children->child->type, "float");
//     strcpy(node->children->child->type, "float");
//     strcpy(return_type, "float");
//   } else if (strcmp(token->type, "int") == 0 && strcmp(node->type, "int") == 0) {
//     strcpy(token->children->child->type, "int");
//     strcpy(node->children->child->type, "int");
//     strcpy(return_type, "int");
//   }

//   // printf("> %s\n", rule_label[op]);
//   // printf(">> %s: %s (%s)\n", rule_label[token->label], token->children->child->token.lexeme, token->type);
//   // printf(">>> %s: %s (%s)\n", rule_label[node->label], node->children->child->token.lexeme, node->type);
//   // printf(">>>> return: %s\n", return_type);

//   return return_type;
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

// float my_float = 42.8;          // => my_float=42.000000
// int my_int;
// float other_float;

// printf("%f\n", my_float);
// my_int = (int)my_float;         // => my_int=42
// printf("%d\n", my_int);
// other_float = (float)my_int;    // => other_float=42.000000
// printf("%f\n", other_float);

void strip_ext(char *fname)
{
  char *end = fname + strlen(fname);

  while (end > fname && *end != '.')
  {
    --end;
  }

  if (end > fname)
  {
    *end = '\0';
  }
}