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

	for (i = 0; i < (int) sizeof(s); i++)
	{
		if (*(s + i) == c)
			return (&s[i]);
		else if (s[i] == 0)
			return ('\0');
	}
	return ('\0');
}
