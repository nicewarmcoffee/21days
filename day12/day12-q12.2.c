/* Illustrates variable scope */

#include <stdio.h>

void print_value(int x);

int main() {
    int x = 999;

    printf("%d", x);
    print_value(x);
}

void print_value(int x) {
    printf("%d", x);
}