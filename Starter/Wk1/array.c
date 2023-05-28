#include <stdio.h>
#include <stdlib.h>

// Reads an integer n as a command
// line argument, and creates an 
// array of n 42s

int main(int argc, char *argv[]) {
	int size = atoi(argv[1]);

    // TODO: store arr on heap
    int arr[size];
        
	for (int i = 0; i < size; i++) {
		arr[i] = 42;
	}
}
