#include <stdio.h>
#include <stdlib.h>
#include "../../Util/list.h"

struct node *listDelete(struct node *list, int val);

int main(int argc, char *argv[]) {
  int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    struct node *l = listFromArray(10, nums);

  printf("Before:\n");
  listPrint(l);

  printf("Removing 1:\n");
  listDelete(l, 1);
  listPrint(l);

  printf("Removing 5:\n");
  listDelete(l, 5);
  listPrint(l);

  printf("Removing 10:\n");
  listDelete(l, 10);
  listPrint(l);

  printf("Removing -1:\n");
  listDelete(l, -1);
  listPrint(l);

  listFree(l);
}

struct node *listDelete(struct node *list, int val) {
    // TODO
    return NULL; 
}
