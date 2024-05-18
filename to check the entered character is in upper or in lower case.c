#include<stdio.h>
// To find if a character is entered by user is in upper or in lower case.
void main(){
	char ch;
	printf("Enter a character:");
	scanf(" %C", &ch);
	
	if (ch>='a' && ch<='z'){
		printf("The entered character is in lower case!!\n");
	}
	else if (ch>='A' && ch<='Z'){
		printf("The entered character is in upper case!!\n"); 
	}
	else{
		printf("The entered characteris not valid!!");
	}
} 