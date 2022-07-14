#include "main.h"

/**
 * *_strncat - Concatenate
 * @dest: destination parameter
 * @src: source parameter
 * @n: byte to bo appended
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dlen;

	for (dlen = 0 ; *(dest + dlen) != '\0'; ++dlen)
		;
	for (i = 0; i <= n - 1; ++i)
		*(dest + dlen + i) = *(src + i);
	for (dlen = 0 ; *(dest + dlen) != '\0'; ++dlen)
		;
	*(dest + dlen) = '\0';
	return (dest);
}
