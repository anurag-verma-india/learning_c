#include <stdio.h>
#include <stdlib.h>

void main() {
    int *ptr;
    int i, n;
    printf("Enter number of variables for memory allocation: ");
    scanf(" %d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Not done");
        exit(0);
    } else {
        printf("Memory allocation done successfully\n");
        // printf("Size of ptr %lu", sizeof(ptr));
    }
}