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
	int m, n, a, b, c;

	for (int m = 100; m <= 999; m++) {
		a = m % 10;
		b = m / 10 % 10;
		c = m / 100 % 10;
    }
}
