#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

int list_length(struct node *l) {
  if (l == NULL) return 0;
  int n = list_length(l->next);
  return n + 1;
}

int main(int argc, char *argv[]) {
  struct node *l = listFromArgs(argc, argv);
  printf("List: ");
  listPrint(l);
  printf("Length: %d\n", list_length(l));
  listFree(l);
}