#include <stdio.h>
#include <string.h>

struct Student{
    char name[20];
    int roll;
    float marks;
}s;

void main() {
    struct Student s[3];
    int i;

    for (i=0; i<3; i++) {
        printf("\nEnter student %d name: ", i+1);
        scanf(" %[^\n]s", s[i].name);
        printf("Enter student %d roll number: ", i+1);
        scanf(" %d", &s[i].roll);
        printf("Enter student %d marks: ", i+1);
        scanf(" %f", &s[i].marks);
    }

    for (i=0; i<3; i++) {
        printf("\nStudent %d Details: \n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }
}