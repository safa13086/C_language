#include <stdio.h>
float calculateper(int science, int math, int sanskrit);

int main() {
    int science, math, sanskrit;
    printf("Enter your science marks: ");
    scanf("%d", &science);
    printf("Enter your maths marks: ");
    scanf("%d", &math);
    printf("Enter your sanskrit marks: ");
    scanf("%d", &sanskrit);
    
    printf("Percentage is: %.2f%%\n", calculateper(science, math, sanskrit));
    return 0;
}
float calculateper(int science, int math, int sanskrit) {
    return ((float)(science + math + sanskrit) / 3.0);
}
