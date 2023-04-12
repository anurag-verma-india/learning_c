#include <stdio.h>

void main() {
    int arr[100], n, i;
    printf("Enter the size of array: ");
    scanf(" %d", &n);

    printf("Enter %d elements in the array\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    for (i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, *(arr + i));
    }
}