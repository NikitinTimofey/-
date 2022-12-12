#include<stdio.h>

void main()
{
	int a,b,c;
	a=10000;
	c=0;
	
	printf("Primary amount - 10000 RUB.\n");
	while (a <= 20000) {
	    b=a*0.03;
		a=a+b;
		c++;
	}
	printf("After ");
	printf("%d", c);
	printf(" year, the original amount will have doubled.");
}
