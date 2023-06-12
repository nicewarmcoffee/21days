/* Demonstrates using the gets() library function */

#include <stdio.h>

/* allocate a character array to hold input. */

char input[81];

int main() {
    puts("Enter some text, then press Enter");
    gets(input); /* gets() has been removed from c11, gcc still allows, not clang */
    printf("You entered %s", input);
}