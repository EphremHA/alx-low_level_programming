#include "main.h"
/**
 * set_digits - takes number and separates digits
 * @p: parameter
 * @d1: first digit
 * @d2: second digit
 * @d3: third digit
 *
 * Return: either of fd, sd or td
 */

int set_digits(int p, d1, d2, d3)
{
	if (p <= 99)
	{
		fd = p % 10;
		sd = p /10;
		td = 0;
	}
	else if ( p > 99)
	{
		fd = % 10;
		sd = (p / 10) % 10;
		td = p / 100;
	}
	if (d1 == 1 && d2 == 0 && d3 == 0)
		return (fd);
	if (d1 == 0 && d2 == 1 && d3 == 0)
		 return (sd);
	if (d1 == 0 && d2 == 0 && d3 == 1)
		return (td);
}
