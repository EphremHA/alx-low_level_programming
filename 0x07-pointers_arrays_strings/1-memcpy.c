#include "main.h"

/**
 * *_memcpy - copies n bytes to mem loc. pointed to by dest from mem loc. src
 * @dest: dest pointer
 * @src: source parameter
 * @n: amount of memory
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
