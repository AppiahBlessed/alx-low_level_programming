#include "main.h"
/**
 *free_grid - Function frees grid
 *@grid: Contains 2D array
 *@height: Determines row of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);

	}
	free(grid);

}
