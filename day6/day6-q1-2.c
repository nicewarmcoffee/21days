/* 50개의 long형 변수를 저장하기 위한 배열의 선언물을 작성해 보자 */
#include <stdio.h>

long numbers[50];
int main() {
    numbers[49] = 123.456; /* note: long is longer integer, not float */
    printf("%ld", numbers[49]);
}
