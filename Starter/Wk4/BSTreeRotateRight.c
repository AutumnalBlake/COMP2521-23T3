#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

BSTree BSTreeRotateRight(BSTree t) {
    return t;
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Rotated tree:\n");
  t = BSTreeRotateRight(t);
  printBSTree(t);
  freeBSTree(t);
}