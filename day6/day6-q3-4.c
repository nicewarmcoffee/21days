/* 다음의 문장이 실행될때 x의 값, ctr의 값은 어떻게 되는가
 * for (x = 0; x < 100; x++);
 * for (ctr = 2; ctr < 100; ctr += 3); */

#include <stdio.h>

int x, ctr;

main() {
 for (x = 0; x < 100; x++)
    ;
 printf("\n%d", x);
 for (ctr = 2; ctr < 10; ctr += 3)
    ;
 printf("\n%d", ctr);
}