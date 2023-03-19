/* list_it.c -- this program displays a listing with line numbers! */

#include <stdio.h>
#include <stdlib.h> /* required for exit function */

void display_usage(void);

int line;

int main(int argv, char *argc[]) {
    char buffer[256];
    FILE *fp;

    if (argv < 2) {
        display_usage();
        exit(1);
        }

    if ((fp = fopen(argc[1], "r")) == NULL) {
        fprintf(stderr, "Error opening file, %s!", argc[1]);
        exit(1);
        }

    line = 1;

    while (fgets(buffer, 256, fp) != NULL)
        fprintf(stdout, "%4d:\t%s", line++, buffer);

    fclose(fp);
    return 0;
    }

void display_usage(void) {
    fprintf(stderr, "\nProper Usage is: ");
    fprintf(stderr, "\n\nlist_it filename\n");
    }
