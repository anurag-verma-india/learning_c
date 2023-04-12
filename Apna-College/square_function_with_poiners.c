#include <stdio.h>

void square(int* n);

int main() {
    int number = 5;
    square(&number);
    printf("%d", number);
    return 0;
}

void square(int* n) {
    *n = (*n) * (*n);
}