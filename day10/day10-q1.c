#include <stdio.h>
#include <stdlib.h> /* for malloc() */
#include <string.h> /* for strcpy() */

int main() {
    char *string1;
    string1 = malloc(13 * sizeof(char)); /* same as string1[13] */

    char *string2 = "test string";

    string1 = string2;

    char string3[13]; /* note, you must specifiy array size - char string3[] won't work */
    char string4[] = "test string2";

    /* string3 = string4 will not work as you cannot copy arrays with = */
    /* to copy char array to another, use strcpy() from string.h */
    strcpy(string3, string4);

    printf("%s\n%s", string1, string3);
}