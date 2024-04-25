#include<stdio.h>
void SimpleIntrest(){
	int p,r,t,si,to;
	printf("Enter principal value:");
	scanf("%d",&p);
	printf("Enter rate value:");
	scanf("%d",&r);
	printf("Enter time value:");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("simple intrest:\t%d",si);
	to=p+si;
	printf("\namount:\t%d",to);
}
void main(){
	SimpleIntrest();
}