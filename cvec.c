/*
 \waagabriel/
*/
#include "cvec.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
// no memory leaks?
string_vetor *add(string_vetor **lista, char *value) {
  string_vetor *novo = (string_vetor *)malloc(sizeof(string_vetor));
  if (novo == NULL)
    return NULL;
  novo->string_valor = (char *)malloc(strlen(value) + 1);
  strcpy(novo->string_valor, value);
  if (*lista == NULL) {
    *lista = novo;
    novo->next = NULL;
  } else {
    novo->next = *lista;
    *lista = novo;
  }
  return novo;
}

void printVetor(string_vetor *head) {
  string_vetor *cursor = head;
  while (cursor != NULL) {
    printf("\033[94m->%s", cursor->string_valor);
    cursor = cursor->next;
  }
  printf("\n");
}

int rmv(string_vetor *head, int index) {
  string_vetor *atual = head;
  string_vetor *anterior = head;
  int cursor = 0;
  while (atual != NULL) {
    if (cursor == index) {
      if (atual == head) {
        head = atual->next;
        free(atual->string_valor);
        free(atual);
      } else {
        anterior->next = atual->next;
        free(atual->string_valor);
        free(atual);
      }
      return 0;
    }
    cursor++;
    anterior = atual;
    atual = atual->next;
  }
  return 1;
}
void freeVet(string_vetor *head) {
  string_vetor *tmp;

  while (head != NULL) {
    tmp = head;
    head = head->next;
    free(tmp->string_valor);
    free(tmp);
  }
}

int printAt(string_vetor *head, unsigned int index) {
  unsigned int cursor = 0;
  while (head != NULL) {
    if (index == cursor) {
      printf("\033[94m->%s", head->string_valor);
      return 1;
    }
    head = head->next;
    cursor++;
  }
  return 0;
}
