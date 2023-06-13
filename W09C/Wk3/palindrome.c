#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(char *str) {
    return false;
}

int main(int argc, char *argv[]) {
  if (is_palindrome(argv[1]))
    printf("%s is not a palindrome\n", argv[1]);
  else 
    printf("%s is a palindrome\n", argv[1]);
}