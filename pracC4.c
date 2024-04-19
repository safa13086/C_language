#include<stdio.h>
void main(){
	int number;
	printf("enter a number");
	scanf("%d",&number);
	if (number<10){
		printf("number lies btw 0 to 10");
	} else if (number<20 && number>10){
		printf("number lies btw 10 to 20");
	} else if (number<30 && number>20){
		printf("number lies btw 20 to 30");
	} else{
		printf("number is greater than 30");
	}
}