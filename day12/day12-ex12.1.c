/* Illustrates variable scope */

#include <stdio.h>

int x = 999;

void print_value(void);

int main() {
    printf("%d", x);
    print_value();
}

void print_value(void) {
    printf("%d", x);
}