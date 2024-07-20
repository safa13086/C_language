#include<stdio.h>
//check if a file exists before reading from it
int main(){
	FILE *fptr;
	fptr=fopen("newtest.txt","r");
	if (fptr == NULL){
		printf("file doesnot exist");
	}else{
		fclose(fptr);
	}
}