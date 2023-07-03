/* Demonstrates the system() function */
#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Declare a buffer to hold input */

    char input[40];

    while (1) {
        /* Get the user's command */

        puts("\nInput the desired DOS command, blank to exit");

        fgets(input, 40, stdin);

        /* Exit if a blank line was entered. */

        if (input[1] == '\0')
            exit(0);

        system(input);
    }
}