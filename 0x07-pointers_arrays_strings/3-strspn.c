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
	int i, j;
	int check = 1;

	for (i = 0; accept[i] != 0; i++)
	{
		for (j = 0; s[j] != 0; j++)
		{
			if (accept[i] == s[j])
			{
				++check;
				break;
			}
		}
	}
	return (check);
}
