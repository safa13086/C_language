#include<stdio.h>
void main(){
	int number;
	
	do{
		printf("enter a number:");
		scanf("%d",& number);
		
		if (number%7==0){
			break;
		}
	}while(number%7!=0);
	printf("you entered an multiple of 7: %d \n",number);
}