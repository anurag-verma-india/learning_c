#include <string.h>
#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct Student stu);

void main() {
    // struct Student s1;
    // strcpy(s1.name, "Anurag Verma");
    // s1.roll = 12;
    // s1.cgpa = 8;
    // printf("%s, %d, %.0f\n", s1.name, s1.roll, s1.cgpa);

    // struct Student s2;
    // strcpy(s2.name, "A Person");
    // s2.roll = 13;
    // s2.cgpa = 7.7;
    // printf("%s, %d, %.0f", s2.name, s2.roll, s2.cgpa);

    // struct Student cse[100];

    // cse[0].roll = 0;
    // strcpy(cse[0].name, "Anurag Verma");
    // printf("%d, %s", cse[0].roll, cse[0].name);

    /////////////////////////////////////////////////////////////////////////////////////////////

    struct Student s1 = {"Anurag", 18, 9.9};

    struct Student *ptr = &s1;
    printInfo(s1);

    
}


void printInfo(struct Student stu) {
    printf("Student name =  %s\n", stu.name);
    printf("Student roll no. =  %d\n", stu.roll);
    printf("Student cgpa =  %.2f\n", stu.cgpa);
}

// 8 44 00


