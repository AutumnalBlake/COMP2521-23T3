#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

struct node *list_delete(struct node *l, int v) {
  return l;
}

int main(int argc, char *argv[]) {
  struct node *l = listFromArgs(argc, argv);
  printf("List: ");
  listPrint(l);
  printf("Value to delete: ");
  int v;
  scanf("%d", &v);
  printf("After deleting: ");
  l = list_delete(l, v);
  listPrint(l);
  listFree(l);
}