#include "main.h"

/**
 * *_strcat - Concatenate
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, dlen;

	for (dlen = 0 ; *(dest + dlen) != '\0'; ++dlen)
		;
	for (i = 0; *(src + i) != '\0'; ++i)
		*(dest + dlen + i) = *(src + i);
	for (dlen = 0 ; *(dest + dlen) != '\0'; ++dlen)
		;
	*(dest + dlen) = '\0';
	return (dest);
}
