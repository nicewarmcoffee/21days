/* 숫자가 99가 입력되거나 또는 6개의 값이 입력될 때까지 계속해서 실행되도록
 * 문제 4번을 변경하자. 숫자를 배열에 저장하자.
 *
 * 배열에 저장된 값을 텝 문자로 구분하여 한줄에 출력하는 함수를 추가해 보자. */

#include <stdio.h>
#define MAX 6

int main() {
    int x = 0;
    int numbers[6];
    
    for (int i = 0; i < MAX; i++) {
        do {
            printf("Enter an even number: ");
            scanf("%d", &x);
            printf("You have entered %d\n", x);
            numbers[i] = x;
        } while (x % 2 != 0);
    }

    printf("\nNumbers entered are: ");
    for (int i = 0; i < MAX; i++)
        printf("\t%d", numbers[i]);
}