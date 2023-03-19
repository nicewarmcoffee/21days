#include <stdio.h>

int x, y;
int multiply(int x, int y);
float divide(int x, int y);

int main() {
    printf("enter two numbers: \n");
    scanf("%d%d", &x, &y);

    printf("\nmultiplied: %d", multiply(x, y));
    printf("\ndivided %f", divide(x, y));
}

int multiply(int x, int y) {
    return x * y;
}

float divide(int x, int y) {
    if (y != 0)
        return x / y;
    
    else
        return 0;
}