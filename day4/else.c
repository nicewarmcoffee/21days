/* Demonstrates the use of if statements */

#include <stdio.h>

int x, y;

main() {
    /* input the two values to be tested */

    printf("\nInput an integer value for x: ");
    scanf("%d", &x);
    printf("\nInput an integer value for y: ");
    scanf("%d", &y);

    /* test values and print result */

    if (x == y)
        printf("x is equal to y");

    else if (x > y)
        printf("x is greater than y");

    else
        printf("x is smaller than y");

    return 0;
    }
