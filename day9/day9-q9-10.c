/* 9. 동일한 크기의 두 배열을 받아들이는 addarrays()라는 이름의 함수를 작성해 보자.
 * 이 함수는 배열의 각 요소 값을 더하여, 다른 하나의 배열에 그 결과를 저장해야한다.
 *
 * 10. 연습문제 9번의 함수가 결과 겂을 가지는 배열에 대한 포인터를 돌려주도록 그것을 변경해 보자.
 * 또한 세가지 배열의 모든 값을 출력하는 프로그램에서 이 함수를 사용하자. */

#include <stdio.h>
#define MAX 10

int first_numbers[MAX];
int second_numbers[MAX];
int sum_array[MAX];
int *sum;

int *sumarrays(int x[], int y[], int z[]);

int main() {
    for(int i = 0; i < MAX; i++) {
        printf("\n\ninput a number for the first array %d: ", i);
        scanf("%d", &first_numbers[i]);
        printf("you've entered %d", first_numbers[i]);

        printf("\n\ninput a number for the second array %d: ", i);
        scanf("%d", &second_numbers[i]);
        printf("you've entered %d", second_numbers[i]);
    }

    sum = sumarrays(first_numbers, second_numbers, sum_array);
    printf("\n===========================\n");

    for(int i = 0; i < MAX; i++)
        printf("\nvalue in sum_array %d: %d", i, sum_array[i]);
}

int *sumarrays(int x[], int y[], int z[]) {
    printf("\n");
    for (int i = 0; i < MAX; i++) {
        z[i]+= x[i] + y[i];
        printf("\nsaving %d to sum_array %d", z[i], i);
    }

    return z;
}
