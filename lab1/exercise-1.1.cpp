#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
using namespace std;

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "eng");
	float x,a;
	printf("Enter x:");
	scanf("%f", &x);
	a = 32 * (pow(x, 6));
	printf("Result: %f", a);
}