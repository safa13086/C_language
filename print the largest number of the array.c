#include <stdio.h>


int findLargest(int arr[], int n) {
    int max = arr[0]; 
    
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    
    return max; 
}

int main() {
    int arr[] = { 12, 34, 56, 78, 23, 45, 67 };
    int n = sizeof(arr) / sizeof(arr[0]); 

    int largest = findLargest(arr, n); 

    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
