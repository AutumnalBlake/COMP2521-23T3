#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

int BSTreeNumNodes(BSTree t) {
  return 0;
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Num nodes: %d\n", BSTreeNumNodes(t));
  freeBSTree(t);
}