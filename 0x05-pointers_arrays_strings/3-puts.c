#include "main.h"

/**
 * _puts - print to screen
 * _putchar - char print
 * @str: parameter
 *
 * Return: none
 */

void _puts(char *str)
{
	char pr[1000000];
	int i;
	int stop = 1;

	for (i = 0; stop != 0; ++i)
	{
		pr[i] = *(str + i);
		if (pr[i] != 0)
			_putchar(pr[i]);
		else
			stop = 0;
	}
	_putchar(10);
}
