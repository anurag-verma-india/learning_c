#include <stdio.h>
#include <string.h>

void slice(char str[], int n, int m);

void main() {
    char string[] = "HelloWorld";
    slice(string, 3, 6);
}

void slice(char str[], int n, int m) {
    char newStr[100];
    int i;
    for(int i=n; i<=m; i++) {
        newStr[i-n] = str[i];
    }
    puts(newStr);
    newStr[i + 1] = '\0';
}