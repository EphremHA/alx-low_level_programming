#include "main.h"

/**
 * _sqrt_recursion - finds square root
 * @n: n^0.5
 *
 * Return: square root
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
		else
			goto b;
	}
b:
	return (-1);
}
