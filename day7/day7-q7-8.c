#include <stdio.h>

int get_1_or_2(void);

int main() {
    printf("Jack said, \"Peter Piper picked a peck of pickled peppers,\"");
    
    printf("%d", get_1_or_2());
}

int get_1_or_2(void) {
    int answer = 0;

    while (answer < 1 || answer > 2) {
        printf("\nenter 1 for Yes, 2 for No:");
        scanf("%d", &answer);
    }
    return answer;
}