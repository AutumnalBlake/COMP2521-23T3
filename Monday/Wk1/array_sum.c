#include <stdio.h>
#include <stdlib.h>

int array_sum(int *nums, int len);

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    printf("%d\n", array_sum(nums, 5));
}

int array_sum(int *nums, int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += (nums[i] % 2 == 0) ? nums[i] : 0;
    }
    return sum;
}