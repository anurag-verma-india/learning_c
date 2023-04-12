#include <stdio.h>
#include <string.h>

union Student_union{
    // char name[10];
    int roll;
    float marks;
}u;

struct Student_struct{
    // char name[10];
    int roll;
    float marks;
}s;


void main() {
    printf("Memory allocation in structure: %lu\n", sizeof(s));
    printf("Memory allocation in union: %lu", sizeof(u));
}