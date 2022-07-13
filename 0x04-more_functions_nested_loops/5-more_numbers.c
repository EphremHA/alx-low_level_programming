#include "main.h"

/**
 * more_numbers - adds numbers
 * _putchar - Displays characters
 *
 * Return: Void
 */

void more_numbers(void)
{
	int i, j, p = 0;

	for (i = 48; i <= 57; ++i)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				p = 48 + j;
			}
			if (j > 9)
			{
				p = 48 + (j - 10);
				_putchar(49);
			}
			_putchar(p);
			p = 0;
		}
		_putchar(10);
	}
}
