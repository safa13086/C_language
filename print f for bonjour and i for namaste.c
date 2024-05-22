#include<stdio.h>
// print NAMASTE if user enters Indian and print BONJOUR if user enters French
void printNamaste();
void printBonjour();

void main(){
	char ch;
	printf("enter F for FRENCH and enter I for INDIAN :");
	scanf("%c",&ch);
	
	if (ch == 'F'){
		printBonjour();
	}
	else {
		printNamaste();
	}

}
void printNamaste(){
	printf("NAMASTE!! \n");
}
void printBonjour(){
	printf("BONJOUR!! \n");
}