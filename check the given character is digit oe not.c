#include <stdio.h>
 // Check if the entered character is a digi
void main() {
    char ch;
	printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    }


}
