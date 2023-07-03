/* Demonstrates using an infinite loop and the switch statement to
implement a menu system. */
#include <stdio.h>
#include <stdlib.h>
#define DELAY 150000

int menu(void);
void delay(void);

int main() {
    int choice;

    while (1) {
        switch(menu()) {
            case 1: {
                puts("\nExecuting choice 1.");
                delay();
                break;
            }
            
            case 2: {
                puts("\nExecuting choice 2.");
                delay();
                break;
            }
            
            case 3: {
                puts("\nExecuting choice 3.");
                delay();
                break;
            }
            
            case 4: {
                puts("\nExecuting choice 4.");
                delay();
                break;
            }
            
            case 5: { /* Exit program */
                puts("\nExit program now...");
                delay();
                exit(0);
            }

            default: {
                puts ("Invalid choice, try again.");
                delay();
            }
        }
    }
}

int menu(void) {
    /* displays a menu and inputs user's selection */
    int reply;

    puts("\nEnter 1 for task A.");
    puts("Enter 2 for task B.");
    puts("Enter 3 for task C.");
    puts("Enter 4 for task D.");
    puts("Enter 5 to exit program.");

    scanf("%d", &reply);

    return reply;
}

void delay(void) {
    long x;
    for (x = 0; x < DELAY; x++) {
        ;
    }
}