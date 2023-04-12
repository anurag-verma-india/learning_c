#include <stdio.h>

int main() {
    int i, cCount = 0, vCount = 0;
    char str[20];
    char *ptr;

    printf("Enter any string: ");
    gets(str);
    ptr = str;
    // for(i=0; *ptr != '\0'; i++)
    while (*ptr != '\0')
    {
        ptr = str + i;
        // printf("%c\n", *ptr);
        printf("str[%d] = %c\n", i, str[i]);
        if ( *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
            vCount++;
        } else {
            cCount++;
        }
        i++;
    }
    printf("No. of vowels = %d\n", vCount);
    printf("No. of consonants = %d\n", cCount);
    return 0;
}