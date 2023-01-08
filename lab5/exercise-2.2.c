#include <stdio.h>
 
#define ROWS (10)
#define COLUMNS (12)
 
int main(void) {
    int matrix[ROWS][COLUMNS] = {
            {2, 3, 5, 2, 2, 6, 6, 8, 1, 2, -3, -6},
            {2, 4, 6, 2, 4, 5, 6, 7, 8, 9, 3, 2},
            {-2, 7, 2, 0, 1, 0, 8, 6, 7, 5, 4, 5},
            {0, 5, 7, 2, 4, 7, 3, 1, 4, 6, 3, 5},
            {-3, 0, 2, 6, 7, 1, -6, -1, 6, -6, 6, 7},
            {-6, 1, 6, -7, -2, 5, 1, 0, 4, -5, 6, 2},
            {-7, 0, 7, 5, -4, 0, 5, 5, 0, 3, 0, 4},
            {-3, 1, 6, 0, 4, 0, -1, -7, 3, -4, 6, 7},
            {-7, 2, 2, -3, 1, -7, 0, 3, 1, 5, 2, 3},
            {0, 6, 4, 7, -6, 4, -7, -5, -4, 0, 4, 4},
        }, 
        minRows[ROWS][COLUMNS] = { 0 }, maxRows[ROWS][COLUMNS] = { 0 }, 
        minCols[ROWS][COLUMNS] = { 0 }, maxCols[ROWS][COLUMNS] = { 0 }, 
        i, j, saddlesFound = 0;
    
    printf("Matrix:\n");
    for ( i = 0; i < ROWS; ++i ) {
        for ( j = 0; j < COLUMNS; ++j )
            printf("%3d ", matrix[i][j]);
        printf("\n");
    }
    printf("\n");
    
    for ( i = 0; i < ROWS; ++i ) {
        int minRowVal = matrix[i][0], maxRowVal = matrix[i][0];
        
        for ( j = 1; j < COLUMNS; ++j ) {
            if ( matrix[i][j] < minRowVal )
                minRowVal = matrix[i][j];
            if ( matrix[i][j] > maxRowVal )
                maxRowVal = matrix[i][j];
        }
        
        for ( j = 0; j < COLUMNS; ++j ) {
            if ( matrix[i][j] == minRowVal )
                minRows[i][j] = 1;
            if ( matrix[i][j] == maxRowVal )
                maxRows[i][j] = 1;
        }
    }
    
    for ( j = 0; j < COLUMNS; ++j ) {
        int minColVal = matrix[0][j], maxColVal = matrix[0][j];
        
        for ( i = 1; i < ROWS; ++i ) {
            if ( matrix[i][j] < minColVal )
                minColVal = matrix[i][j];
            if ( matrix[i][j] > maxColVal )
                maxColVal = matrix[i][j];
        }
        
        for ( i = 0; i < ROWS; ++i ) {
            if ( matrix[i][j] == minColVal )
                minCols[i][j] = 1;
            if ( matrix[i][j] == maxColVal )
                maxCols[i][j] = 1;
        }
    }
    
    for ( i = 0; i < ROWS; ++i ) {
        for ( j = 0; j < COLUMNS; ++j ) {
            if ( ( minRows[i][j] & maxCols[i][j] ) || ( maxRows[i][j] & minCols[i][j] ) ) {
                printf("SADDLE[%d][%d] = %d\n", i+1, j+1, matrix[i][j]);
                ++saddlesFound;
            }
        }
    }
    
    printf("\n%d saddle point(s) found.\n", saddlesFound);
    
    return 0;
}