#include <stdio.h>
#include <stdlib.h>

void array_sum(int *arr, int n);

int main(int argc, char *argv[]) {
  int nums[argc - 1];

  for (int i = 1; i < argc; i++)
    nums[i - 1] = atoi(argv[i]);

  array_sum(nums, argc - 1);
}

// while version
// void array_sum(int *arr, int n) {
//   int sum = 0;
//   int i = 0;
//   while (i < n) {
//     sum += arr[i]; // += : sum = sum + arr[i]
//     i++;
//   }
//   printf("%d\n", sum);

//   if (sum % 2 == 0) {
//     printf("The sum is even\n");
//   } else {
//     printf("The sum is odd\n");
//   }
// }

// for version
void array_sum(int *arr, int n) {
  int sum = 0;
  
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  printf("%d\n", sum);

  char *odd_or_even = sum % 2 == 0 ? "even" : "odd";
  printf("The sum is %s\n", odd_or_even);
}
