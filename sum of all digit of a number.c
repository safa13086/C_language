#include<stdio.h>
// print the sum of all digit of a number
int sumDigit(int n);
int main(){
	int num;
	printf("enter your number:");
	scanf("%d",&num);
	printf("sum of digit: %d\n",sumDigit(num));
	return 0;
}
int sumDigit(int n){
	int sum=0;
	while (n!=0){
		int digit=n%10;
		sum=sum+digit;
		n=n/10;
	}
	return sum;
}