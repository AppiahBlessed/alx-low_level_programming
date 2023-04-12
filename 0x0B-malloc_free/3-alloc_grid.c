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

	int **arry = malloc(height * sizeof(int *));
	/*Return null if width or height neg or zero*/
	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	/*Loops through height*/
	for (i = 0; i < height; i++)
	{	/*Allocate memory for every index in iteration*/
		arry[i] = malloc(height * sizeof(int));
		if (arry[i] == NULL)
		{/*frees allocated memory if arry[i] is null*/
			for (j = 0; j < i; j++)
				free(arry[i]);
			free(arry);
			return (NULL);
		} /*Assigns content of array to 0;*/
		for (j = 0; j < width; j++)
		{
			arry[i][j] = 0;

		}

	}
	return (arry);
}
