/* 정수값을 읽어들이고 그것을 출력하는 문장을 작성해보자.
 * 짝수 값이 2, 4, 6등을 받아들이도록 변경하자. */

#include <stdio.h>

int main() {
    int x = 0;
    do {
        printf("Enter an even number: ");
        scanf("%d", &x);
    } while (x % 2 != 0);

    printf("\nYou have entered %d.", x);
}