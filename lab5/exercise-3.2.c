#include <stdio.h>

#define ROWS 3
#define COLS 3

int find_negative_row(int matrix[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        int flag = 1;
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] >= 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            return i;
        }
    }
    return -1;
}

void increase_matrix(int matrix[][COLS], int row, int first_element, int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] += first_element;
        }
    }
}

void print_matrix(int matrix[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
	{1, 2, 3},
	{-4, -5, -6},
	{7, 8, 9}
	};
    int row = -1;
    int first_element = 0;

    row = find_negative_row(matrix, ROWS);

    if (row != -1) {
        first_element = matrix[row][0];
        printf("Found a row with negative elements: ");
        for (int j = 0; j < COLS; j++) {
            matrix[row][j] += first_element;
            printf("%d ", matrix[row][j]);
        }
        printf("\n");

        increase_matrix(matrix, row, first_element, ROWS);

        printf("New matrix:\n");
        print_matrix(matrix, ROWS);
    } else {
        printf("No negative rows found in the matrix.\n");
    }

    return 0;
}
