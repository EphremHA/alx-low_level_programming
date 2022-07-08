#include "main.h"

/**
 * print_triangle - # triangle
 * @size:- triangle size
 *
 * Return: 0
 */

int print_triangle(int size)
{
	int c, r;

	if (size == 1)
	{
		_putchar(35);
		_putchar(10);
	}
	else if (size == 0)
		_putchar(10);
	else if (size > 1)
	{
		for (r = 1; r <= size; ++r)
		{
			for (c = 1; c <= size; ++c)
			{
				if (r + c <= size)
					_putchar(32);
				else if (r + c > size)
					_putchar(35);
			}
			_putchar(10);
		}
	}
	return (0);
}
