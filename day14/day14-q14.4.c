/* 30문자나 또는 그 이하의 문자로 구성되는 문자열을 읽어들이는 문장을 작성해 보자.
 * 애스테리스크가 입력되면 문자열의 입력을 종료한다. */

#include <stdio.h>
#define MAXLEN 30

int main() {
    char buffer[MAXLEN];
    puts("Enter text a line at a time; enter * to exit.");

    while (1) {
        fgets(buffer, MAXLEN, stdin);

        if (buffer[0] == '*')
            break;

        printf("you have entered: %s\n", buffer);
    }
}