#include<stdio.h>
// check if a student passed or failed.
void main(){
	int marks;
	printf("Enter your marks:");
	scanf("%d",& marks);
	
	if (marks>30){
		printf("Passed!!!!");
	}
	else{
		printf("Failed!!!");
	}
}