#include "HashTable.h"
#include <assert.h>
#include <stdio.h>

bool has_3sum(int *A, int n, int S) {
    HT values = HTNew();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int target = S - A[i] - A[j];
            if (HTContains(values, target)) {
                HTFree(values);
                return true;
            }
        }
        HTInsert(values, A[i], 0);
    }
    HTFree(values);
    return false;
}

int main() {
    int nums[] = {-25, -10, -7, -3, 2, 4, 8, 10};
    printf("Test 1:\n");
    assert(has_3sum(nums, 8, 0));
    printf("Passed\n");
    printf("Test 2:\n");
    assert(!has_3sum(nums, 8, -16));
    printf("Passed\n");
}