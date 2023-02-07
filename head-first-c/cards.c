/* Program to evaluate face values*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int card_count = 0;
        while (card_name[0] != 'X') {
        printf("Enter the card name: ");
        scanf("%2s", card_name);
        int val = 0;
        switch (card_name[0]) {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(card_name);
                if (val < 1) {
                    printf("I don't understand\n");
                } else if ((val > 10) && (card_name[0] != 'A')) {
                    printf("I don't understand\n");
                }
        }
        if ((val > 2) && (val < 7))
            card_count++;
        else if (val == 10)
            card_count--;
        printf("Current count: %d\n", card_count);
        }
    return 0;
}
