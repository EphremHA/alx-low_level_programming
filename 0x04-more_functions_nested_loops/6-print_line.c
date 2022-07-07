#include "main.h"

/**
 * print_line - adds numbers
 * _putchar - Displays characters
 * @n - Variable
 *
 * Return: Void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (n <= 0)
		{
			_putchar(10);
			break;
		}
		else
			_putchar(95);
	}
	_putchar(10);
}
