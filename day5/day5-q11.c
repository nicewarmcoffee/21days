#include <stdio.h>

int x;
float power_of_three(int x);

main() {
    printf("enter a number: \n");
    scanf("%d", &x);

    printf("3 power of %d is %f.\n", x, power_of_three(x));
}

float power_of_three(int x) {
    if (x == 0)
        return 1;
            
    else
        return (3 * power_of_three(x - 1));
}