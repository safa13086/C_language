#include <stdio.h>


struct Complex {
    float real;
    float imag;
};

int main() {
    
    struct Complex num1 = {3.0, 4.0};

    
    struct Complex *ptr;

    
    ptr = &num1;

    
    printf("Complex Number:\n");
    printf("Real Part: %.2f\n", ptr->real);
    printf("Imaginary Part: %.2f\n", ptr->imag);

    return 0;
}
