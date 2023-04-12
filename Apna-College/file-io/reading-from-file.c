#include <stdio.h>

void main() {
    FILE *fptr;
    int in;
    fptr = fopen("Test.txt", "r");

    fscanf(fptr, "%c", &in);
    printf("Integer = %c\n", in);
    fscanf(fptr, "%c", &in);
    printf("Integer = %c\n", in);
    fscanf(fptr, "%c", &in);
    printf("Integer = %c\n", in);
    fclose(fptr);
}

// 9 43 00