#include <stdio.h>

typedef struct student {
    char name[100];
    int roll;
    float cgpa;
} st;


void main() {
    st st1 = {"Anruag", 18, 8.8};

    printf("%s", st1.name);
}