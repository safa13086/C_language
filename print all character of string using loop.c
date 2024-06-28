#include <stdio.h>

int main() {
    char firstname[] = "Safa";
    char lastname[] = "Ekhlaque";
    
    printf("First Name: %s\n", firstname);
    printf("Last Name: %s\n", lastname);
    
    printf("Printing characters in first name:\n");
    for (int i = 0; firstname[i] != '\0'; i++) {
        printf("%c ", firstname[i]);
    }
    printf("\n");
    
    printf("Printing characters in last name:\n");
    for (int i = 0; lastname[i] != '\0'; i++) {
        printf("%c ", lastname[i]);
    }
    printf("\n");
    
    return 0;
}
