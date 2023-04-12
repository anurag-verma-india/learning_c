#include <stdio.h>

void main() {
    int arr[100], *ptr, i, n, sum = 0;
    ptr = &arr[0];
    printf("Enter the size of array: ");
    scanf(" %d", &n);

    printf("Enter %d elements in the array\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
        sum = sum + *(ptr + i);
    }
    printf("Sum of elements is %d", sum);
}