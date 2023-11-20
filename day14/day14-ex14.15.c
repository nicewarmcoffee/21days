/* Can be used to demonstrate redirection of stdin and stdout. */

#include <stdio.h>

int main() {
    char buff[80];
    fgets(buff, 80, stdin);
    printf("The input was: %s", buff);
}