#include "cvec.h"
#include <stdio.h>
#include <string.h>
// no memory leaks?
// sample program of string vec
int main() {
  string_vetor *head = NULL;
  char str[64];
  int menu = 0;
  int index = 0;
  while (menu != 5) {
    printf(
        "\033[m 1 to add\n 2 to delete\n 3 to print at a certain index\n 4 to "
        "print whole list\n 5 to "
        "quit: ");
    if (scanf("%d", &menu) == 1) {
      getchar();
      switch (menu) {
      case 1:
        printf("insert a string to add [max 64]:\n \033[93m");
        fgets(str, 64, stdin);
        string_list_add(&head, str);
        break;
      case 2:
        printf("insert a index to delete");
        if (scanf("%d", &index) == 1) {
          string_list_remove(&head, index);
        } else {
          printf("insert a number");
        }
        break;
      case 3:
        printf("insert the index you would like to print: ");
        if (scanf("%d", &index) == 1) {
          string_list_printAt(head, index);
        } else {
          printf("insert a number");
        }
        break;
      case 4:
        string_list_print(head);
        break;
      }
    } else {
      getchar();
      printf("ERROR.\n\n");
    }
  }
  string_list_free(head);
}
