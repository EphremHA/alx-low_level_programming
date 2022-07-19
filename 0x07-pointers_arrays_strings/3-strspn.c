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
	int check = 0;

	for (i = 0; i <= (int) sizeof(accept); i++)
	{
		for (j = 0; j <= (int) sizeof(s); j++)
		{
			if (accept[i] == s[j])
			{
				if (check <= j)
				{
					check = j;
					break;
				}
				break;
			}
		}
	}
	return (check + 1);
}
