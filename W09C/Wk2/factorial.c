#include <stdio.h>
#include <stdlib.h>

long long fac(int n) {
    if (n == 0) return 1;
    return fac(n - 1) * n;
}

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    printf("%d! = %lld\n", n, fac(n));
}