#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main() {
  unsigned long long sz = 1;
  while (sz < ULLONG_MAX / 2) {
    printf("%lld bytes\n", sz);
    malloc(sz);
    sz *= 2;
  }
  printf("(reached ull max)\n");
}