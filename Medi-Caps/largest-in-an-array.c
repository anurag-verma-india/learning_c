#include <stdio.h>

void main() {
    int arr[100], *ptr, i, n, max;
    ptr = &arr[0];
    printf("Enter the size of array: ");
    scanf(" %d", &n);

    printf("Enter %d elements in the array\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    max = *ptr;
    for (i = 0; i < n; i++) {
        if (max < *(ptr + i)) {
            max = *(ptr + i);
        }
    }
    printf("The largest number is %d", max);
}