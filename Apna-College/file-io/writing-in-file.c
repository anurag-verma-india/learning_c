#include <stdio.h>

void main() {
    FILE *fptr;
    int in;
    fptr = fopen("Test.txt", "r");

    // fprintf(fptr, "%s", "Mango");

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));

    fclose(fptr);
}