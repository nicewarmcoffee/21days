/* stuffs.c demonstrates using a multimensional array */

#include <stdio.h>
#include <stdlib.h>
/* declare a three-dimensional array with 1000 elements */

int stuffs[10][10][10]; /* you can use random as a variable name */
int a, b, c;

int main() {
    /* fill the array with random numbers.
    the c library function rand() returns a random number.
    use one for loop for each array subscript */

    /* srand(time(NULL)); */
    /* use current time as seed for random generator */

    for (a = 0; a < 10; a++) {
        for (b = 0; b < 10; b++) {
            for (c = 0; c < 10; c++) {
                stuffs[a][b][c] = rand();
            }
        }
    }

    /* display 10 elements at a time */

    for (a = 0; a < 10; a++) {
        for (b = 0; b < 10; b++) {
            for (c = 0; c < 10; c++) {
                printf("\nstuffs[%d][%d][%d] = ", a, b, c);
                printf("%d", stuffs[a][b][c]);
            }

            printf("\nPress a key to continue, CTRL-C to quit");
            /* getch(); */
            /* getch() is only available on MS-DOS compilers like TURBO C*/
            getchar(); /* pauses till any key is pressed */
        }
    }
} 