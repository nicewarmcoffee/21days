/* Demonstrates the exit() and atexit() functions. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DELAY 150000

void cleanup(void);
void delay(void);

int main() {
    int reply;

    /* Register the function to be called at exit. */

    atexit(cleanup);

    puts("Enter 1 to exit, any other to continue. ");
    scanf("%d", &reply);

    if (reply == 1)
        exit(EXIT_SUCCESS);

    /* Pretend to do some work. */

    for (reply = 0; reply < 5; reply++) {
        puts("Working...");
        delay();
    }

    /* End of main () */
}

void cleanup(void) {
    puts("\nPreparing for exit..");
    delay();
}

void delay(void) {
    long x;
    for (x = 0; x < DELAY; x++) {
        ;
    }
}