#include <stdio.h>

int main(void) {
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	for (int i=10; i>0; --i)
	printf ("%d", a [i-1]);

	return 0;
	}