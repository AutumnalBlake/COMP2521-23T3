#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// function Palindrome:
//     Input: String S of length n
//     Output: Whether S is a Palindrome

//     for i from 0 to n / 2:
//         if S[i] == S[n - 1 - i]:
//             i = i + 1
//         else:
//             return false

//     return true

bool is_palindrome(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
      if (str[i] != str[n - 1 - i]) {
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