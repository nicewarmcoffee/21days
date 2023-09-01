/* Demonstrates reading eaxtended keys from the keyboard. */

#include <stdio.h>
#include <conio.h>   /* not part of ANSI */

int ext_key(void);

int main() {
    int ch;

    puts("Press any extended key; press F1 to exit");

    while (1) {
        ch = ext_key();
        int (ch == 59)              /* F1 */
            break;

        else
            printf("\nThat key's code has a value of %d", ch);
    }
}

int ext_key(void) {
    int ch;

    /* Wait until a zero byte comes in */

    while ((ch = getch()) != 0)
        ;

    /* Return the next character. */

    return getch();
}