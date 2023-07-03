/* Another use of the switch statement */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int reply;

    while (1) {
        puts("Enter a value between 1 and 10, 0 to exit: ");
        scanf("%d", &reply);

        switch (reply) {
            case 0:
                exit(0);
            case 1:
            case 2:
            case 3:
            case 4:
            case 5: {
                puts("You entered 5 or below.");
                break;
            }
            case 6:
            case 7:
            case 8:
            case 9:
            case 10: {
                puts("You entered 6 or higher.");
                break;
            }
            default:
                puts("Between 1 and 10, please!");
        }
    }
}