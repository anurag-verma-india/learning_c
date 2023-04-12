#include <stdio.h>

typedef struct student {
    char name[100];
    int roll;
    float cgpa;
} st;

void main() {
    st s1 = {"Anurag Verma", 18, 8};
    st *ptr;
    ptr = &s1;

    // printf("Name of student is %s", (*ptr).name);
    printf("Name of student is %s", ptr -> name);
} 