#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    printf("Enter your name: ");
    scanf("%[^\n]s", str);
    printf("You have entered ");
    puts(str);
    return 0;
}