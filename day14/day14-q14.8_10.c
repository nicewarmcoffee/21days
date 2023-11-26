/* C 소스 화일을 출력하는 프로그램을 작성해 보자. 소스 화일을 입력하기 위해서는 방향 전환 기능을 사용하며,
 * 출력을 수행하기 위해서는 fprintf()를 사용하자. */ 

/* 프로그램이 리스트를 출력할 때 문장의 처음에ㅔ 문장 번호를 추가하도록 그것을 변경해 보자. */

/* a.out < source_code.c */

#include <stdio.h>

int line;

int main() {
	char buffer[256];

	line = 1;

	while(fgets(buffer, 256, stdin) != NULL) {
		fprintf(stdout, "%4d:\t%s", line++, buffer);
	}
	return 0;
}
