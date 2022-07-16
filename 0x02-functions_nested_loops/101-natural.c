#include <stdio.h>

/**
 * main - sum of multiples of 3 and 5 that are less than 1024
 *
 * Return: 0
 */

int main(void)
{
	int i, sum;

	for (i = 0; (3 * i) < 1024; ++i)
		sum += (3 * i);
	for (i = 0; (5 * i) < 1024; ++i)
		sum += (5 * i);
	printf("%d\n", sum);
	return (0);
}
