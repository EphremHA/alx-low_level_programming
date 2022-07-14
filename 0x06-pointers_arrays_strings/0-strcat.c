#include "main.h"

/**
 * *_strcat - Concatenate
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, dlen, slen, conc = 0;

	for (i = 0; *(dest + i) != 0; ++i)
		dlen = i;
	for (j = 0; *(src + j) != 0; ++j)
		slen = j;
	for (i = 0; *(src + i) != 0; ++i)
		/**(dest + dlen + 1 + i) = *(src + i);*/
		dest[dlen + 1 + i] = src[i];
	conc = dlen + slen;
	dest[conc + 2] = '\0';
	return (dest);
}
