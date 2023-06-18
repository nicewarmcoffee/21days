/* Illustrates variable scope */

#include <stdio.h>

int x = 999;

void print_value(void);

int main() {
    extern int x;

    printf("%d", x);
    print_value();
}

void print_value(void) {
    extern int x;
    printf("%d", x); /* fails due to x not in this scope */
}