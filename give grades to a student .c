#include<stdio.h>
//Give grades to a student.
void main(){
	int marks;
	printf("Enter your marks:");
	scanf("%d",& marks);
	
	if (marks<30){
		printf("C grade!!! \n");
	}
	else if (marks>=30 && marks<70){
		printf("B grade!!! \n");
	}
	else if (marks>=70 && marks<90){
		printf("A grade!!! \n");
	}
	else if (marks>=90 && marks<=100){
		printf("A+ grade!!! \n");
	}
	printf("CONGRATULATION!!!");
}