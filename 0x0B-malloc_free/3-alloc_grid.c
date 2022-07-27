#include "main.h"
#include <stdlib.h>

/**
 * alloc_grind - matrix of size width X height initialized to zero
 * @width: matrix width
 * @height: matrix height
 *
 * Return: pointer of the matrix
 */

int **alloc_grid(int width, int height)
{
	int w,h,i,j, *ptr, c = 0, **p;

	w = (sizeof(width) / sizeof(int));
	h = (sizeof(height) / sizeof(int));

	int arr[(int) (sizeof(width) / sizeof(int))][(int) (sizeof(height) / sizeof(int))];
	p = (int *) malloc(w * h * sizeof(int));
	p = &ptr;

	for (i = 0; i < w; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;

	for (i = 0; i < w; i++)
	{
		for (j = 0; j < h; j++)
			*(ptr + (c + j)) = arr[i][j];
		c += j;
	}
	return (p);
}
