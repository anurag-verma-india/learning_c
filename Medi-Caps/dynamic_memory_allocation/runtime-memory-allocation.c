#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

void main() {
    // clrscr();
    int *ptr, i, sum = 0;
    ptr = (int *)malloc(2 * sizeof(int));
    printf("Enter any 2 numbers:\n");
    for(i = 0; i < 2; i++) {
        scanf("%d", ptr+i);
        sum = sum + *(ptr+i);
    }
    printf("The sum of 2 numbers is: %d", sum);
    // getch();
}