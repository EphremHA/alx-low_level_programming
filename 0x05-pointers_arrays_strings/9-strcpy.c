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
	int i, length;

	for (i = 0; *(src + i) != 0; ++i)
		length = i;
	for (i = 0; i <= length + 1; ++i)
		*(dest + i) = *(src + i);
	return (dest);
}
