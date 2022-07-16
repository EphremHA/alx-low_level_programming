#include "main.h"

/**
 * times_table - number table
 * _putchar - Displays characters
 *
 * Return: void
 */
void times_table(void)
{
	int r, c, p, fd, sd;

	for (r = 0; r <= 9; ++r)
	{
		for (c = 0; c <= 9; ++c)
		{
			p = r * c;
			fd = p % 10;
			sd = p / 10;
			if (c == 0)
				_putchar(48 + fd);
			else if (c > 0 && sd == 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(48 + fd);
			}
			else if (c > 0 && sd > 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(48 + sd);
				_putchar(48 + fd);
			}
		}
		_putchar(10);
	}
}
