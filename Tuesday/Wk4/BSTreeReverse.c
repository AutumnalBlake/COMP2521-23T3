#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

void BSTreeReverse(BSTree t) {
  if (t == NULL) return;

  BSTreeReverse(t->left);
  BSTreeReverse(t->right);

  BSTree tmp = t->left;
  t->left = t->right;
  t->right = tmp;
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Reversed tree:\n");
  BSTreeReverse(t);
  printBSTree(t);
  freeBSTree(t);
}