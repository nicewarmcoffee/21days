/* 어떤 사람이 합법적으로 노인(65세 이상)이 아닌 성인(21세 이상)인지의 여부를
 * 결정하는 if문을 작성해 보자. */

#include <stdio.h>

int age;
int main() {
    printf("Enter your age: " );
    scanf("%d", &age);

    if (age >= 65)
        printf("\n%d = 노인", age);

    else if (age >= 21)
        printf("\n%d = 성인", age);

    else
        printf("\n%d = 유아", age);
    }
