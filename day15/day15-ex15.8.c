/* Demonstration of declaring and using a pointer to a function */

#include <stdio.h>

/* The fuction prototype. */

float square(float x);

/* The pointer declaration */

float (*p)(float x);

int main() {
    /* Initialize p to point to square(). */
    p = square;

    /* Call square() two ways. */

    printf("%f %f", square(6.9), p(6.9));
}

float square(float x) {
    return x * x;
}