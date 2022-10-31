#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool isPrime(int n)
{
    if (n>=11 && n<=31)
    {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                n = false;

        n = true;
    }
    
    else
        n = false;
        
        
    
}
int main() {
	setlocale(LC_ALL, "rus");
	int n,a,b;
	printf("¬ведите начало интервала:");
	scanf("%d", &a);
	printf("¬ведите конец интервала:");
	scanf("%d", &b);
	
	
	
	
	"%d\t%d\t%d\n", ((n/100)%10), ((n/10)%10), (n%10);
	
	
}