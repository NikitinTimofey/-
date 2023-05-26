#include <stdio.h>
#include <math.h>

#define N 3
#define EPS 1e-5

int main()
{
	double arr[3][4] = {
{0.14, 0.24, -0.84, 1.11},
{1.07, 0.83, 0.56, 0.48},
{0.64, 0.43, -0.38, -0.83},
	};
	double A[N][N], b[N];
	double x[N], x0[N], C[N][N], d[N];
	int i, j, k;
	int iter;
	int count_eps;
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			A[i][j] = arr[i][j];
		}
		b[i] = arr[i][N];
	}
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (fabs(A[i][i]) < fabs(A[j][i])) {
				for (k = 0; k < N; k++) {
					double temp = A[i][k];
					A[i][k] = A[j][k];
					A[j][k] = temp;
				}
				double temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (i == j) {
				C[i][j] = 0;
			} else {
				C[i][j] = -A[i][j] / A[i][i];
			}
		}
		d[i] = b[i] / A[i][i];
		x[i] = d[i];
	}
	
	iter = 0;
	do {
		iter++;
		for (i = 0; i < N; i++) {
			x0[i] = x[i];
		}
		for (i = 0; i < N; i++) {
			x[i] = d[i];
			for (j = 0; j < N; j++) {
				if (j < i) {
					x[i] += C[i][j] * x[j];
				} else {
					x[i] += C[i][j] * x0[j];
				}
			}
		}
		count_eps = 0;
		for (i = 0; i < N; i++) {
			if (fabs(x[i] - x0[i]) < EPS) {
				count_eps++;
			}
		}
	} while (count_eps != N && iter <= 10);
	
	printf("Solution:\n");
	for (i = 0; i < N; i++) {
		printf("x%d = %f\n", i + 1, x[i]);
	}
	
	return 0;
}
