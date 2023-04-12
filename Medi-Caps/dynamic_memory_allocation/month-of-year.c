#include <stdio.h>

enum year {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

void main() {
    int i;
    enum year d;
    for(i=Jan; i<=Dec; i++) {
        printf(" %d", i);
    }
}