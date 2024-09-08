#include <stdio.h>

int main() {
    /* 3. C컴파일러가 인식하는 다음의 배열의 구조는 무엇인가?*/
    int array[2][3][4];

    /* 4. 3번에서 선언된 배열을 사용할 때 수식 array[0][0]이 뜻하는 것은 무엇인가? */
    printf("%p", array[0][0]);
    printf("\n5. 비교문들 예시: \n");
    if (array[0][0] == &array[0][0][0])
        printf("array[0][0] == &array[0][0][0] is True\n");
    else
        printf("array[0][0] == &array[0][0][0] False\n");

    if (array[0][1] == &array[0][0][1])
        printf("array[0][1] == &array[0][0][1] is True\n");
    else
        printf("array[0][1] == &array[0][0][1] is False\n");

    if (array[0][1] == &array[0][1][0])
        printf("array[0][1] == &array[0][1][0] is True\n");
    else
        printf("array[0][1] == &array[0][1][0] is False\n");
}
 
 
 