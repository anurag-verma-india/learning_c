#include <stdio.h>

void sum_product_average(int a, int b, int *sum, int *product, float *average);

int main() {
    int sum, product;
    float average;
    int num1 = 3, num2 = 5;

    sum_product_average(num1, num2, &sum, &product, &average);

    printf("Sum = %d\nProduct = %d\nAverage = %f\n", sum, product, average);
    return 0;
}

void sum_product_average(int a, int b, int *sum, int *product, float *average){
    *sum = a + b;
    *product = a * b;
    *average = (a + b) / 2;
}