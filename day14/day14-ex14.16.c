/* Demonstrates printer output. */

#include <stdio.h>

int main() {
    float f = 2.0134;

    fprintf(stdout, "This message is printed on the screen.\n\n");
    fprintf(stdout, "Use stdprn if you want to print out to LPT1: serial port\n\n");
    fprintf(stdout, "The square of %f is %f.", f, f*f);

    /* Send a form feed.
    fprintf(stdprn, "\f");
    \f means form feed - which means rejecting the paper.
    */
}