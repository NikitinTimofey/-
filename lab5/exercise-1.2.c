#include <stdio.h>
#include <stdlib.h>

void main()
{

    int b[4][4] = {
        {1, -2, -7, 6},
        {3, 5, 0, -1},
        {4, -6, -1, -2},
        {-5, -7, 2, 4}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }

    int p = 0, q = 0;
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (b[i][j] % 2 == 0 && b[i][j] < 0)
            {
                p += b[i][j];
            }
        }
        a[q] = p;
        q++;
        p %= p;
    }

    printf("\nCharacteristic of the matrix: ");
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d", a[i]);
    }

    // Сортировка

    for (int i = 0; i < 4 - 1; i++)
    {
        for (int j = (4 - 1); j > i; j--)
        {
            if (a[j - 1] < a[j]) 
            {
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            }
        }
    }

    printf("\nCharacteristic of the matrix row in a decreasing order: ");
    for (int i = 0; i < 4; i++)
        printf("\n%d ", a[i]);
}
