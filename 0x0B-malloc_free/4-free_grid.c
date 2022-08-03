#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees mem. occupied by 2d array created dynamically
 * grid: parameter
 * height: parameter
 *
 * Return: none
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
