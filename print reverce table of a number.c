#include <stdio.h>

void main() {
    int n;
    
    printf("Enter the number for the reverse table: ");
    scanf("%d", &n);
    
    printf("Reverse Table of %d:\n", n);
    for (int i = 10; i >= 1; i--) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    
    
}
