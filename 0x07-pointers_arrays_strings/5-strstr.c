#include "main.h"

/**
 * *_strstr - searches value of needle in haystack
 * @haystack: string to be searched
 * @needle: search string
 *
 * Return: mem. loc. of value of c in s or NULL depending on the search
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; i < (int) sizeof(needle); i++)
	{
		for (j = 0; j < (int) sizeof(haystack); j++)
		{
			if (*(haystack + j) == *(needle + i))
			{
				return (haystack + j);
			}
		}
	}
	return ('\0');
}
