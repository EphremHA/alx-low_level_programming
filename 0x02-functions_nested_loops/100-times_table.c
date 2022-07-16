#include "main.h"
#include "set_digits.c"
#include "print_digits.c"

/**
 * print_times_table - number table
 * set_digits- returns digits
 * _putchar - Displays characters
 * print_digits - formating function
 * @n: n times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int r, c, p, fd, sd, td;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; ++r)
		{
			for (c = 0; c <= n; ++c)
			{
				p = r * c;
				fd = set_digits(p, 1, 0, 0);
				sd = set_digits(p, 0, 1, 0);
				td = set_digits(p, 0, 0, 1);
				if (c == 0)
					print_digits(0, 0, 0);
				else if (r == 0)
					print_digits(1000, 0, 0);
				else if (c > 0 && sd == 0 && td == 0)
					print_digits(fd, sd, td);
				else if (c > 0 && sd > 0 && td == 0)
					print_digits(fd, sd, td);
				else if (c > 0 && sd >= 0 && td > 0)
					print_digits(fd, sd, td);
			}
			_putchar(10);
		}
	}
}
