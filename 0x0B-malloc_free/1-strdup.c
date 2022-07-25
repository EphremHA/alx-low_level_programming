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
	p = create_array((int)sizeof(str), 'E');
	for (i = 0; *(str + i) != '\0'; i++)
		p[i] = str[i];
	/**(p + i + 1) = '\0';*/
	return (p);
}
