#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: parameter
 * @s2: parameter
 *
 * return: c
 */

int _strcmp(char *s1, char *s2)
{
	int i, c = 0;

	for(i = 0; *(s1 + i) != 0; ++i)
	{
		c = *(s1 + i) - *(s2 + i);
		if (c != 0)
		{
			return (c);
			break;
		}
	}
	return (c);
}
