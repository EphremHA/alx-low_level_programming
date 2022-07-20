#include "main.h"

/**
 * _strspn - number of bytes in s which includes accept
 * @s: string for searching
 * @accept: to be searched within s
 *
 * Return: number of bytes in s that match accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, check = 0;
	char ts = *(s + 0), tu = *(accept + 0);

	if (ts == '\0' || tu == '\0')
		return (check);
	for (i = 0; *(s + i) > '\0'; i++)
	{
		ts = *(s + i);
		for (j = 0; *(accept + j) > '\0'; j++)
		{
			tu = *(accept + j);
			if ((ts != ' ' && ts != '.' && ts != ',') && (ts == tu))
				++check;
			if (ts == ' ' || ts == '.' || ts == ',')
				return (check);
		}
	}
	return (check);
}
