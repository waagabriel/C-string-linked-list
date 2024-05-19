#include <stdio.h>
#include <stdlib.h>
typedef struct {
  char *string_valor;
  void *next;
} string_vetor;

string_vetor *string_list_add(string_vetor **lista, char *value);
int string_list_remove(string_vetor **head, int index);
void string_list_print(string_vetor *head);
void string_list_free(string_vetor *head);
int string_list_printAt(string_vetor *head, unsigned int index);
