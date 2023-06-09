#include <stdlib.h>
#include <stdio.h>

long long fac(int n) {
  if (n == 0) return 1; /// Base case
  return fac(n - 1) * n; // Recursive case
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  printf("%d! = %lld\n", n, fac(n));
}