#include <stdio.h>

void reverse(int arr[], int n);
void printArr(int arr[], int n);

void main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 7);
    printArr(arr, 7);
}


void reverse(int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        int firstNumber = arr[i];
        int secondNumber = arr[n-i-1];
        arr[i] = secondNumber;
        arr[n-i-1] = firstNumber;
    }
}


void printArr(int arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
}

// 07:11:56