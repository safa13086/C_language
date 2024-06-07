#include <stdio.h>

// Function to print array elements in reverse order
void printReverse(int arr[], int size) {
    // Traverse the array from the end to the beginning
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements in reverse order
    printf("Array elements in reverse order: ");
    printReverse(arr, size);

    return 0;
}
