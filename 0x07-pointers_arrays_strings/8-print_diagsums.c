#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of diagonals for a square matrix
 * @a: square matrix
 * @size: size X size matrix
 *
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	long int i, j, usum = 0, dsum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				usum += a[(i * size) + j];
			if (i == (size - 1) - j && j == (size - 1) - i)
				dsum += a[(i * size) + j];
		}
	}
	printf("%ld, %ld\n", usum, dsum);
}
