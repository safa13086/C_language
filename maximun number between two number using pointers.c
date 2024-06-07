#include <stdio.h>

// Function to find the maximum number using pointers
int findMax(int *ptr1, int *ptr2) {
    if (*ptr1 > *ptr2) {
        return *ptr1;
    } else {
        return *ptr2;
    }
}

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Assign addresses of numbers to pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Find and print the maximum number
    printf("The maximum number between %d and %d is: %d\n", num1, num2, findMax(ptr1, ptr2));

    return 0;
}
