#include <stdio.h>

/**
 * main - sum of multiples of 3 and 5 that are less than 1024
 *
 * Return: 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1; (3 * i) < 1024; ++i)
	{
		if (((3 * i) % 15) != 0)
			sum += 3 * i;
		if (((3 * i) % 15) == 0)
			sum += 3 * i;
	}
	for (i = 1; (5 * i) < 1024; ++i)
		if (((5 * i) % 15) != 0)
			sum += 5 * i;
	printf("%d\n", sum);
	return (0);
}
