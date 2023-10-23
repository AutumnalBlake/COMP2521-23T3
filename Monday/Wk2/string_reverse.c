#include <stdlib.h>
#include <stdio.h>

void print_reverse(char *str) {
    
}

int main(int argc, char *argv[]) {
    printf("%s -> ", argv[1]);
    print_reverse(argv[1]);
    putchar('\n');
}