#include <stdio.h>
#include <string.h>

int vowelCount(char string[]);

void main() {
    char str[100];
    printf("Enter your string: ");
    fgets(str, 100, stdin);
    printf("Vowels: %d", vowelCount(str));
}

int vowelCount(char string[]) {
    int count;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'a' ||  string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
            count++;
        }
    }
    return count;
}