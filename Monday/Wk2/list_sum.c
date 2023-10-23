#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

int list_sum(struct node *l) {
  return 0;
}

int main(int argc, char *argv[]) {
  struct node *l = listFromArgs(argc, argv);
  printf("List: ");
  listPrint(l);
  printf("Sum: %d\n", list_sum(l));
  listFree(l);
}