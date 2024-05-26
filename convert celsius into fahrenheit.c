#include<stdio.h>
// convert celsius to fahrenheit
float convertTemp(float celsius);
int main(){
	float far;
	printf("Enter temperature:");
	scanf("%f",&far);
	printf("fahrenheit temperature is: %f",convertTemp(far));
	return 0;
}
float convertTemp(float celsius){
	float far=celsius*9/5;
	return far;
}