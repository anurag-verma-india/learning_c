#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;

    printf("%p\n", &age);
    printf("%u\n", &age);
    return 0;
}