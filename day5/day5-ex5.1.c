/* demonstrates a simple function */
#include <stdio.h>

long cube(long x);

long input, answer;

main() {
    printf("Enter an integer value: ");
    scanf("%d", &input);
    answer = cube(input);
    /* Note: %ld is the conversion specified for
    a long integer */

    printf("\n\nThe cube of %ld is %ld", input, answer);
}

long cube(long x) {

    long x_cubed;

    x_cubed = x * x * x;
    return x_cubed;
}
