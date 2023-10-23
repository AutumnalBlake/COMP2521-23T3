#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(char *str) {
  int length = strlen(str);

  int i = 0;
  int j = length - 1;

  while (i < j) {
    printf("%c %c\n", str[i], str[j]);
    if (str[i] == str[j]) {
      i++;
      j--;
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