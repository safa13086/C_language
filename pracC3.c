#include<stdio.h>
void main(){
	int number;
	printf("enter your number\t");
	scanf("%d",&number);
	if(number<=10){
		printf("number lies btw 0 to 10");
		
	}else{
		printf("number is greater than 10");
	}
}