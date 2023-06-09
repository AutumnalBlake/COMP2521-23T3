#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

int list_count_odd(struct node *l) {
  // Base: An empty list has no odd nodes
  if (l == NULL) return 0;

  if (l->value % 2 == 0) {
    // Head is even
    return list_count_odd(l->next);
  } else {
    // Head is odd
    return 1 + list_count_odd(l->next);
  }
}

int main(int argc, char *argv[]) {
  struct node *l = listFromArgs(argc, argv);
  printf("List: ");
  listPrint(l);
  printf("Num odds: %d\n", list_count_odd(l));
  listFree(l);
}