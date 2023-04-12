#include <stdio.h>

struct Student{
    char name[20];
    int roll;
    float marks;
};
void display(struct Student s1);

void main() {
    struct Student s;
    printf("\nEnter student name: ");
    scanf(" %[^\n]s", s.name);
    printf("Enter student roll number: ");
    scanf(" %d", &s.roll);
    printf("Enter student marks: ");
    scanf(" %f", &s.marks);

    display(s);
}
void display(struct Student s1) {
    printf("\nStudent Details: \n");
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
}