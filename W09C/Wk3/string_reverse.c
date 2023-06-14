#include <stdlib.h>
#include <stdio.h>

void print_reverse(char *str) {
    if (str[0] == '\0') return;
    print_reverse(&str[1]);
    putchar(str[0]);
}

int main(int argc, char *argv[]) {
    printf("%s -> ", argv[1]);
    print_reverse(argv[1]);
    putchar('\n');
}