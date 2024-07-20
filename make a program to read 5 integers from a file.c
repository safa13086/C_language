#include<stdio.h>
//make a program to read 5 integers from the file
int main(){
	FILE *fptr;
	fptr=fopen("test.txt","r");
	int n;
	fscanf(fptr,"%d",&n);
	printf("1st number: %d\n",&n);
	fscanf(fptr,"%d",&n);
	printf("2nd number: %d\n",&n);
	fscanf(fptr,"%d",&n);
	printf("3rd number: %d\n",&n);
	fscanf(fptr,"%d",&n);
	printf("4th number: %d\n",&n);
	fscanf(fptr,"%d",&n);
	printf("5th number: %d\n",&n);
	fclose(fptr);
	return 0;
	
}