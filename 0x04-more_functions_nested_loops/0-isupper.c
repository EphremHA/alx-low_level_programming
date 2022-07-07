#include "main.h"

/**
 * _isupper - prints small case alphabet 10x
 * _putchar - Displays characters
 * @c:  Variable of function
 *
 * Return: always b.
 */
int _isupper(int c)
{
	int b;

	if (c >= 65 && c <= 90)
		b = 1;
	else
		b = 0;
	return (b);
}
