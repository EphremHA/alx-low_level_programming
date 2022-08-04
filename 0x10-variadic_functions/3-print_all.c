#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints arguments with provided format string
 * @format: format string
 *
 * Return: none
 */

void print_all(const char * const format, ...)
{
	int cn = 0, print = 1;
	char *fstr;
	va_list ap;

	va_start(ap, format);
	while (1)
	{
		switch (*(format + cn))
		{
			case 'c':
				fstr = "%c";
				print = 1;
				printf(fstr, va_arg(ap, int));
				break;
			case 's':
				fstr = "%s";
				print = 1;
				printf(fstr, va_arg(ap, char*));
				break;
			case 'i':
				fstr = "%d";
				print = 1;
				printf(fstr, va_arg(ap, int));
				break;
			case 'f':
				fstr = "%f";
				print = 1;
				printf(fstr, va_arg(ap, double));
				break;
			default:
				print = 0;
		}
		if (*(format + cn + 1) != '\0' && print == 1)
			printf(", ");
		if (*(format + cn) == '\0')
			break;
		cn++;
	}
	va_end(ap);
	printf("\n");
}
