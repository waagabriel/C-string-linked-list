#include <stdio.h>
#include <stdlib.h>
typedef struct {
  char *string_valor;
  void *next;
} string_vetor;

string_vetor *add(string_vetor **lista, char *value);
int rmv(string_vetor **head, int index);
void printVetor(string_vetor *head);
void freeVet(string_vetor *head);
int printAt(string_vetor *head, unsigned int index);
