#include <stdio.h>
#include <string.h>

// int charCounter(char arr[]);

void main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, 100, stdin);
    int length = strlen(name);
    printf("Length of name is %d", length);
}

// int charCounter(char arr[]) {
//     int count = 0;
//     for (int i = 0; arr[i] != '\0'; i++) {
//         count++;
//     }
//     return count;
// }

// 7 53 29