#include <stdio.h>


int countOddNumbers(int arr[], int size) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    
    return count;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int oddCount = countOddNumbers(arr, n);
    
    printf("Number of odd numbers: %d\n", oddCount);
    
    return 0;
}
