#include<stdio.h>
#include<math.h>
void main() {

	int r, b;
	printf("Radius:");
	scanf("%d", &r);
	printf("Hole width and height:");
	scanf("%d", &b);
	printf("Is it possible to cut a square hole of this size in this circle?");
	if (r*2>b*sqrt(2))
		printf("\r\nYes");
	else 
		printf("\r\nNo");
}
