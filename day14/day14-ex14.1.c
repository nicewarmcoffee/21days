/* Demonstrates the equivalence of stream input and output */
#include <stdio.h>

int main() {
    char buffer[81];

    /* input a line, then immediately output it */

    puts(fgets(buffer, 81, stdin));
}