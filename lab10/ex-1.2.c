#include <stdio.h>

int main() {
    int i, j, k;
    int n = 3;
    double arr[3][4] = {
        {0.12, -0.43, 0.14, -0.17},
        {-0.07, 0.34, 0.72, 0.62},
        {1.18, -0.08, -0.25, 1.12},
    };
    double x[3];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n + 1; j++) {
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }

    for (k = 0; k < n - 1; k++) {
        for (j = k + 1; j < n; j++) {
            double m = arr[j][k] / arr[k][k];
            for (i = 0; i < n + 1; i++) {
                arr[j][i] = arr[j][i] - m * arr[k][i];
            }
        }
    }

    printf("\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n + 1; j++) {
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = n - 1; i >= 0; i--) {
        x[i] = arr[i][n] / arr[i][i];
        for (int c = n - 1; c > i; c--) {
            x[i] = x[i] - arr[i][c] * x[c] / arr[i][i];
        }
    }

    for (i = 0; i < n; i++) {
        printf("x%d = %lf\n", i + 1, x[i]);
    }

    return 0;
}
