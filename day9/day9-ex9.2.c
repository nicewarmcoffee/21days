/* Demonstrates the the relationship between addresses and
elements of arrays of different data types */

#include <stdio.h>

/* Declare three arrays and a counter variable */

int i[10], x;
float f[10];
double d[10];

int main(){
    /* Print the table heading */
    printf("\t\tInteger\t\tFloat\t\tDboule");
    printf("\n=========================================================");

    /* Print the addresses of each array element */

    for (x = 0; x < 10; x++) {
        printf("\nElement %d:\t%d\t\t%d\t\t%d", x, &i[x], &f[x], &d[x]);
    }

    printf("\n=========================================================");
}