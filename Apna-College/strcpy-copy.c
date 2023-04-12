#include <string.h>
#include <stdio.h>


void main() {
    char str1[] = "Hello";
    // char str2[] = "World";
    char str2[] = "Hello";
    // strcpy(str2, str1);
    // strcat(str2, str1);
    // printf("%s", str2);
    printf("%d", strcmp(str1, str2));
}