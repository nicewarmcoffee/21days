/* Demonstrates the getchar() function */

#include <stdio.h>

int main() {
    int ch;

    while ((ch = getchar()) != '\n')
        putchar(ch);
}