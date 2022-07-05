#include "main.h"

/**
 * _islower - prints small case alphabet 10x
 * _putchar - Displays characters
 * @c:  Variable of function
 *
 * Return: always b
 */
int _islower(int c)
{
	int b;

	if (c >= 97 && c <= 122)
		b = 1;
	else
		b = 0;

	return (b);
}
