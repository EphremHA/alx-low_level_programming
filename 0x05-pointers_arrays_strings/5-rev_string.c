#include "main.h"

/**
 * rev_string - reverse_
 * _putchar - char print
 * @s: parameter
 *
 * Return: none
 */

void rev_string(char *s)
{
	int i, j, k = 0, l;
	int length = 0;
	char t[1000000];

	for (j = 1; *(s + j) != 0; ++j)
		length = j;

	/*char t[1000000];*/

	for (i = length; i >= 0; --i)
	{
		if (length == 0)
			break;
		t[k] = *(s + i);
		++k;
	}
	/*for(l = 0; l == length; ++l)*/
		/**(s + l) = t[l];*/
	for (l = 0; t[l] != 0; ++l)
		*(s + l) = t[l];
}

