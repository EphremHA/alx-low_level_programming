#include "main.h"
/*#include <stddef.h>*/

/**
 * *_strchr - searches value of c in s
 * @s: string to be searched
 * @c: source parameter
 *
 * Return: mem. loc. of value of c in s or NULL depending on the search
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	for (i = 0; i < (int) sizeof(s); i++)
	{
		if (*(s + i) == c)
		{
			ret = (&(*(s + i)));
			/*ret = &s[i];*/
			break;
		}
		else
			ret = "NULL";
	}
	return (ret);
}
