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

int set_digits(int p, int d1, int d2, int d3)
{
	int fd, sd, td, rt;

	if (p <= 99)
	{
		fd = p % 10;
		sd = p / 10;
		td = 0;
	}
	else if (p > 99)
	{
		fd = p % 10;
		sd = (p / 10) % 10;
		td = p / 100;
	}
	if (d1 == 1 && d2 == 0 && d3 == 0)
		rt = fd;
	if (d1 == 0 && d2 == 1 && d3 == 0)
		rt = sd;
	if (d1 == 0 && d2 == 0 && d3 == 1)
		rt = td;
	return (rt);
}
