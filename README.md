# C-string-linked-list

simple linked list using C language

 functions:

 * string_vetor* add(string_vetor** lista, char* value) [adds a string to the list returns NULL if error]
 * int rmv(string_vetor* head, int index) [removes and free the string on the given index, returns 1 if no the index cant be found]
 * void freeVet(string_vetor* head) [this function free the entire linked list]
 * void printAt(string_vetor* head) [prints the string on a certain index in the list]
