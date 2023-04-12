#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    // clrscr();
    int *ptr;
    
    ptr = NULL;
    ptr = realloc(ptr, 10);
    if (ptr != NULL) {
        printf("Memory reallocated successfully");
    } else {
        printf("Memory not reallocated");
    }
    return 0;
}