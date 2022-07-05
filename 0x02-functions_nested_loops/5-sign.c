#include "main.h"

/**
 * print_sign - checks alphabet
 * _putchar - Displays characters
 * @n: Variable
 *
 * Return: always b
 */
int print_sign(int n)
{
	int b;

	if (n != 0)
	{
		if (n > 0)
		{
			_putchar(43);
			b = 1;
		}
		if (n < 0)
		{
			_putchar(45);
			b = -1;
		}
	}
	else if (n == 0)
	{
		_putchar(48);
		b = 0;
	}
	return (b);
}
