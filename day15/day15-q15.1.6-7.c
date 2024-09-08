#include <stdio.h>

void function(char *character[]);

int main() {
    char *character[2] = {"hello", "world"};
    function(character);
}

void function(char *character[]) {
    for (int i = 0; i < 2; i++)
        printf("%s\n", character[i]);
}