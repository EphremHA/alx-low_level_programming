#include "main.h"

/**
 * _abs - doesn't like negatives
 * _putchar - Displays characters
 * @n: Variable
 *
 * Return: always n
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
