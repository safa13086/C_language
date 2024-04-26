#include<stdio.h>
void sum(int a ,int b){
	int c=a+b;
	printf("sum\t%d",c);
}
void sub(int a,int b){
	int c=a-b;
	printf("sub\t%d",c);
}
void mul(int a,int b){
	int c=a*b;
	printf("mul\t%d",c);
}
void div(int a,int b){
	int c=a/b;
	printf("div\t%d",c);
}
void main(){
	int x,y,opretion;
	printf("WELCOME!!\nCALCULATOR USING FUNCTION AND SWITCH CASE");
	printf("\nEnter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Divition");
	printf("\nEnter your opretion:");
	scanf("%d",&opretion);
	if(opretion>4){
		printf("You Enter A Wrong Opretion!!");
	}
	else{
		printf("\nEnter your 1st numbers:");
	    scanf("%d",&x);
	    printf("\nEnter your 2nd number:");
	   	scanf("%d",&y);
	
		switch (opretion){
			case 1:
				sum(x,y);
				break;
			case 2:
				sub(x,y);
				break;
			case 3:
				mul(x,y);
				break;
			case 4:
				div(x,y);
				break;
					  
	}
	}
	
	
}