#include<stdio.h>
// average of three numbers
void main(){
	int first_number,second_number,third_number;
	printf("enter first number:");
	scanf("%d",& first_number);
	printf("enter second number:");
	scanf("%d",& second_number);
	printf("enter third number:");
	scanf("%d",& third_number);
	printf("average of the given three numbers %d",(first_number+second_number+third_number)/3);
}