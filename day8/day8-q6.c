#include <stdio.h>

int array[10];
int x = 1;

int main() {
    for (x = 0; x < 10; x++) {
        array[x] = 99;
        printf("%d ", array[x]);
    }
}