#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define KB 1024UL
#define MB 1048576UL

int main() {
  for (uint64_t sz = 1;; sz *= 2) {
    char arr[sz];

    if (sz >= MB) printf("%ld MB\n", sz / MB);
    else if (sz >= KB) printf("%ld KB\n", sz / KB);
    else printf("%ld B\n", sz);
  }
}