/* Demonstrates local variables with blocks */

#include <stdio.h>

int main() {
    /* Define a variable local to main() */

    int count = 0;

    printf("\nOutside the block, count = %d", count);
    
    /* start a block */
    {
        /* define a variable local to the block */
        int count = 999;
        printf("\nWithin the block, count = %d", count);
    }

    printf("\nOutside the block again, count = %d", count);
}