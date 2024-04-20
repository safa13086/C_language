#include<stdio.h>
void main(){
	int i,j,tab;
	printf("enter a number for table");
	scanf("%d",&j);
	for (i=1;i<=10;i++){
		tab=j*i;
		printf("%d X %d = %d\n",j,i,tab);
	}
	
	
}