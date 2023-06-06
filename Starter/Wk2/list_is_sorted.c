#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "../../Util/list.h"

bool list_is_sorted(struct list *l) {
  return false;
}

int main(int argc, char *argv[]) {
  struct node *head = listFromArgs(argc, argv);
  struct list *l = malloc(sizeof(struct list));
  l->head = head;
  printf("List: ");
  listPrint(l->head);
  printf(list_is_sorted(l) ? "Sorted\n" : "Not sorted\n");
  listFree(l->head);
  free(l);
}