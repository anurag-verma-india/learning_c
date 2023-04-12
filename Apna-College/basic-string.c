#include <stdio.h>

void printString(char arr[]);

void main() {
    char firstName[20], lastName[20];
    printf("Enter your first name: ");
    fgets(firstName, 20, stdin);

    printf("Enter your last name: ");
    fgets(lastName, 20, stdin);

    printString(firstName);
    
    printString(lastName);
}


void printString(char arr[]) {
    for (int i=0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
}

// 7 42 00