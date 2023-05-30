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
void array_sum(int *arr, int n) { printf("TODO\n"); }

// for version
// void array_sum(int *arr, int n) {
//   printf("TODO\n");
// }
