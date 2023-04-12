#include <stdio.h>

enum week {MON = 2, TUE, WED, THU, FRI, SAT, SUN};

void main() {
    int i;
    enum week d;
    for(i = MON; i<=SUN;i++) {
        printf("%d", i);
    }
}