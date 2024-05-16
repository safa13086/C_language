#include<stdio.h>
// LOGICAL OPERATORS
// TRUE=1
// FALSE=0
void main(){
	printf("1 = TRUE\n");
	printf("2 = FALSE\n");
	// IF IT'S SUNDAY AND IT'S RAINING-TRUE
	int issunday=1;
	int israining=1;
	printf("%d \n", issunday && israining);
	
	// IF IT'S MONDAY OR IT'S RAINING-TRUE
	int ismonday=0;
	int is_raining=1;
	printf("%d \n", ismonday || israining);
	
	// IF A NUMBER IS GREATER THAN 9 AND SMALLER THAN 100-TRUE
	int number;
	printf("enter a number:");
	scanf("%d",& number);
	printf("%d \n", number>9 && number<100);
} 
