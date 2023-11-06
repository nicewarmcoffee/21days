/* Demonstrates puts(). */

#include <stdio.h>

/* Declare and initalize an array of points */

char *message[5] = {"This", "is", "a", "short", "message."};

int main() {
    int x;

    for (x = 0; x < 5; x++)
        puts(message[x]);

    puts("And this is the end!");
}