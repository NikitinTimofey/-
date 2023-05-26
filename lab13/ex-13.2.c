#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shellSortAndAppend(int array[][10], int rows, int columns);

int main()
{
	int lines = 10, columns = 10;
	int array[lines][columns];
	int tempArray[lines * columns];
	int tempSize = 0;  
	int i, j, k;
	
	srand(time(NULL));
	
	for (i = 0; i < lines; i++)
	{
		for (j = 0; j < columns; j++)
		{
			array[i][j] = rand() % 100;
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	
	printf("--------------\n");
	
	for (j = 0; j < columns; j++)
	{
		for (i = 0; i < lines - 1; i++)
		{
			for (k = i + 1; k < lines; k++)
			{
				if (array[i][j] == array[k][j])
				{
					tempArray[tempSize] = array[i][j];
					tempSize++;
					break;
				}
			}
		}
		
		for (i = 0; i < lines - 1; i++)
		{
			for (k = i + 1; k < lines; k++)
			{
				if (array[i][j] < array[k][j])
				{
					int temp = array[i][j];
					array[i][j] = array[k][j];
					array[k][j] = temp;
				}
			}
		}
		
		for (i = lines - 1; i >= 0 && tempSize > 0; i--)
		{
			array[i][j] = tempArray[tempSize - 1];
			tempSize--;
		}
	}
	
	for (i = 0; i < lines; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%4d ", array[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
