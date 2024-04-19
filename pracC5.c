#include<stdio.h>
void main(){
	int number1,number2,opration,sum,sub,mul,div;
	while(1){
	printf("\nenter your first number");
	scanf("%d",&number1);
	
	printf("\nenter your second number");
	scanf("%d",&number2);
	
	printf("press 1 +\npress 2 -\npress 3*\npress 4/\npress 5 exit\nEnter your opration");
	scanf("%d",&opration);
	
	switch(opration){
		case 1:
			sum=number1+number2;
			printf("sum of given number is %d",sum);
			break;
		case 2:
			sub=number1-number2;
			printf("sub of given number is %d",sub);
			break;
		case 3:
			mul=number1*number2;
			printf("mul of given number is %d",mul);
			break;
		case 4:
			div=number1/number2;
			printf("div of given number is %d",div);
			break;
		case 5:
			printf("Thank you");
			return 0;
		default:
			printf("error input");
			break;
			
	}
		
	}
}