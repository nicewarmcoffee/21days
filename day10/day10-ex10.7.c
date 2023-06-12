/* Demonstrates using scanf() to input numeric and text data */

#include <stdio.h>

char lname[81], fname[81];
int count, id_num;

int main() {
    /* Prompt the user. */

    puts("Enter last name, first name, ID number separated by spaces,");
    puts("then press Enter. ");

    /* Input the three data items. */

    count = scanf("%s%s%d", lname, fname, &id_num); /* lname, fname are "pointers", id_num is not */

    /* Display the data. */

    printf("%d items entered: %s %s %d", count, fname, lname, id_num);
}