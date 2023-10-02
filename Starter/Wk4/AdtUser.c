#include "Set.h"
#include <assert.h>
#include <stdio.h>

int numOddOccurrences(int arr[], int size);
int numSingleOccurrences(int arr[], int size);


int main(int argc, char *argv[]) {
    printf("Testing numOddOccurrences\n");
    int numOdd_1[] = {1};
    assert(numOddOccurrences(numOdd_1, 1) == 1);
    int numOdd_2[] = {1, 2};
    assert(numOddOccurrences(numOdd_2, 2) == 2);
    int numOdd_3[] = {1, 1};
    assert(numOddOccurrences(numOdd_3, 2) == 0);
    int numOdd_4[] = {1, 1, 2, 1, 2, 3};
    assert(numOddOccurrences(numOdd_4, 6) == 2);
    int numOdd_5[] = {4, 3, 4, 8, 8, 4};
    assert(numOddOccurrences(numOdd_5, 6) == 2);

    printf("Testing numSingleOccurrences\n");
    int numSingle_1[] = {1};
    assert(numSingleOccurrences(numSingle_1, 1) == 1);
    int numSingle_2[] = {1, 2};
    assert(numSingleOccurrences(numSingle_2, 2) == 2);
    int numSingle_3[] = {1, 1, 2, 2, 2};
    assert(numSingleOccurrences(numSingle_3, 2) == 0);
    int numSingle_4[] = {1, 1, 2, 1, 2, 3};
    assert(numSingleOccurrences(numSingle_4, 6) == 1);
    int numSingle_5[] = {4, 3, 4, 8, 7, 4};
    assert(numSingleOccurrences(numSingle_5, 6) == 3);
    int numSingle_6[] = {1, 2, 3, 4, 5};
    assert(numSingleOccurrences(numSingle_6, 5) == 4);
}

/*
This function takes an array of integers and its size,
and returns the number of integers that occur an odd number of times.

For example, if given the array [4, 3, 4, 8, 8, 4], the function should return
2, because there are two elements that appear an odd number of times:
3 (occurs 1 time) and 4 (occurs 3 times).
*/
int numOddOccurrences(int arr[], int size) {
    return -1;
}

/*
This function takes an array of integers and its size,
and returns the number of integers that occur exactly once.

For example, if given the array [4, 3, 4, 8, 7, 4], the function should return
3, because there are three elements that occur exactly once: 3, 8 and 7.
*/
int numSingleOccurrences(int arr[], int size) {
    return -1;
}