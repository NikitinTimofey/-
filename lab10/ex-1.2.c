#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, j, k;
	double d, s;
	
	printf("Poryadok: \n");
	scanf("%d", &n);
	
	double **a = (double **)malloc(n * sizeof(double *));
	for (i = 0; i < n; i++)
		a[i] = (double *)malloc(n * sizeof(double));
	
	double **a1 = (double **)malloc(n * sizeof(double *));
	for (i = 0; i < n; i++)
		a1[i] = (double *)malloc(n * sizeof(double));
	
	double *b = (double *)malloc(n * sizeof(double));
	double *x = (double *)malloc(n * sizeof(double));
	
	printf("Vvedite koefficienty i svobodnye chleny: \n");
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("a[%d,%d]= ", i+1, j+1);
			scanf("%lf", &a[i][j]);
			a1[i][j] = a[i][j];
		}
		printf("b,[%d]= ", i+1);
		scanf("%lf", &b[i]);
	}
	
	for (k = 0; k < n; k++) // прямой ход
	{
		for (j = k + 1; j < n; j++)
		{
			d = a[j][k] / a[k][k];
			for (i = k; i < n; i++)
			{
				a[j][i] = a[j][i] - d * a[k][i];
			}
			b[j] = b[j] - d * b[k];
		}
	}
	
	for (k = n - 1; k >= 0; k--) // обратный ход
	{
		d = 0;
		for (j = k + 1; j < n; j++)
		{
			s = a[k][j] * x[j];
			d = d + s;
		}
		x[k] = (b[k] - d) / a[k][k];
	}
	
	printf("Korni sistemy: \n");
	
	for (i = 0; i < n; i++)
	{
		printf("x[%d]= %lf \n", i+1, x[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		free(a[i]);
		free(a1[i]);
	}
	free(a);
	free(a1);
	free(b);
	free(x);
	
	return 0;
}
