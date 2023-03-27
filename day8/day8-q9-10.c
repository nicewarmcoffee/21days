/* 10개의 요소를 가지는 배열을 초기화 하는 프로그램을 작성해 보자.
 * 각각의 요소는 그것의 첨자(index)와 같은 값을 가져야 한다.
 * 프로그램은 또한 10개의 요소를 출력해야 한다 */

/* 각각의 요소에 10을 더한다. 그리고 나서 새로운 배열의 값이 출력되어야 한다. */

#include <stdio.h>

int answers_plus10[10];
int answers[10];

int main() {
    for (int x = 0; x < 10; x++) {
        answers[x] = x;
        printf("%d  ", answers[x]);
    }

    printf("\n\n");

    for (int y = 0; y < 10; y++) {
        answers_plus10[y] = answers[y] + 10;
        printf("%d ", answers_plus10[y]);
    }
}
