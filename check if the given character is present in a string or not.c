#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "hello";
    char ch = 'r'; // Use single quotes for character literals

    if (strchr(str, ch) != NULL) { // Compare with NULL instead of "\0"
        printf("Character '%c' found in the string '%s'\n", ch, str);
    } else {
        printf("Character '%c' not found in the string '%s'\n", ch, str);
    }
    
    return 0;
}
