/* debugging */

#include <stdio.h>

int get_input(void);

int main() {
    int choice = get_input();

    switch (choice) {
        case 1: {
            printf("You answered 1");
            break;
        }
        case 2: {
            printf("You answered 2");
            break;
        }
        default:
            printf("You did not choose 1 or 2");
    }
}

int get_input(void) {
    int x;
    puts("Enter a number");
    scanf("%d", &x);
    return x;
}