#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

int BSTreeCountGreater(BSTree t, int key) {
  if (t == NULL) return 0;

  int greater = 0;
  if (t->value > key) {
    greater++;
    greater += BSTreeCountGreater(t->left, key);
    greater += BSTreeCountGreater(t->right, key);
  } else {
    greater += BSTreeCountGreater(t->right, key);
  }

  return greater;
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