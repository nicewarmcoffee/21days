/* ex2-2.c */
#include <stdio.h>

void display_line(void);

int main() {
    display_line();
    printf("\n Teach Yourself C In 21 Days!\n");
    display_line();

    return 0;
    }

/* print asterisk line */
void display_line(void) {
    int counter;

    for (counter = 0; counter < 21; counter++)
        printf("*");

    }
/* end of program */
