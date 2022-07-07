#include <stdio.h>

/**
 * main - 0.5%!
 *
 * Return: Void
 */

int main(void)
{
	int i;

	for (i = 0; i < 99; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf("\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf("\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf("\n");
		}
		else
		{
			printf("%d", i);
			printf("\n");
		}
	}
	return (0);
}
