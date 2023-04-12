#include <stdio.h>
#include <string.h>

char salting(char password[]);

void main() {
    char password[100];
    printf("Enter your password: ");
    scanf(" %s", &password);
    salting(password);
}

char salting(char password[]) {
    char newPassword[200];
    strcpy(newPassword, password);
    strcat(newPassword, "123");
    printf("%s", newPassword);
}