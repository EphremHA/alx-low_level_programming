#include "main.h"
#include <stdlib.h>

/**
 * create_array - creats memory space of size size and fills it with char c
 * @size: size
 * @c: filling character
 *
 * Return: pointer or null
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
	{
		return ('\0');
	}
	else if (size > 0)
	{
		p = malloc(size * sizeof(c));
		if (p == NULL)
		{
			return ('\0');
		}
		else
		{
			for (i = 0; i < (int)(size * sizeof(c)); i++)
				p[i] = c;
		}
		return (p);
	}
	return (0);
}
