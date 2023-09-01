/* Demonstrates a function key driven menu. */

#include <stdio.h>
#include <conio.h>
#include <time.h>

int fnc_key(void);
int menu(void);

int main() {
    /* Setup infinite loop */

    while(1) {
        /* Switch based on return value of main() */

        switch(menu()) {
            case _KB_F1:
                puts("Task 1")
                break;
            case _KB_F2:
                puts("Task 2")
                break;
            case _KB_F3:
                puts("Task 3")
                break;
            case _KB_F4:
                puts("Task 4")
                break;
            case _KB_F5:
                puts("Task 5")
                break;
            case _KB_F6:
                puts("Task 6")
                break;
            case _KB_F7:
                puts("Task 7")
                break;
            case _KB_F8:
                puts("Task 8")
                break;
            case _KB_F9:
                puts("Task 9")
                break;
            case _KB_F1:
                puts("Exiting program...")
                exit(0);
        }
    }
}

int menu(void) {
    /* Display menu choices. */
    puts("\nF1 -> task 1")
    puts("\nF2 -> task 2")
    puts("\nF3 -> task 3")
    puts("\nF4 -> task 4")
    puts("\nF5 -> task 5")
    puts("\nF6 -> task 6")
    puts("\nF7 -> task 7")
    puts("\nF8 -> task 8")
    puts("\nF9 -> task 9")
    puts("\nF10 -> exit\n")

    /* Get a function key press. */

    return (fnc_key());
}

int fnc_key(void) {
    int ch;

    while(1) {
        /* Wait until a zero byte comes in. */

        while ((ch = get()) != 0)
            ;
        /* Get the next character. */

        ch = getch();

        /* Is it a function key? */

        if (ch >= _KB_F1 && ch <= _KB_F10)
            return ch;
    }
}