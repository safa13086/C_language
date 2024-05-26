#include <stdio.h>
int fib(int n);

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci sequence of %d terms is: ", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", fib(i));
    }
    return 0;
}
int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}
