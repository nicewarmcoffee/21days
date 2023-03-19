#include <stdio.h>

int radius, area;

int main(){
	printf("Enter radius: ");
	scanf("%d", &radius);
	area = 3.141592 * radius * radius;
	printf("\n\nArea = %d", area);
	return 0;
}
