#include "main.h"

/**
 * *leet - 1337
 * @str: string parameter
 *
 * Return: str
 */

char *leet(char *str)
{
	int i, j;
	char alph[] = {'a', 'e', 'o', 't', 'l'};
	char leet[] = {'4', '3', '0', '7', '1'};

	for (i = 0; *(str + i) != 0; ++i)
		for (j = 0; j <= 4; ++j)
			if (*(str + i) == alph[j] || *(str + i) - alph[j] == -32)
				*(str + i) = leet[j];
	return (str);
}
