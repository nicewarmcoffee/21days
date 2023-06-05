/* some notes

char string[5] = {'h', 'i', '\0'};
char string[5] = "hi";
char *string = "hi";

note the string ends with null terminator, \0

stdlib.h has malloc() function:
void *malloc(size_t size)

it will pre allocate memory

allocate memory for a 100 character string:
char *string;
string = (char *) malloc(100);

allocate memory for an array of 50 integers:
int *numbers;
numbers = (int *) malloc(50 * sizeof(int));

allocate memory for an array of 10 float values:
float *numbers;
numbers = (float *) malloc(10 * sizeof(float));

*/

/* Demonstrates the use of malloc() to allocate storage space for string data */

#include <stdio.h>
#include <stdlib.h>

char count, *ptr, *p;

int main() {
    /* Allocate a block of 35 bytes. Test for success. */
    /* The exit() library fuction terminates the program */

    ptr = malloc(35 * sizeof(char));

    if (ptr == NULL) {
        puts("Memory allocation error.");
        exit(1);
    }

    /* Fill the string with values 65 through 90, which are the ASCII codes for A-Z */

    /* p is a pointer used to step through the string.
    You want ptr to remain pointed at the start of the string */

    p = ptr;

    for (count = 65; count < 91; count++)
        *p++ = count;   /* address pointed by pointer *p increments before storing count */
    
    /* Add the terminating null character. */

    *p = '\0';

    /* Display the string on the screen */

    puts(ptr);
}