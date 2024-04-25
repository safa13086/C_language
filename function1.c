#include<stdio.h>
void message(){
	printf("\nHello Guys");
}
void sum(int a,int b){
	int c=a+b;
	printf("Sum:\t%d",c);
}
int sub(int a,int b){
	int d=a-b;
	return d;
}
void main(){
	int x,y;
	printf("Enter Numbers");
	scanf("%d %d",&x,&y);
	sum(x,y);
	int v=sub(x,y);
	printf("\nSub %d",v);
	message();
}