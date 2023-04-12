#include <stdio.h>

float add(float, float);
float sub(float, float);
float mul(float, float);
float division(float, float);

void main() {
    float a, b, result;
    float (*ptr[5]) (float, float);
    ptr[0] = add;
    ptr[1] = sub;
    ptr[2] = mul;
    ptr[3] = division;

    printf("Enter two numbers: ");
    scanf(" %f %f", &a, &b);
    for (int i = 0; i < 4; i++) {
        printf("Result of ptr[%d] is %.2f\n", i, (*ptr[i])(a, b));
    }
}

float add(float x, float y) {return x+y;}
float sub(float x, float y) {return x-y;}
float mul(float x, float y) {return x*y;}
float division(float x, float y) {return x/y;}