#include <stdio.h>
void print_letter2(void);

int ctr, ctr2;
char letter1 = 'X';
char letter2 = '=';

/* better answer would be moving above variables inside the respective functions */

int main() {
    for (ctr = 0; ctr < 10; ctr++) {
        printf("%c", letter1);
        print_letter2();
    }
}

void print_letter2(void) {
    for (ctr2 = 0; ctr2 < 2; ctr2++) {
        printf("%c", letter2);
    }
}