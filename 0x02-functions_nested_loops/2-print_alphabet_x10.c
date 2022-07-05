#include "main.h"

/**
 * print_alphabet_x10 - prints small case alphabet 10x
 * _putchar - Displays characters
 */
void print_alphabet_x10(void)
{
	int s;
	int l;

	for (l = 0; l < 10; ++l)
	{
		for (s = 97; s <= 122; ++s)
		{
			_putchar(s);
		}
		_putchar(10);
	}
}
