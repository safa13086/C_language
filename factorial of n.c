#include<stdio.h>
// factorial of n
int fact(int n);
int main(){
	int factorial;
	printf("Enter a number:");
	scanf("%d",&factorial);
	printf("factorial is : %d",fact(factorial));
	return 0;
}
int fact(int n){
	if (n==1){
		return 1;
	}
	int factNm1=fact(n-1);
	int factN=factNm1*n;
	return factN;
}