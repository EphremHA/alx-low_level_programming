#include "main.h"

/**
 * *_strncpy - Concatenate
 * @dest: destination parameter
 * @src: source parameter
 * @n: byte to bo appended
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, dlen = 0, slen = 0;

	for (dlen = 0; *(dest + dlen) != '\0'; ++dlen)
		;
	for (slen = 0; *(src + slen) != '\0'; ++slen)
		;
	if (n < slen)
		for (i = 0; i <= n - 1; i++)
			*(dest + i) = *(src + i);
	if (n > slen)
	{
		for (i = 0; *(src + i) != 0; ++i)
			*(dest + i) = *(src + i);
		/*for (i = slen; i <= dlen; i++)*/
			*(dest + i) = '\0';
	}
	return (dest);
}
