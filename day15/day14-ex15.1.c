/* Demonstrates pointers and multidimensional arrays */

#include <stdio.h>

int multi[2][4];

int main() {
    printf("\nmulti = %p", multi);
    printf("\nmulti[0] = %p", multi[0]);
    printf("\nmulti[0][0] = %p", &multi[0][0]);

    /* note: %p is pointer address, will throw a type error if you try %d or %u */
}