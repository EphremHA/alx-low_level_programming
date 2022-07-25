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
	int i;

	p = str;

	if (str[0] == '0')
		return (NULL);
	p = malloc(sizeof(str));
	for (i = 0; i < (int) sizeof(str); i++)
		p[i] = str[i];
	return (p);
}
