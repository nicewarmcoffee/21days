#include <stdio.h>
#include <stdlib.h>

int numbers[5][4];

int main() {
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 4; y++) {
           numbers[x][y] = rand();
           printf("%d ", numbers[x][y]);
        }
        printf("\n");
    }
}