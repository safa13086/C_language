#include <stdio.h>


void calculate(int num1, int num2, int *sum, int *product, float *average) {
    *sum = num1 + num2;
    *product = num1 * num2;
    *average = (float)(*sum) / 2; 
}

int main() {
    int num1, num2, sum, product;
    float average;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the function to calculate sum, product, and average
    calculate(num1, num2, &sum, &product, &average);

    // Printing the results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %.2f\n", average);

    return 0;
}
