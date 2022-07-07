#include "main.h"

/**
 * print_diagonal- x=y
 * _putchar - Displays characters
 * @n: Variable
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar(92);
				_putchar(10);
			}
			else
				_putchar(32);
		}
	}
	if (n <= 0)
		_putchar(10);
}
