#include <stdio.h>

int eightyeight[88];
int stuff[12][10];

int main() {
    for (int x = 0; x < 88; x++) {
        eightyeight[x] = 88;
        printf(" %d", eightyeight[x]);
    }

    for (int x = 0; x < 12; x++) {
        for (int y = 0; y < 10; y++) {
            stuff[x][y] = 0;
            printf(" %d", stuff[x][y]);
        }
    }
}