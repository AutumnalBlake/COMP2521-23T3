#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(char *str) {
    int len = strlen(str);
    int i = 0;

    while (i < len / 2) {
      if (str[i] == str[len - 1 - i]) {
        i++;
      } else {
        return false;
      }
    }

    return true;
}

int main(int argc, char *argv[]) {
  if (is_palindrome(argv[1]))
    printf("%s is a palindrome\n", argv[1]);
  else 
    printf("%s is not a palindrome\n", argv[1]);
}