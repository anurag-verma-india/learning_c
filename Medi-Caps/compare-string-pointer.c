#include <stdio.h>
#include <string.h>

void main() {
    char str1[20], str2[20];
    char *ptr1, *ptr2;
    int val;
    
    printf("Enter first string: ");
    scanf(" %s", str1);
    printf("Enter second string: ");
    scanf(" %s", str2);
    ptr1 = &str1[0];
    ptr2 = &str2[0];
    val = strcmp(ptr1, ptr2);
    if (val == 0) {
        printf("Both strings are equal");
    } else {
        printf("Strings are not equal");
    }
}