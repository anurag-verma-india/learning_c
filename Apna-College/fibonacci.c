#include <stdio.h>

void main() {
    int n;
    
    printf("Enter the number of fibonacci numbers to calculate: ");
    scanf(" %d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    printf("%d\t", fib[0]);
    printf("%d\t", fib[1]);
    
    for( int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t", fib[i]);
    }
}

// 7:14:53