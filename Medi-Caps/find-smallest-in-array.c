#include <stdio.h>

// void main() {
//     int arr[100], i, n, *min;
//     // ptr = &arr[0];
//     printf("Enter the size of array: ");
//     scanf(" %d", &n);

//     printf("Enter %d elements in the array\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", arr[i]);
//     }

//     min = &arr[0];
//     for (i = 0; i < n; i++) {
//         if (*min > *(arr + i)) {
//             *min = *(arr + i);
//         }
//     }
//     printf("The smallest number is %d", *min);
// }
// // #include <stdio.h>

void main() {
    int arr[100], *ptr, i, n, min;
    ptr = &arr[0];
    printf("Enter the size of array: ");
    scanf(" %d", &n);

    printf("Enter %d elements in the array\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    min = *arr;
    for (i = 0; i < n; i++) {
        if (min > *(ptr + i)) {
            min = *(ptr + i);
        }
    }
    printf("The smallest number is %d", min);
}