#include <string.h>
#include <stdio.h>

typedef struct address{
    char name[100];
    int house_no;
    int block_no;
    char city[100];
    char state[100];
} add;

void main() {
    add address[5];
    strcpy(address[0].name, "Anurag Verma");
    address[0].house_no = 1;
    address[0].block_no = 1;
    strcpy(address[0].city, "Indore");
    strcpy(address[0].state, "Madhya Pradesh");
    printf("Name: %s\nHouse no. %d\nBlock No.: %d\nCity: %s\nState: %s\n", address[0].name, address[0].house_no, address[0].block_no, address[0].city, address[0].state);
}

// 09 08 00