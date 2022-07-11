#include "main.h"

/**
 * _strlen - String length counter
 * @str: parameter
 *
 * Return: none
 */

void puts_half(char *str)
{
	long unsigned int i, length = 0, n;

	for (i = 0; *(str + i) != 0; ++i)
		length = i;
	length = i + 1;
	if (length % 2 != 0)
		n = (length - 1) / 2;
	else
		n = length;
	for (i = n; *(str + i) != 0; ++i)
		_putchar(*(str + i));
	_putchar(10);

}
