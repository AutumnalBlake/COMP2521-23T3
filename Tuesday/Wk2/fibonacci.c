#include <stdlib.h>
#include <stdio.h>

long long fib(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  printf("fib(%d) = %lld\n", n, fib(n));
}