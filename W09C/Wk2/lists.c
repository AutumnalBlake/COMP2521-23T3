#include <stdio.h>
#include <stdlib.h>
#include "../../Util/list.h"

int list_length(struct node *l) {
    if (l == NULL) return 0;
    return list_length(l->next) + 1;
}

int list_sum(struct node *l) {
    if (l == NULL) return 0;
    return list_sum(l->next) + l->value;
}

int list_odds(struct node *l) {
    if (l == NULL) return 0;

    // return list_odds(l->next) + l->value % 2;

    if (l->value % 2 == 0) {
        return list_odds(l->next);
    } else {
        return 1 + list_odds(l->next);
    }
}

struct node *list_delete(struct node *l, int val) {
    // Base cases
    // Empty list - nothing (return NULL)
    if (l == NULL) return NULL;
    // Val is at head - return tail
    if (l->value == val) {
        struct node *tail = l->next;
        free(l);
        return tail;
    }

    struct node *new_tail = list_delete(l->next, val);
    l->next = new_tail;

    return l;
}

int main(int argc, char *argv[]) {
    struct node *l = listFromArgs(argc, argv);
    listPrint(l);

    printf("Length: %d\n", list_length(l));
    printf("Sum: %d\n", list_sum(l));
    printf("Odds: %d\n", list_odds(l));

    printf("Enter a number to delete: ");
    int n;
    scanf("%d", &n);
    l = list_delete(l, n);
    listPrint(l);

    listFree(l);
}