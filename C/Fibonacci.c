#include <stdio.h>

int main(void) {
    int terms;
    int x = 0;
    int y = 1;
    int z = 0;
    int terms = 10;
    for (int i = 0; i < terms; i++) {
        printf("%i ", x);
        z = x;
        x = y;
        y += z;
    }
    printf("\n");
}
