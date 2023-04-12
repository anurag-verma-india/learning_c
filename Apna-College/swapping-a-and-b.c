#include <stdio.h>

void swap(int* a, int* b);

int main() {
    int num1, num2;
    num1 = 0;
    num2 = 1;
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("num1 = %d, num2 = %d", num1, num2);

    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}