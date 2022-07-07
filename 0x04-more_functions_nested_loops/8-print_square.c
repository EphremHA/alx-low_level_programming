#include "main.h"

/**
 * print_square - Board
 * _putchar - Displays characters
 * @n: Variable
 *
 * Return: Void
 */

void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	if (n <= 0)
		_putchar(10);
}
