#include <stdio.h>

int main() {
    int aadhar[5];

    // Taking input
    for(int i=0; i<5; i++) {
        int *ptr = &aadhar[0];
        printf("%d index: ", i);
        scanf(" %d", (ptr + i));
    }

    printf("\n");

    // Printing Output
    for(int i=0; i<5; i++) {
        int *ptr = &aadhar[0];
        printf("%d index: %d\n", i, *(ptr + i));
    }
}