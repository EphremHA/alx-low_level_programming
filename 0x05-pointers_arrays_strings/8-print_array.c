#include <stdio.h>

/**
 * print_array - print up to the nth
 * @n: upto n parameter
 * @a: array
 *
 * Return: none
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; ++i)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
