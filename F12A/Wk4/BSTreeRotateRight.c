#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

BSTree BSTreeRotateRight(BSTree t) {
  BSTree new_root = t->left;
  t->left = t->left->right;
  new_root->right = t;
  return new_root;
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Rotated tree:\n");
  t = BSTreeRotateRight(t);
  printBSTree(t);
  freeBSTree(t);
}