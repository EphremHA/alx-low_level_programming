#include <stdio.h>

/**
 * main - 0.5%!
 *
 * Return: int
 */

int main()
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i < 3)
		{
			printf("%d ", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
