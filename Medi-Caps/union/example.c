#include <stdio.h>
#include <string.h>

union Student{
    char name[20];
    int roll;
    float marks;
}u;

void main() {
    printf("Enter your Name: ");
    scanf(" %[^\n]s", u.name);
    printf("Enter your roll number: ");
    scanf(" %d", &u.roll);
    printf("Enter your marks: ");
    scanf(" %f", &u.marks);

    printf("\nStudent Details: \n");
    printf("Name: %s\n", u.name);
    printf("Roll No.: %d\n", u.roll);
    printf("Marks: %.2f\n", u.marks);

    printf("\nShowing individual Information\n");
    strcpy(u.name, "Anruag Verma");
    printf("Name: %s\n", u.name);
    u.roll = 12;
    printf("Roll Number: %d\n", u.roll);
    u.marks = 99;
    printf("Marks: %.2f\n", u.marks);
}