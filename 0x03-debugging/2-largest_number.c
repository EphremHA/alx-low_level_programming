#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @aa: first integer
 * @bb: second integer
 * @cc: third integer
 * Return: largest number
 */

int largest_number(int aa, int bb, int cc)
{
	int flargest;

	if (aa > bb && bb > cc)
	{
		flargest = aa;
	}
	if (bb > aa && aa > cc)
	{
		flargest = bb;
	}
	if (cc > aa && cc > bb)
	{
		flargest = cc;
	}

	return (flargest);
}
