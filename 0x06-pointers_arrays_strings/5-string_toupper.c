#include "main.h"

/**
 * *string_toupper - capitalize
 * @A: parameter
 *
 * Return: A
 */

char *string_toupper(char *A)
{
	int i;

	for (i = 0; *(A + i) != 0; ++i)
		if (*(A + i) >= 97 && *(A + i) <= 122)
			*(A + i) -= 32;
	*(A + i) = '\0';
	return (A);
}
