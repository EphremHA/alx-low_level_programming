#include <stdio.h>

/**
 * main - Sum of even Fibonacci series
 *
 * Return: o
 */

int main(void)
{
	long int i, sum, fn = 1, sn = 2, esum = 2;

	for (i = 1; i <= 48; ++i)
	{
		sum = fn + sn;
		if (sum <= 4000000 && (sum % 2 == 0))
			esum += sum;
		fn = sn;
		sn = sum;
	}
	printf("%ld\n", esum);
	return (0);
}
