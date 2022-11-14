#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(int argc, char* argv[]) {
	float x,a;
	printf("Enter x:");
	scanf("%f", &x);
	a = 32 * (pow(x, 6));
	printf("Result: %f", a);
}
