/* 7. 두개의 배열을 인수로 받아들이는 sumarrays()라는 이름의 함수를 작성하자.
 * 함수는 두 배열내의 모든 값을 더하여, 함수를 호출한 프로그램으로 결과를 돌려주어야 한다.
 *
 * 8. 연습문제 7번에서 작성된 함수를 간단한 프로그램 내에서 사용해 보자. */

#include <stdio.h>
#define MAX 10

int first_numbers[MAX];
int second_numbers[MAX];
int sum = 0;

int sumarrays(int x[], int y[]);

int main() {
    for(int i = 0; i < MAX; i++) {
        printf("\ninput a number for the first array: ");
        scanf("%d", &first_numbers[i]);
        printf("\nyou've entered %d", first_numbers[i]);

        printf("\ninput a number for the second array: ");
        scanf("%d", &second_numbers[i]);
        printf("\nyou've entered %d", second_numbers[i]);
    }

    printf("sum of all numbers are %d", sumarrays(first_numbers, second_numbers));
}

int sumarrays(int x[], int y[]) {
    for (int i = 0; i < MAX; i++) {
        sum += x[i] + y[i];
    }

    return sum;
}
