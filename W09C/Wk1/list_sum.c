#include <stdio.h>
#include <stdlib.h>
#include "../../Util/list.h"


int listSum(struct node *list);

int main(int argc, char *argv[]) {
  struct node *list = listFromArgs(argc, argv);
  listPrint(list);
  printf("Sum: %d\n", listSum(list));
  listFree(list);
}

/**
 * List representation:
 * 
 * struct node {
 *  int value;
 *  struct node *next;
 * };
 */

// while version
int listSum(struct node *list) {
    // TODO
    return 42; 
}

// for version
// int listSum(struct node *list) {
//     // TODO
//     return 42; 
// }