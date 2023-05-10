/* Demonstrates printing extended ASCII characters */

#include <stdio.h>

unsigned char x; /* Must be unsigned for extended ASCII */

int main() {
    /* Print extended ASCII characters 80 through 203 */

    for (x = 180; x < 204; x++) {
        printf("\nASCII code %d is character %c", x, x);
    }
}