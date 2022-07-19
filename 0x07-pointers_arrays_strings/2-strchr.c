#include "main.h"

/**
 * *_strchr - searches value of c in s
 * @s: string to be searched
 * @c: search character
 *
 * Return: mem. loc. of value of c in s or NULL depending on the search
 */

char *_strchr(char *s, char c)
{
	int i;
	/*char *str;*/

	for (i = 0; *(s + i) != c; i++)
	{
		if (*(s + i) == c)
		{
			break;
		}
	}
	return ((s + i));
}
