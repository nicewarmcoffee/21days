/* Demonstrates unary operator prefix and postfix modes */
#include <stdio.h>

int a, b;

int main() {
    /* Set a and b both equal to 5 */
    a = b = 5;

    /* Print them, decrementing each time */
    /* Use prefox mode for b, postfix mode for a */

    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);

    return 0;
    }
