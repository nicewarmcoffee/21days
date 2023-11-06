/* Demonstration of printf(). */

#include <stdio.h>

char *m1 = "Binary";
char *m2 = "Decimal";
char *m3 = "Octal";
char *m4 = "Hexadecimal";

int main() {
    float d1 = 10000.123;
    int n, f;

    puts("Outputing a number with different field width.\n");

    printf("%5f\n", d1);
    printf("%10f\n", d1);
    printf("%15f\n", d1);
    printf("%20f\n", d1);
    printf("%25f\n", d1);

    /* getch(); */
    puts("\n===================\n");

    puts("\nUse the * field width specifier to obtain field width");
    puts("from a variable int he argument list.\n");

    for (n = 5; n <= 25; n += 5)
        printf("%*f\n", n, d1);

    /* getch(); */
    puts("\n===================\n");

    puts("\nInclude leading zeros.\n");
    
    printf("%05f\n", d1);
    printf("%010f\n", d1);
    printf("%015f\n", d1);
    printf("%020f\n", d1);
    printf("%025f\n", d1);

    /* getch(); */
    puts("\n===================\n");

    puts("Display in octal, decimal, and hexadecimal,");
    puts("Use # to precede octal and hex output with 0 and 0X.");
    puts("Use - to left justify each value in its field.");
    puts("First display column labels.\n");

    printf("%-15s%-15s%-15s", m2, m3, m4);

    for (n = 1; n < 20; n++)
        printf("\n%-15d%-#15o%-#15x", n, n, n);

    /* getch(); */
    puts("\n===================\n");


    puts("\n\nUse the %n conversion command to count characters.\n");

    printf("%s%s%s%s%n", m1, m2, m3, m4, &n);

    printf("\n\nThe last printf() output %d characters.", n);

    /* getch(); */
    puts("\n===================\n");

}