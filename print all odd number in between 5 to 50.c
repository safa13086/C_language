#include<stdio.h>
// print all odd numbers in between 5 to 50
void main(){
	for (int i=5;i<=50;i++){
		if (i%2==0){
			continue;
		}
		printf("%d \n",i);
	}
} 