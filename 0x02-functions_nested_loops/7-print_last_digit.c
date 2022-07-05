#include "main.h"

/**
 * print_last_digit - last one
 * _putchar - Displays characters
 * @g: Variable
 *
 * Return: always g
 */
int print_last_digit(int g)
{
	g = g - ((g / 10) * 10);
	return (g);
}
