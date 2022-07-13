#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - NUmber list
 * * @n: Variable
 *
 * Return: Void
 */
void print_to_98(int n)
{
	int i = 0;

	if (n <= 98)
		for (i = n; i <= 98; ++i)
		{
			if (i < 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("98");
		}
	else if (n > 98)
	{
		for (i = n; i >= 98; --i)
		{
			if (i > 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("98");
		}
	}
	printf("\n");
}
