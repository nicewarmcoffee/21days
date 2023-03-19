/* 키보드에서 10개의 정수값을 읽어들이고 나서 그들의 합을 출력하는 프로그램을 작성해 보자. */

#include <stdio.h>

#define MAX 10

int main() {
    int numbers[MAX];
    int x = 0;
    int sum = 0;

    for (int i = 0; i < MAX; i++) {
        printf("\nenter an integer: ");
        scanf("%d", &x);
        numbers[i] = x;
    }

    for (int i = 0; i < MAX; i++)
        sum += numbers[i];

    printf("sum of entered numbers is: %d", sum);
}
