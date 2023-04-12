#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - Function that prints grid
 *@width: serves as the column of 2D grid
 *@height: serves as height of 2D grid
 *Return: Returns arry as pointer to grid
 *
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ay;

	if (width <= 0 || height <= 0)
	{
		return(NULL);
	}
	ay = malloc(height * sizeof(int *));
	 if (ay == NULL)
        {
                return (NULL);
        }
	for (i = 0; i < height; i++)
	{
		ay[i] = malloc(width * sizeof(int));
		if (ay[i] == NULL)
		{
		for (j = 0; j < i; j++)
			{
				free(ay[i]);

			}
		free(ay);
		return(NULL);
		}


	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ay[i][j] = 0;
		}
	}
	return (ay);
}
