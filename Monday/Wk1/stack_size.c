#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  for (uint64_t sz = 1;; sz *= 2) {
    printf("%ld bytes\n", sz);
    char arr[sz];
  }
}