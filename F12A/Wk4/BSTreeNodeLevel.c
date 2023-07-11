#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

int BSTreeNodeLevel(BSTree t, int key) {
  if (t == NULL) return -1;
  if (t->value == key) return 0;

  // int subtree_level = t->value < key ? BSTreeNodeLevel(t->right, key) : BSTreeNodeLevel(t->left, key);

  int subtree_level;
  if (t->value < key) {
    subtree_level = BSTreeNodeLevel(t->right, key);
  } else {
    subtree_level = BSTreeNodeLevel(t->left, key);
  }

  if (subtree_level == -1) return -1;
  return subtree_level + 1;
}

int main(int argc, char *argv[]) {
  BSTree t = readBSTree(0);
  printBSTree(t);
  printf("Enter key to find: ");
  int k;
  scanf("%d", &k);
  printf("Node containing %d is on level %d\n", k, BSTreeNodeLevel(t, k));
  freeBSTree(t);
}