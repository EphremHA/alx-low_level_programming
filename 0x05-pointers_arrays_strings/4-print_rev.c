#include "main.h"

/**
 * print_rev - print in reverse
 * _putchar - print char
 * _strlen - string length
 * @s: Parameter
 *
 * Return: none
 */

void print_rev(char *s)
{
	int i;
	int l;
	l = _strlen(s);

	for (i = l; i >= 0; --i)
	{
		_putchar(*(s + i));
	}
	_putchar(10);
}

