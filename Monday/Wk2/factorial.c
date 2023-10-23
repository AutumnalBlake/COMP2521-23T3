#include <stdlib.h>
#include <stdio.h>

long long fac(int n) {
  return -1;
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  printf("%d! = %lld\n", n, fac(n));
}