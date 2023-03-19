/* Demonstrates using multiple return statements in a function. */

#include <stdio.h>

int x, y, z;

int larger_of(int a, int b);

int main() {
    puts("Enter two different integer values: ");
    scanf("%d%d", &x, &y);

    z = larger_of(x, y);

    printf("\nThe larger value is %d", z);
}

int larger_of(int a, int b) {
    int temp;
    if (a > b)
        temp = a;
    else
        temp = b;
    
    return temp;
}

