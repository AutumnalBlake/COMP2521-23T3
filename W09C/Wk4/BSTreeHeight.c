#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

int BSTreeHeight(BSTree t) {
  if (t == NULL) return -1;
  int l_height = BSTreeHeight(t->left);
  int r_height = BSTreeHeight(t->right);
  return 1 + (l_height > r_height ? l_height : r_height);
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Height: %d\n", BSTreeHeight(t));
  freeBSTree(t);
}