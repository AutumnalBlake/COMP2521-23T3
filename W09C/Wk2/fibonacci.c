#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    printf("fib(%d) = %d", n, fib(n));
}