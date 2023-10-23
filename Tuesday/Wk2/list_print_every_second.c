#include <stdlib.h>
#include <stdio.h>
#include "../../Util/list.h"

void list_print_every_second(struct node *l) {
    
}

int main(int argc, char *argv[]) {
    struct node *l = listFromArgs(argc, argv);
    listPrint(l);
  
    listFree(l);
}