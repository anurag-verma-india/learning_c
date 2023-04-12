#include <stdio.h>

struct complex {
    int real;
    int img;
};

void main() {
    struct complex c1 = {1,1};
    struct complex *ptr;
    ptr = &c1;

    printf("img part = %d\n", ptr -> img);
    printf("real part = %d\n", ptr -> real);
}

// 9 16 00