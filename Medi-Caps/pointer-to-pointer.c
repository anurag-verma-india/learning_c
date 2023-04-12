#include <stdio.h>

void main() {
    int **ptr2, *ptr1, a;
    printf("Enter the value of a: ");
    scanf(" %d", &a);
    ptr1 = &a;
    ptr2 = &ptr1;
    printf("Value of a is %d\n", *ptr1);
    printf("Address of a is %p\n", ptr1);
    printf("Value of *ptr1 is %d\n", *ptr1);
    printf("Value of **ptr2 is %d\n", **ptr2);
}