/* Demonstrates the sizes of multidimensional array elements. */

#include <stdio.h>

int multi[2][4];

int main() {
    printf("\nThe size of multi = %zu", sizeof(multi));
    printf("\nThe size of multi[0] = %zu", sizeof(multi[0]));
    printf("\nThe size of multi[0][0] = %lu", sizeof(multi[0][0]));

    /*
    from u/jedwardsol's comment:

    %lu prints an unsigned long. %zu prints a size_t

    size_t may not be the same size as an unsigned long.
    And it may not be the same size as an int.
    (But it is very likely to be the same size as one of them).
    %zu knows the size so you don't need to choose between %u and %lu

    In other words - the compiler is suggesting %lu as being correct for your platform
    but if you compiled on a different computer then %lu may not be right there. %zu is always right.
    */
}