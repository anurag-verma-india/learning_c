// Write a program to print a string using pointer
// (Write the output with pencil)
// #include <string.h>
#include <stdio.h>

int main() {
    int i;
    char str[20];
    char *ptr;

    printf("Enter any string: ");
    gets(str);
    ptr = str;
    // for(i=0; *ptr != '\0'; i++)
    for(i=0; ptr[i] != '\0'; i++)
    {
        printf("str[%d] = %c\n", i, *(ptr+i));
    }
    return 0;
}