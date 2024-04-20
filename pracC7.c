#include<stdio.h>
void main(){
	int i=10,j,tab;
	printf("enter a number for table");
	scanf("%d",&j);
	while(i>0){
		tab=j*i;
		printf("%d X %d = %d\n",j,i,tab);
		i--;
	}	
}