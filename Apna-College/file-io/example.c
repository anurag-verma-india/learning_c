#include <stdio.h>

void main() {
    FILE *fptr;
    fptr = fopen("NewTest.txt", "w");
    if (fptr == NULL) {
        printf("File doesn't exist");
    } else {
        fclose(fptr);
        printf("File exists");
    }
}   