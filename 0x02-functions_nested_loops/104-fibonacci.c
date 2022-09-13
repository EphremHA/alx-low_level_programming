
#include <stdio.h>

/**
 * main - Fibonacci series
 *
 * Return: o
 */

int main(void)
{
	long double i, sum, fn = 1, sn = 2;

	printf("%Lf, %Lf", fn, sn);
	for (i = 1; i <= 97; ++i)
	{
		sum = fn + sn;
		printf(", %Lf", sum);
		fn = sn;
		sn = sum;
	}
	/*printf("AAAAAAA%lu", i);*/
	printf("\n");
	return (0);
}
