#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

void BSTreeReverse(BSTree t) {
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Reversed tree:\n");
  BSTreeReverse(t);
  printBSTree(t);
  freeBSTree(t);
}