#include <stdio.h>


struct Address {
    char houseNo[20];
    char block[20];
    char city[50];
    char state[50];
};

int main() {
    
    struct Address addresses[5];
    
    for (int i = 0; i < 5; ++i) {
        printf("Enter details for person %d:\n", i + 1);
        printf("House Number: ");
        scanf("%19s", addresses[i].houseNo); 
        printf("Block: ");
        scanf("%19s", addresses[i].block);
        printf("City: ");
        scanf("%49s", addresses[i].city); 
        printf("State: ");
        scanf("%49s", addresses[i].state); 
    }

    
    printf("\nEntered Addresses:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Person %d:\n", i + 1);
        printf("House Number: %s\n", addresses[i].houseNo);
        printf("Block: %s\n", addresses[i].block);
        printf("City: %s\n", addresses[i].city);
        printf("State: %s\n\n", addresses[i].state);
    }

    return 0;
}
