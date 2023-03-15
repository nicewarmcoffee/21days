/* Demonstrates a simple while statement */

#include <stdio.h>

int count;

main() {
    /* Print the numbers 1 through 20 */

    count = 1;

    while (count <= 20) {
        printf("\n%d", count);
        count++;
    }
}