#include <stdio.h>
#include <stdlib.h>

int main() {
    int reply;
    
    while (1) {
        puts("enter a number between 1 and 5. 0 to exit.");
        scanf("%d", &reply);
    
        switch(reply) {
            case 1: {
                puts("You entered 1. Running `ls` ");
                system("ls -alF");
                break;
            }
            case 2: {
                puts("You entered 2. Running `echo hello world`");
                system("echo hello world");
                break;
            }

            case 3: {
                puts("You entered 3. Running `uname -a`");
                system("uname -a");
                break;
            }
            case 4: {
                puts("You entered 4. Running `whoami`");
                system("whoami");
                break;
            }
            case 5: {
                puts("Exiting.");
                exit(EXIT_SUCCESS);
            }

            default:
                puts("Out of range, try again");
        }
    }
}