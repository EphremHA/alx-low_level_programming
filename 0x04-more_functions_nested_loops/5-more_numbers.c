#include "main.h"

/**
 * more_numbers - adds numbers
 * _putchar - Displays characters
 *
 * Return: Void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 48; i <= 57; ++i)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				_putchar(48 + j);
			}
			if (j > 9)
			{
				_putchar(49);
				_putchar(48 + (j - 10));
			}
		}
		_putchar(10);
	}
}
