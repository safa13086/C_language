#include <stdio.h>

#define MAX_SIZE 100 


void insertAtEnd(int arr[], int *n, int value) {
    if (*n < MAX_SIZE) { 
        arr[*n] = value; 
        (*n)++; 
        printf("Element inserted successfully.\n");
    } else {
        printf("Array is full. Insertion failed.\n");
    }
}


void displayArray(int arr[], int n) {
    printf("Current elements in the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE] = { 1, 2, 3, 4, 5 };
    int n = 5; 
    
    displayArray(arr, n); 
    
    int value = 10; 
    insertAtEnd(arr, &n, value); 
    
    displayArray(arr, n); 
    
    return 0;
}
