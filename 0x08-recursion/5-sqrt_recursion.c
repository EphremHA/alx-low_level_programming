#include "main.h"

/**
 * _pow_recursion - finds square root *
 * @x: parameter
 * @y:parameter
 *
 * Return: square root
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
/**
 * _sqrt_recursion - power
 * @n: parameter
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int i = 1;

a:
	if (n >= 0 && _pow_recursion(i, 2) != n)
	{
		i++;
		if (_pow_recursion(i, 2) != n && i < n)
			goto a;
		else if (_pow_recursion(i, 2) == n)
			return (i);
		else if (i >= n)
			goto b;
	}
b:
	return (-1);
}
