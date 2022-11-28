#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int m)
{
    if (m>1)
    {
        for (int i = 2; i < m; i++)
            if (m % i == 0)
                return false;

        return true;
    }
    else
        return false;
}

int main() {
	int m, n, a, b;

	for (int m = 100; m <= 999; m++) {
		
		#include <stdio.h>

int main() {
	int m, a, b, c;
	m=256;	

	a = m % 10;
	printf("a=%d", a);
	b = m / 10 % 10;
	printf("\nb=%d", b);
	c = m / 100 % 10;
	printf("\nc=%d", c);		
	}
		
}
