#include<stdio.h>
void main(){
	int n,odd=0,even=0;
	printf("enter your number");
	scanf("%d",&n);
	while(n>0){
		if (n%2==0){
			printf("even %d\n",n);
			even++;
		}else{
			printf("odd %d\n",n);
			odd++;
		}
	n--;	
	}
	printf("Even %d\nOdd %d",even,odd);
}