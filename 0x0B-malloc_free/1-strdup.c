#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies string
 * @str: parameter
 *
 * Return: pointer of the coppy
 */

char *_strdup(char *str)
{
	char *p;
	/*char f[] = "failed to allocate memory\n";*/
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	p = malloc(i);
	if (p == NULL || str == NULL)
	{
		/*p = f;*/
		return (NULL);
	}
	else
		for (i = 0; *(str + i) != '\0'; i++)
			*(p + i) = *(str + i);
	/**(p + i + 1) = '\0';*/
	*(p + i) = '\0';
	return (p);
}
