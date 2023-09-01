/* Using getchar() to input strings */

#include <stdio.h>

#define MAX 80

int main() {
    char ch, buffer[MAX + 1]; /* 80 characters + null terminator */
    int x = 0;

    while ((ch = getchar()) != '\n' && x < MAX)
        buffer[x++] = ch;  /* difference between x++ (store first) and ++x (increment first) */

    buffer[x] = '\0';

    printf("%s", buffer);
}