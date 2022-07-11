#include "main.h"

/**
 * puts2 - print Every other char
 * _putchar - print char
 * @str: parameter
 *
 * Return: none
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; ++i)
	{
		if (i % 2 != 0)
			continue;
		else
			_putchar(*(str + i));
	}
	_putchar(10);
}
