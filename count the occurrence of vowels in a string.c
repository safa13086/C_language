#include <stdio.h>
#include <string.h>

// Function to count vowels in a string
void countVowels(char str[]) {
    int count[5] = {0}; // Array to store counts of vowels (a, e, i, o, u)

    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i]; // Current character in the string

        // Check if character is a vowel (both lowercase and uppercase)
        if (ch == 'a' || ch == 'A') {
            count[0]++;
        } else if (ch == 'e' || ch == 'E') {
            count[1]++;
        } else if (ch == 'i' || ch == 'I') {
            count[2]++;
        } else if (ch == 'o' || ch == 'O') {
            count[3]++;
        } else if (ch == 'u' || ch == 'U') {
            count[4]++;
        }
    }

    // Display the counts
    printf("Occurrences of vowels:\n");
    printf("a: %d\n", count[0]);
    printf("e: %d\n", count[1]);
    printf("i: %d\n", count[2]);
    printf("o: %d\n", count[3]);
    printf("u: %d\n", count[4]);
}

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    // Function call to count vowels
    countVowels(str);

    return 0;
}
