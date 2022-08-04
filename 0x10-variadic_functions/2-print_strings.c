#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_strings - variadic function that sums all its arguments
 * @separator: format string
 * @n: fixed argument
 *
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str != NULL)
			printf("%s", str);
		else if (str == NULL)
			printf("(nil)");
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
