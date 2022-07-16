#include <stdio.h>

/**
 * main - Fibonacci series
 *
 * Return: o
 */

int main(void)
{
	long int i, sum, fn = 1, sn = 2;

	printf("%ld, %ld", fn, sn);
	for (i = 1; i <= 48; ++i)
	{
		sum = fn + sn;
		printf(", %ld", sum);
		fn = sn;
		sn = sum;
	}
	printf("\n");
	return (0);
}
