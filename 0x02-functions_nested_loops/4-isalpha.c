#include "main.h"

/**
 * _isalpha - checks alphabet
 * _putchar - Displays characters
 * @c:  Variable of function
 *
 * Return: always b
 */
int _isalpha(int c)
{
	int b;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		b = 1;
	else
		b = 0;
	return (b);
}
