#include <stdlib.h>
#include <stdio.h>

void print_reverse(char *str) {
    if (str[0] == '\0') return;
    // print tail in reverse
    print_reverse(&str[1]); 
    // print the first character
    putchar(str[0]);
}

int main(int argc, char *argv[]) {
    printf("%s -> ", argv[1]);
    print_reverse(argv[1]);
    putchar('\n');
}