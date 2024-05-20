#include<stdio.h>
// keep taking number as input until user enters an odd number
void main(){
	int number;
	
	do{
		printf("enter a number:");
		scanf("%d",& number);
		
		if (number%2!=0){
			break;
		}
	}while(number%2==0);
	printf("you entered an odd number %d \n",number);
}