#include <stdio.h>

void hotOrCold(int temperature) {
    if (temperature >= 30) {
        printf("Hot!!!\n");
    } else {
        printf("Cold!!!\n");
    }
}

int main() {
    int temperature;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temperature);
    hotOrCold(temperature);
    return 0;
}
