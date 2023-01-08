#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
    int i, j, nom_str, *a, k = 0;
    if (!(a = (int *)calloc(12, sizeof(int))))
    {
        puts("Not enough memory");
        getch();
        return;
    }
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
        {
            printf("Enter the matrix element: [%d,%d] \n", i + 1, j + 1);
            scanf("%d", a + i * 4 + j);
        }
	system( "cls" );
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", *(a + i * 4 + j));
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (*(a + i * 4 + j) < 0)
            {
                if (j == 0)
                    k = 1;
                else
                    k++;
                if (k == 4)
                {
                    nom_str = i;
                    printf("The number of lines with negative numbers: %d\n", nom_str + 1);
                    break;
                }
            }
        }
    }
    int t = 0;
    t = *(a + nom_str * 4 + 0);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            *(a + i * 4 + j) *= t;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", *(a + i * 4 + j));
        }
        printf("\n");
    }
    free(a);
    getch();
}