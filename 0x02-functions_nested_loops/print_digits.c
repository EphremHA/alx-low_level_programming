include "main.h"

/**
 * print_digits - formating function
 * @fd: first digit
 * @sd: second digit
 * @td: third digit
 *
 * Return: void
 */

void print_digits(int fd, int sd, int td)
{
	if (fd > 0 && sd == 0 && td == 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(32);
		_putchar(48 + fd);
	}
	else if (fd > 0 && sd > 0 && td == 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(48 + sd);
		_putchar(48 + fd);
	}
	else if (td > 0 && sd >= 0 && td > 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(48 + td);
		_putchar(48 + sd);
		_putchar(48 + fd);
	}
}
