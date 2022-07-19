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
	int i, j, usum, dsum, t;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if(i == j)
			{
				t = a[i][j];
				usum += t;
			}
			if (j == size - i)
			{
				/*dsum += a[i][j];*/
			}
		}
	}
	printf("%d, %d\n", usum, dsum);
}
