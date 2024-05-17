#include<stdio.h>
// print the smallest number
void main(){
	int num1,num2,num3;
	printf("enter first number:");
	scanf("%d",& num1);
	printf("enter second number:");
	scanf("%d",& num2);
	printf("enter third number:");
	scanf("%d",& num3);
	if (num1<num2 && num1<num3){
		printf("%d is the smallest number");	
	}
	else if (num2<num3 && num2<num1){
		printf("%d is the smallest number");
	}
	else if(num3<num2 && num3<num1){
		printf("%d is the smallest number");
	}
	else{
		printf("all numbers are same!!");
	}
}