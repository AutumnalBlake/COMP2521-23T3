#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

int BSTreeNumNodes(BSTree t) {
  if (t == NULL) return 0;
  return 1 + BSTreeNumNodes(t->left) + BSTreeNumNodes(t->right);
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Num nodes: %d\n", BSTreeNumNodes(t));
  freeBSTree(t);
}