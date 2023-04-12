#include <stdio.h>

void main() {
    int i, j, row, columns, a[100][100], sum = 0;
    printf("Enter the number of rows: ");
    scanf(" %d", &row);
    printf("Enter the number of columns: ");
    scanf(" %d", &columns);
    printf("Enter the values\n");
    // for (i = 0; i < row; i++) {
    //     for (j = 0; j < columns; j++) {
    //     }
    // }
    // printf("\nThe values are: \n");
    // for (i = 0; i < row; i++) {
    //     for (j = 0; j < columns; j++) {
    //         printf("%d ", *(*(a+i)+j));
    //     }
    //     printf("\n");
    // }
    for (i = 0; i < row; i++) {
        for (j = 0; j < columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", (*(a+i)+j));
            sum+= *(*(a+i)+j);
        }
    }
    printf("Sum of elements = %d", sum);
}