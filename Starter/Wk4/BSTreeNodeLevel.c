#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

int BSTreeNodeLevel(BSTree t, int key) {
    return -1;
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Enter key to find: ");
  int k;
  scanf("%d", &k);
  printf("Node containing %d is on level %d\n", k, BSTreeNodeLevel(t, k));
  freeBSTree(t);
}