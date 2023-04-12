#include <stdio.h>

struct Student{
    char name[20];
    int roll;
    float marks;
};

void main() {
    int i;
    struct Student s, *ptr;
    ptr = &s;


    printf("\nEnter student name: ");
    scanf(" %[^\n]s", &ptr->name);
    printf("Enter student roll number: ");
    scanf(" %d", &ptr->roll);
    printf("Enter student marks: ");
    scanf(" %f", &ptr->marks);

    printf("\nStudent Details: \n");
    printf("Name: %s\n", ptr->name);
    printf("Roll number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
}