/* Illustrates variable scope */

#include <stdio.h>

void print_value(void);

int main() {
    int x = 999;

    printf("%d", x);
    print_value();
}

void print_value(void) {
    printf("%d", x); /* fails due to x not in this scope */
}