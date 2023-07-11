#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

int BSTreeCountGreater(BSTree t, int key) {
  if (t == NULL) return 0;
  if (key >= t->value) 
    return BSTreeCountGreater(t->right, key);
  return 1 + BSTreeCountGreater(t->left, key) + BSTreeCountGreater(t->right, key);
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Enter key to find: ");
  int k;
  scanf("%d", &k);
  printf("Num greater than %d: %d\n", k, BSTreeCountGreater(t, k));
  freeBSTree(t);
}