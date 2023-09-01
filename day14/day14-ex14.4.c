/* Demonstrates the getch() function */
/* getch() provided by conio.h - not part of POSIX */

#include <stdio.h>
#include <conio.h>

int main() {
    int ch;

    while ((ch = getch()) != '\r')
        putchar(ch);
}
