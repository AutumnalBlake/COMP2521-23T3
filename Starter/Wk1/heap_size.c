#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main() {
  unsigned long long sz = 1;
  while (sz < ULLONG_MAX / 2) {
    printf("%llu bytes\n", sz);
    malloc(sz);
    sz *= 2;
  }
  unsigned long long times = 2;
  while (times < ULLONG_MAX / 2) {
    printf("%llu * %llu bytes\n", times, ULLONG_MAX);
    for (unsigned long long i = 0; i < times; i++) {
      malloc(9223372036854775807);
    }
    times *= 2;
  }
}