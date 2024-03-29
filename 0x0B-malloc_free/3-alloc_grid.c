#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - matrix of size width X height initialized to zero
 * @width: matrix width
 * @height: matrix height
 *
 * Return: pointer to the created 2-D matrix.
 */

int **alloc_grid(int width, int height)
{
	int i, j, rm, **ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (rm = i; rm >= 0; rm--)
				free(ptr[rm]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
