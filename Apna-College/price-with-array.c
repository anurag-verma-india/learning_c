#include <stdio.h>

int main() {
    float price[3], final_price;
    printf("Enter the price of first item: ");
    scanf("%f", &price[0]);
    printf("Enter the price of second item: "); 
    scanf("%f", &price[1]);
    printf("Enter the price of third item: ");
    scanf("%f", &price[2]);

    final_price = price[0] + (0.18 * price [0]);

    // printf("Final cost of first item is %.2f", final_price);
    printf("Final cost of first item is %.2f\n", price[0] + (0.18 * price [0]));
    printf("Final cost of second item is %.2f\n", price[1] + (0.18 * price [1]));
    printf("Final cost of third item is %.2f\n", price[2] + (0.18 * price [2]));
    return 0;
}