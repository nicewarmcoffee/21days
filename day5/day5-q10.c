#include <stdio.h>

float a, b, c, d, e;
float get_avg(float a, float b, float c, float d, float e);

main() {
    printf("enter 5 numbers: \n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    printf("average is %f.\n", get_avg(a, b, c, d, e));
}

float get_avg(float a, float b, float c, float d, float e) {
    return ((a + b + c + d + e) / 5);
}