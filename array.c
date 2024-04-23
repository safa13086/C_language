#include<stdio.h>
void main(){
	int arr[5],num;
	for (int i=0;i<6;i++){
		printf("enter your number:");
		scanf("%d",&num);
		arr[i]=num;
		
	}
	for (int j=0;j<6;j++){
		printf("%d\n",arr[j]);
	}
}
