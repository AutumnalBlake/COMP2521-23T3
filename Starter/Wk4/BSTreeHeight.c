#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

int BSTreeHeight(BSTree t) {
  return 0;
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Height: %d\n", BSTreeHeight(t));
  freeBSTree(t);
}