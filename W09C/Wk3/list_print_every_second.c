#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

void list_print_every_second_r(struct node *l, int n) {
    if (l == NULL) return;
    if (n % 2 == 0) printf("%d\n", l->value);
    list_print_every_second_r(l->next, n + 1);
}

void list_print_every_second(struct node *l) {
    list_print_every_second_r(l, 1);
}

int main(int argc, char *argv[]) {
    struct node *l = listFromArgs(argc, argv);
    listPrint(l);
    list_print_every_second(l);
    listFree(l);
}