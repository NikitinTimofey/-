#include<stdio.h>
void main() {
	int a, b, c, s;
	printf("Enter a:");
	scanf("%i", &a);
	printf("Enter b:");
	scanf("%i", &b);
	printf("Enter c:");
	scanf("%i", &c);
	
	if (a>0) s++;
	if (b>0) s++;
	if (c>0) s++; 
		
	printf("%i", s);
}
