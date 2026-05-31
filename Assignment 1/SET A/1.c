#include <stdio.h>

// Define a macro for array size
#define SIZE 5

int main() {
    int arr[SIZE];  // Array size assigned using macro

    // Assign values to the array
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }

    // Print the array elements
    printf("Array elements are:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}