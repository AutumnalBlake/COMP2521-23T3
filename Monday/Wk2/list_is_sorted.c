#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "../../Util/list.h"

bool list_is_sorted_r(struct node *l) {
  if (l == NULL || l->next == NULL) return true;
  bool tail_sorted = list_is_sorted_r(l->next);
  return tail_sorted && l->value < l->next->value;
}

bool list_is_sorted(struct list *l) {
  return list_is_sorted_r(l->head);
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