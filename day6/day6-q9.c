#include <stdio.h>
int main() {
    int record = 0;
    while (record < 100) {
        printf("\nRecord %d", ++record);
        printf("\nGetting next number...");
    }
}