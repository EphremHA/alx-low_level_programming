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

	p = str;
	for (i = 0; str[i] != '\0'; i++)
		;
	p = malloc(i + 1);
	if (p == NULL || str == NULL)
	{
		/*p = f;*/
		return (p);
	}
	for (i = 0; *(str + i) != '\0'; i++)
		*(p + i) = *(str + i);
	/**(p + i + 1) = '\0';*/
	return (p);
}
