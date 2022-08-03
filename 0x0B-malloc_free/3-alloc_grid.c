#include "main.h"
#include <stdlib.h>

/**
 * alloc_grind - matrix of size width X height initialized to zero
 * @width: matrix width
 * @height: matrix height
 *
 * Return: pointer to the created 2-D matrix.
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr = (int **) malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		ptr[i] = (int *) malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
