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
	int n;
	printf()
	"%d\t%d\t%d\n", ((n/100)%10), ((n/10)%10), (n%10);
	
	
	
	scanf("%d", &n);
	printf("Is prime: %d\n", isPrime(n));	
}