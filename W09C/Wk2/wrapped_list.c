#include <stdio.h>
#include <stdlib.h>
#include "../../Util/list.h"

struct node *list_delete_r(struct node *l, int val) {
    // Base cases
    // Empty list - nothing (return NULL)
    if (l == NULL) return NULL;
    // Val is at head - return tail
    if (l->value == val) {
        struct node *tail = l->next;
        free(l);
        return tail;
    }

    struct node *new_tail = list_delete_r(l->next, val);
    l->next = new_tail;

    return l;
}

void list_delete(struct list *l, int val) {
    l->head = list_delete_r(l->head, val);
    // do_list_delete
}

int main(int argc, char *argv[]) {
    struct node *head = listFromArgs(argc, argv);
    struct list *l = malloc(sizeof(struct list));
    l->head = head;

    printf("Enter a number to delete: ");
    int n;
    scanf("%d", &n);
    list_delete(l, n);
    listPrint(l->head);

    listFree(l->head);
    free(l);
}