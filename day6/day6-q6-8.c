/* 1에서 100까지 3을 단단위로 숫자를 세는 for, while, do while문을 작성해 보자 */

#include <stdio.h>

int x, y, z;

int main() {
    printf("for:\n");
    for (x = 1; x <= 100; x += 3)
        printf("\n%d", x);

    printf("\nwhile\n");
    y = 1;
    while (y <= 100) {
        printf("\n%d", y);
        y += 3;
    }

    printf("\ndo while\n");
    z = 1;
    do {
        printf("\n%d", z);
        z += 3;
    }
    while (z <= 100);
    
}