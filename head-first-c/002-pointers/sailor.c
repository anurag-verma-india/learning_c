#include <stdio.h>

void go_south_east(int *lat, int *lon) {
    *lat += 1;
    *lon -= 1;
}

int main() {
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude, &longitude);

    printf("Avast! Now at [%d, %d]\n", latitude, longitude);
    printf("%i", sizeof(int));
    return 0;
}
