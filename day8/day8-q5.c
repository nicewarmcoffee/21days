#include <stdio.h>

int x, y;
int array[3][10];

int main() {
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 10; y ++) {
            array[x][y] = 0;
            printf("%d ", array[x][y]);
        }
        printf("\n");
    }
}