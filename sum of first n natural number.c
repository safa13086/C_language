#include<stdio.h>
// print sum of first n natural number by recursion
int sum(int n);
int main(){
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	printf("sum is %d",sum(number));
	return 0;
}
int sum(int n){
	if (n==1){
		return 1;
	}
	int sumNm1 = sum(n-1);
	int sumN = sumNm1 + n;
	return sumN;
}