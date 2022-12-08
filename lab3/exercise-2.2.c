#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int s)
{
        for (int i = 2; i < s; i++)
            if (s % i == 0) 
                return false;
 
        return true;
}


int main()
{
    int n, m, s, a, b, c;
    
    for (int m = 100; m <= 999; m++) {
        
        s = sqrt(m);
        
	c = m % 10;
    	b = m / 10 % 10;
    	a = m / 100 % 10;
        
        if (s*s==m && isPrime(s) == true && c>b && b>a)
            printf("%d\n", s*s);
    }
}
