#include <stdio.h>

void a_sample_function(void);

int main() {
    a_sample_function();
}

void a_sample_function(void) {
    int ctrl;

    for (ctrl = 0; ctrl < 25; ctrl++)
        printf("*");

    puts("\nThis is a sample function");
    {
        char star = '*';
        puts("it has a problem");
        for (int ctr2 = 0; ctr2 < 25; ctr2++)
        {
            /* nothing is wrong with the sample fuction */
            /* answer says ctr2 must be intialized */
            /* but for statement includes "int ctr2" */
            /* answer makes sense if for statement is
            (ctr2 = 0; ctr2 < 25; ctr2++)
            similar to line 12 */
            
            printf("%c", star);
        }
    }
}