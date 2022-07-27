#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int str1, str2, constr, i, j = 0;
	char *ptr;

	str1 = strLen(s1);
	str2 = strLen(s2);
	constr = str1 + str2;  /* +1 == '\0' */

	ptr = (char *) malloc(constr);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < constr; i++)
	{
		if (i < str1)
			*(ptr + i) = *(s1 + i);
		if (i >= str1)
		{
			*(ptr + i) = *(s2 + j);
			j++;
		}
	}
	*(ptr + i) = '\0';
	return (ptr);
}
