#include <stdlib.h>
#include <stdio.h>

int main() {
  for (int sz = 1;; sz *= 2) {
    printf("%d bytes\n", sz);
    char arr[sz];
  }
}