#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

int list_count_odd(struct node *l) {
  if (l == NULL) return 0;
  int tail_odds = list_count_odd(l->next);

  if (l->value % 2 == 1) {
    return 1 + tail_odds;
  } else {
    return tail_odds;
  }
}

int main(int argc, char *argv[]) {
  struct node *l = listFromArgs(argc, argv);
  printf("List: ");
  listPrint(l);
  printf("Num odds: %d\n", list_count_odd(l));
  listFree(l);
}