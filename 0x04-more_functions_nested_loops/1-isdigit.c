#include "main.h"

/**
 * _isdigit - prints small case alphabet 10x
 * _putchar - Displays characters
 * @c:  Variable of function
 *
 * Return: always b.
 */
int _isdigit(int c)
{
	int b;

	if (c >= 48 && c <= 57)
		b = 1;
	else
		b = 0;
	return (b);
}
