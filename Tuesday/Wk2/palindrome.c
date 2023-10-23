#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(char *str) {
  int n = strlen(str);
  int i = 0;
  int j = n - 1;

  while (i < j) {
    if (str[i] != str[j]) return false;
    i++;
    j--;
  }

  return true;
}

int main(int argc, char *argv[]) {
  if (is_palindrome(argv[1]))
    printf("%s is a palindrome\n", argv[1]);
  else 
    printf("%s is not a palindrome\n", argv[1]);
}
