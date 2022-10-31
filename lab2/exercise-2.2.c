#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	printf("Enter a:");
	scanf("%i", &a);
	printf("Enter b:");
	scanf("%i", &b);
	printf("Enter c:");
	scanf("%i", &c);
	
	if (a>0) a=1;
		else a=0;
	if (b>0) b=1;
		else b=0;
	if (c>0) c=1;
		else c=0;
	
	printf("Amount of positive numbers: %i", a+b+c);
}