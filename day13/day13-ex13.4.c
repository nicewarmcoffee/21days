/* Demonstrates using an infinite loop to implement a menu system */

#include <stdio.h>
#define DELAY 150000  /* Used in delay loop */

int menu(void);
void delay(void);

int main() {
    int choice;

    while (1) {
        /* Get the user's selection. */

        choice = menu();

        /* Branch based on the input. */

        if (choice == 1) {
            puts("\nExecuting choice 1.");
            delay();
        }

        else if (choice == 2) {
            puts("\nExecuting choice 2.");
            delay();
        }

        else if (choice == 3) {
            puts("\nExecuting choice 3.");
            delay();
        }
        
        else if (choice == 4) {
            puts("\nExecuting choice 4.");
            delay();
        }
        
        else if (choice == 5) { /* Exit program */
            puts("\nExiting program now...");
            delay();
            break;
        }

        else {
            puts("Invalid choice, try again.");
            delay();
        }
    }
}

int menu(void) {
    /* Displays a menu and inputs user's selection */
    int reply;

    puts("\nEnter 1 for task A.");
    puts("\nEnter 2 for task B.");
    puts("\nEnter 3 for task C.");
    puts("\nEnter 4 for task D.");
    puts("\nEnter 5 to exit program.");

    scanf("%d", &reply);

    return reply;
}

void delay(void) {
    long x;
    for (x = 0; x < DELAY; x++) {
        ;
    }
}