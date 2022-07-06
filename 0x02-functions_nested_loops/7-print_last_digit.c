#include "main.h"

/**
 * print_last_digit - last one
 * _putchar - Displays characters
 * _abs - Absolute
 * @g: Variable
 *
 * Return: always 0.
 */
int print_last_digit(int g)
{
	g  = g - ((g / 10) * 10);
	if (g < 0)
		g *= -1;
	_putchar(g + 48);
	return (g);
}
