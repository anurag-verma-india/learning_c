#include <stdio.h>

typedef struct student {
    char name[100];
    int roll;
    float cgpa;
} st;

void printInfo(st student);

void main() {
  st s1 = {"Anurag Verma", 18, 9};
  printInfo(s1);
} 

void printInfo(st student) {
    printf("Name: %s\n", student.name);
    printf("Name: %d\n", student.roll);
    printf("Name: %.2f\n", student.cgpa);
}

// 8 55 00