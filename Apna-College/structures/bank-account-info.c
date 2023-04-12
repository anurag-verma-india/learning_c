#include <stdio.h>

typedef struct accountDetails {
    char name[100];
    int account;
}bd;

void main() {
    bd abc = {"Anurag Verma", 123};

    printf("Name: %s\nAccount number %d", abc.name, abc.account);
}