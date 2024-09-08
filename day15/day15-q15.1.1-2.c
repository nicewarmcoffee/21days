/* 1. float형 변수를 선언하고, 변수에 대한 포인터를 선언하고 초기화 하며,
    포인터에 대한 포인터를 선언하고 초기화하는 문장을 작성해 보자. */
#include <stdio.h>

int main() {
    float x = 8;
    float *px = &x;
    float **ppx = &px;

    printf("%f", *px);

    /* 2. 기본문제 1에서, 변수 x에 100의 값을 할당하기 위해 포인터의 포인터를 사용하기 원한다고 하자.
        아래의 할당문에서 잘못된 것은 무엇인가? 이것이 바르지 않다면 어떻게 작성되어야 하는가?
        *ppx = 100; */
    **ppx = 100;

    printf("\nthe value pointed by **ppx: %f", **ppx);
    printf("\nthe value stored in x: %f", x);
    printf("\nthe address pointed to by **ppx: %p", ppx);
    printf("\nthe address of *px: %p", &px);
}