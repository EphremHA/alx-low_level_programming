#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - prints arguments with provided format string
 * @format: format string
 *
 * Return: none
 */

void print_all(const char * const format, ...)
{
	int cn = 0, nil;
	char *sstr;
	va_list ap;

	va_start(ap, format);
	while (*(format + cn) != '\0')
	{
		switch (*(format + cn))
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 's':
				sstr = va_arg(ap, char*);
				if (sstr == NULL)
				{
					printf("(nil)");
					sstr = "";
					nil = 1;
				}
				printf("%s", sstr);
				nil = 0;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			default:
				nil = 1;
		}
		if (*(format + cn + 1) != '\0' && nil != 1)
			printf(", ");
		cn++;
		nil = 0;
	}
	va_end(ap);
	printf("\n");
}
