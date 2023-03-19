#include <stdio.h>

int x, y;

int main() {
    for (x = 0; x < 10; x++) {
        for (y = 5; y > 0; y--) {
            puts("X");
        }
    }
}