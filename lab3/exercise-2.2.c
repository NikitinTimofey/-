#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n>=11, n<=31)
    {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;

        return true;
    }
    else
        return false;
}
int main() {
	int n, m;
	printf("Enter a lower limit:");
	scanf("%d", &m);
	printf("Enter the upper limit:");
	scanf("%d", &n);
	printf("Is prime: %d\n", isPrime(n));
	while (m<n) {
		m++;
		printf("%d\n", m);
	}
	if 
	
}