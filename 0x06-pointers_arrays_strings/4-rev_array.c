#include "main.h"

/**
 * reverse_array - reverse array of int
 * @a: param
 * @n: param
 *
 * Return: a
 */

void reverse_array(int *a, int n)
{
	int r[10000], i;

	for (i = 0; i <= n - 1; ++i)
		*(r + i) = *(a + (n - 1) - i);
	for (i = 0 ; i <= n - 1; ++i)
		*(a + i) = *(r + i);
}
