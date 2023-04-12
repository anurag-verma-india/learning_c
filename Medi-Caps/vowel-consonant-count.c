#include <stdio.h>

int main() {
    int i, cCount = 0, vCount = 0;
    char str[20];
    char *ptr;

    printf("Enter any string: ");
    gets(str);
    ptr = str;
    for(i=0; ptr[i] != '\0'; i++)
    {
        // printf("str[%d] = %c\n", i, *(ptr+i));
        if ( ptr[i] == 'A' || ptr[i] == 'E' || ptr[i] == 'I' || ptr[i] == 'O' || ptr[i] == 'U' || ptr[i] == 'a' || ptr[i] == 'e' || ptr[i] == 'i' || ptr[i] == 'o' || ptr[i] == 'u')
        {
            vCount++;
        } else {
            cCount++;
        }
    }
    printf("No. of vowels = %d\n", vCount);
    printf("No. of consonants = %d\n", cCount);
    return 0;
}