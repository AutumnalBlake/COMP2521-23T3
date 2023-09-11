#include <stdio.h>
#include <stdlib.h>
#include "../../Util/list.h"

void listDelete(struct list *list, int val);

int main(int argc, char *argv[]) {
  int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  struct node *head = listFromArray(10, nums);
  struct list *l = malloc(sizeof(struct list));
  l->head = head;

  printf("Before:\n");
  listPrint(l->head);

  printf("Removing 1:\n");
  listDelete(l, 1);
  listPrint(l->head);

  printf("Removing 5:\n");
  listDelete(l, 5);
  listPrint(l->head);

  printf("Removing 10:\n");
  listDelete(l, 10);
  listPrint(l->head);

  printf("Removing -1:\n");
  listDelete(l, -1);
  listPrint(l->head);

  listFree(l->head);
  free(l);
}

/**
 * List representation:
 *
 * struct node {
 *  int value;
 *  struct node *next;
 * };
 *
 * struct list {
 *  struct node *head;
 * };
 */

void listDelete(struct list *list, int val) {
  if (list->head == NULL) return;

  if (list->head->value == val) {
    struct node *to_remove = list->head;
    list->head = list->head->next;
    free(to_remove);
    return;
  }

    for (struct node *curr = list->head; curr->next != NULL; curr = curr->next) {
      if (curr->next->value == val) {
        struct node *to_remove = curr->next;
        curr->next = curr->next->next;
        free(to_remove);
      }
    }
}
