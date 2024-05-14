#include<stdio.h>
// CALCULATING PERIMETER OF A RECTANGLE.
void main(){
	int a,b,perimeter;
	printf("Enter length of a rectangle:");
	scanf("%d",&a);
	printf("Enter breadth of a reatangle:");
	scanf("%d",&b);
	perimeter=2*(a+b);
	printf("perimeter of the rectangle is: %d",perimeter);
}