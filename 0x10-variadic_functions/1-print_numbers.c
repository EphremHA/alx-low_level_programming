#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers - prints arguments with provided format string
 * @separator: format string
 * @n: number of arguments
 *
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	if (*separator == '0')
		goto a;
	va_start(ap, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i == (int) (n - 1))
			goto a;
		printf("%s", separator);
	}
a:
	va_end(ap);
	printf("\n");
}
