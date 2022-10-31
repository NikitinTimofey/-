#include<stdio.h>

void main()
{
	int a,b,c;
	b=10000*0.03;
	c=0;
	
	printf("Primary amount - 10000 RUB.\n");
	while(a<=20000) {
		a+=b;
		c++;
	}
	printf("After ");
	printf("%d", c);
	printf(" year, the original amount will have doubled.");
}