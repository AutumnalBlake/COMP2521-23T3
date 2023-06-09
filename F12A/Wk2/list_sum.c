#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

int list_sum(struct node *l) {
  if (l == NULL) return 0;
  return list_sum(l->next) + l->value;
}

int main(int argc, char *argv[]) {
  struct node *l = listFromArgs(argc, argv);
  printf("List: ");
  listPrint(l);
  printf("Sum: %d\n", list_sum(l));
  listFree(l);
}