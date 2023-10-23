#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

int list_count_odd(struct node *l) {
  if (l == NULL) return 0;
  int n = list_count_odd(l->next);
  if (l->value % 2 == 0) {
    return n;
  } else {
    return 1 + n;
  }
}

int main(int argc, char *argv[]) {
  struct node *l = listFromArgs(argc, argv);
  printf("List: ");
  listPrint(l);
  printf("Num odds: %d\n", list_count_odd(l));
  listFree(l);
}