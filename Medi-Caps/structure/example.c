#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[20];
    float marks;
} s;

void main() {
    printf("Enter your name: ");
    // scanf(" %s", s.name);
    // scanf(“%[^\n]%*c”, s.name);
    scanf(" %[^\n]s", s.name);
    // fgets(s.name, 20, stdin);
    printf("Enter your roll number: ");
    scanf(" %d", &s.roll);
    printf("Enter your marks: ");
    scanf(" %f", &s.marks);

    printf("\nStudent Detail:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}