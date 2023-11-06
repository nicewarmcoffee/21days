/* Using putchar() to display strings. */

#include <stdio.h>
#define MAXSTRING 80

char message[] = "Displayed with putchar().";
int main() {
    int count;

    for (count = 0; count < MAXSTRING; count++) {
        /* Look for the end of the string. */
        /* When it's found, write a newline character and exit the loop. */

        if (message[count] == '\0') {
            putchar('\n');
            break;
        }

        else
            /* If end of string not found, write the next char. */
            putchar(message[count]);
    }
}