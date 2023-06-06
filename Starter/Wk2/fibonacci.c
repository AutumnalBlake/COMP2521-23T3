#include <stdlib.h>
#include <stdio.h>

long long fib(int n) {
  return -1;
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  printf("fib(%d) = %lld\n", n, fib(n));
}