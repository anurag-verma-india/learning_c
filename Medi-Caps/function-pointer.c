#include <stdio.h>

int add(int, int);

void main() {
    int a, b, sum;
    int (*ptr)(int, int);
    // int (*ptr)(int, int) = add;
    ptr = add;
    printf("Enter two numbers: ");
    scanf(" %d %d", &a, &b);
    sum = (*ptr)(a, b);
    printf("The result is %d", sum);
}

int add(int x, int y) {
    return x+y;
}   