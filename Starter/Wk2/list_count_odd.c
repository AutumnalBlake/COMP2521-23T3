#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

int list_count_odd(struct node *l) {
  return 0;
}

int main(int argc, char *argv[]) {
  struct node *l = listFromArgs(argc, argv);
  printf("List: ");
  listPrint(l);
  printf("Num odds: %d\n", list_count_odd(l));
  listFree(l);
}