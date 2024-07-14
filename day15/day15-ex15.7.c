/* Inputs a list of strings from the keyboard, sorts them, */
/* then displays them on the screen. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINES 25

int get_lines(char *lines[]);
void sort(char *p[], int n);
void print_strings(char *[], int n);

char *lines[MAXLINES];

int main() {
    int number_of_lines;

    /* Read in the lines from the keyboard. */

    number_of_lines = get_lines(lines);

    if (number_of_lines < 0) {
        puts("Memory allocation error");
        exit(-1);
    }

    sort(lines, number_of_lines);
    print_strings(lines, number_of_lines);
}

int get_lines(char *lines[]) {
    int n = 0;
    char buffer[80]; /* Temporary storage for each line. */

    puts("Enter one line at time; enter a blank when done.");

    while((n < MAXLINES) && (fgets(buffer, 80, stdin) != 0) && buffer[1] != '\0') {
        /* fgets always ends with \n\0,
        hence the empty line would have buffer[0] == '\n' and buffer[1] == '\0' */
        if ((lines[n] = (char *)malloc(strlen(buffer) + 1)) == NULL)
            return -1;
        strcpy(lines[n++], buffer);
    }

    return n;
}

void sort(char *p[], int n) {
    int a, b;
    char *x;

    /* Return Value from strcmp() 
    0 if strings are equal
    >0 if the first non-matching character in str1 is greater (in ASCII) than that of str2
    <0 if the first non-matching character in str1 is lower (in ASCII) than that of str2.
    */


    for (a = 1; a < n; a++) {
        for (b = 0; b < n - 1; b++) {
            if (strcmp(p[b], p[b + 1]) > 0) {
                x = p[b];
                p[b] = p[b + 1];
                p[b + 1] = x;
            }
        }
    }
}

void print_strings(char *p[], int n) {
    int count;

    for (count = 0; count < n; count++)
        printf("\n%s ", p[count]);
}