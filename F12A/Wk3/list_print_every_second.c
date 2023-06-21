#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

void do_list_print(struct node *l, int index) {
    if (l == NULL) return;
    if (index % 2 == 0) {
        printf("%d\n", l->value);
    }
    do_list_print(l->next, index + 1);
}

void list_print_every_second(struct node *l) {
    do_list_print(l, 1);
}

int main(int argc, char *argv[]) {
    struct node *l = listFromArgs(argc, argv);
    listPrint(l);
    list_print_every_second(l);
    listFree(l);
}