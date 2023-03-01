#include <stdio.h>

int radius, area;

main(){
	printf("Enter radius: ");
	scanf("%d", &radius);
	area = 3.141592 * radius * radius;
	printf("\n\nArea = %d", area);
	return 0;
}
