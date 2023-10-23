#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

int max(int a, int b) {
  return a > b ? a : b;
}

int BSTreeHeight(BSTree t) {
  if (t == NULL) return -1;
  return 1 + max(BSTreeHeight(t->left), BSTreeHeight(t->right));
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Height: %d\n", BSTreeHeight(t));
  freeBSTree(t);
}