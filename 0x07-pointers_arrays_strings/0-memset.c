#include "main.h"

/**
 * char *_memset - fills the next n memory area pointed by s with b
 * @s: pointer parameter
 * @b: filling parameter
 * @n: amount of memory
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
		*(s + i) = b;
	return (s);
}
