/* Demonstrates nested while statements */

#include <stdio.h>
#define MAX_NUMBER 100

int array[10];

main() {
    int ctr = 0, nbr = 0;

    printf("This program prompts you to enter 10 numbers\n");
    printf("Each number should be from 1 to 100\n");

    while (ctr < 10) {
        nbr = 0;
        while (nbr < 1 || nbr > MAX_NUMBER) {
            printf("Enter number %d of %d: ", ctr + 1, MAX_NUMBER);
            scanf("%d", &nbr);
        }

        array[ctr] = nbr;
        ctr++;
    }

    for (ctr = 0; ctr < 10; ctr++)
        printf("\nValue %d is %d", ctr + 1, array[ctr]);
}