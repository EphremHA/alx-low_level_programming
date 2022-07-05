#include "main.h"

/**
 * main - Entry point
 * _putchar - Displays characters
 *
 * @c - Variable of called function
 *
 * Return: Always 0.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	int s = 95;
	int i = 0;

	while (i < 8)
	{
	_putchar(s);

	if (i == 0)
		s = 112;
	else if (i == 1)
		s = 117;
	else if (i == 2)
		s = 116;
	else if (i == 3)
		s = 99;
	else if (i == 4)
		s = 104;
	else if (i == 5)
		s = 97;
	else if (i == 6)
		s = 114;
	++i;
	}
	_putchar(10);
	return (0);
}
