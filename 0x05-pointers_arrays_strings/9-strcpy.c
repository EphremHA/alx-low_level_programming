#include "main.h"

/**
 * _strcpy - copy
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != 0; ++i)
		*(dest + i) = *(src + i);
	return (dest);
}
