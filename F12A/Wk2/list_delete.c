#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

struct node *list_delete(struct node *l, int v) {
  // If our list has nothing, we do nothing
  if (l == NULL) return NULL;

  // If the value to delete is at the front
  // Then the list with the value deleted is the tail
  if (l->value == v) {
    struct node *new_head = l->next;
    free(l);
    return new_head;

  // Otherwise, we delete the value from the tail
  // and reattach the tail
  } else {
    struct node *new_tail = list_delete(l->next, v);
    l->next = new_tail;
    return l;
  }
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