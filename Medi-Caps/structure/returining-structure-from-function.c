#include <stdio.h>

struct Student{
    char name[20];
    int roll;
    float marks;
}s;

struct Student display();

void main() {
    struct Student s;
    s = display(); printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll No.: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

struct Student display() {
    struct Student s1;
    printf("Enter your name: ");
    scanf(" %[^\n]s", s1.name);
    printf("Enter your roll number: ");
    scanf(" %d", &s1.roll);
    printf("Enter your marks: ");
    scanf(" %f", &s1.marks);

    return s1;
}