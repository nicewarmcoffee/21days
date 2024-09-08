/* 8. 함수에 대한 포인터는 무엇인가? */

/* char형의 값을 돌려주고, 인수로 char형에 대한 포인터의 배열을 받아들이는 함수에 대한
    포인터 선언문을 작성해 보자. */

#include <stdio.h>

char getFirst(char *x[]);
char (*ptr)(char *x[]);

/* 10. 9번의 해답으로 다음과 같은 문장을 사용할 수 있다.
    char *ptr(char *x[]);
    여기서 잘못된 것은 무엇인가? */

int main() {
    /* make sure to initialize ptr */
    ptr = getFirst;

    char *lines[] = {"hello world!"};
    printf("%c", ptr(lines));
}

char getFirst(char *x[]) {
    /* remember x is array of strings */
    /* x[0] would be "hello world!" */
    /* x[1] is nothing! */
    char y = x[0][1];
    return y;
}