#include <stdio.h>
int x,y;
int main() {
    printf("\nEnter two numbers");
    scanf("%d %d", &x, &y);
    printf("\n\n%d is bigger", (x > y) ? x : y);
    return 0;
    }
