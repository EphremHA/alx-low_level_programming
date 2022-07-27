#include "main.h"
#include <stddef.h>

/**
 * strLen - determines number of characters in a string without the terminating character
 * @s: string parameter
 *
 * Return: number of characters
 */

int strLen(char *s)
{
	int i;
	/*char *ptr = s;*/

	if (s == NULL)
		s = "";
	for (i = 0; *(s + i) != '\0'; i++)
		;
	return (i);
}
