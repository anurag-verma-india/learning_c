#include <stdio.h>

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; i++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                // printf("%d\n", 0);
            }
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    // printf("pointArray");
}

int main()
{

    int array[] = {9, 6, 7, 8, 3, 5, 4, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);
    // printf("%d\n", array[1]);

    sort(array, size);

    printArray(array, size);

    return 0;
}