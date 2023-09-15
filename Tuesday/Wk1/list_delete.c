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
    if (val == list->head->value) {
        struct node *del = list->head;
        list->head = list->head->next;
        free(del);
    }
}
