#include "main.h"

/**
 * _pow_recursion - power function
 * @x: base number
 * @y: exponent
 *
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	if (y < 0 && (y % 2 == 0))
		return (-1);
	if (x < 0 && (y % 3 == 0))
		return (x * _pow_recursion(x, y - 1));
	return (x * _pow_recursion(x, y - 1));
}
