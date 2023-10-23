#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "../../Util/list.h"

// list_is_sorted_r
bool do_list_is_sorted(struct node *l) {
  if (l == NULL || l->next == NULL) return true;
  bool tail_sorted = do_list_is_sorted(l->next);
  if (!tail_sorted) return false;
  else return l->value < l->next->value;
}

bool list_is_sorted(struct list *l) {
  return do_list_is_sorted(l->head);
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