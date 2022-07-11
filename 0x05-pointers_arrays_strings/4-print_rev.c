#include "main.h"

/**
 * print_rev - reverse_
 * _putchar - char print
 * @s: parameter
 *
 * Return: none
 */

void print_rev(char *s)
{
	int i, j;
	int length = 0;

	for (j = 1; *(s + j) != 0; ++j)
		length = j;
	for (i = length; i >= 0; --i)
	{
		_putchar(*(s + i));
	}
	_putchar(10);
}

