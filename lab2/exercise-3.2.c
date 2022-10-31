#include<stdio.h>

void main()
{
	int n;
	printf("Enter month number:");
	scanf("%d", &n);
	if (n==1 || n==2 || n==12) printf("Winter");
		else if (n>=3 && n<=5) printf("Spring");
		else if (n>=6 && n<=8) printf("Summer");
			else printf("Autumn");
}