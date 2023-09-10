#include <assert.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#define MAX_OBJ 0x7FFFFFFFFFFFFFFFUL

int main() {
  for (uint64_t sz = 1; sz < UINT64_MAX / 2; sz *= 2) {
    printf("%ld bytes\n", sz);
    char *arr = malloc(sz);
    if (!arr) {
      perror("");
      return 0;
    }
  }
}