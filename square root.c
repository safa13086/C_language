#include <stdio.h>

double squareRoot(double n) {
    double x = n;
    double y = 1;
    double e = 0.000001;

    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Square root of %.2lf is %.6lf\n", num, squareRoot(num));
    return 0;
}
 