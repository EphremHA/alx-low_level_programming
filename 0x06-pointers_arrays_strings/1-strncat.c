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
	int i = 0, dlen = 0, slen = 0;

	while (*(dest + dlen))
		++dlen;
	while (*(src + slen))
		++slen;
	if (n <= slen)
		for (i = 0 ;i <= n - 1; ++i)
			*(dest + dlen + i) = *(src + i);
	else if (n > slen)
		for (i = 0 ; *(src + i) != 0; ++i)
			*(dest + dlen + i) = *(src + i);
	*(dest + dlen + i) = '\0';
	return (dest);
}
