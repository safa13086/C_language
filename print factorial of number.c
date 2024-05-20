#include<stdio.h>
// print factorial of n
void main(){
	int n,factorial=1;
	printf("enter a number:");
	scanf("%d",& n);
	
	for (int i=n;i>=1;i--){
		factorial*=i;
	}
	printf("factorial of %d is %d \n",n,factorial);
}