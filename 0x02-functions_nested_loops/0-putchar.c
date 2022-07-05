#include "main.h"

/**
 *
 * main - check the code
 *
 * Return: Always 0.
 *
 */
int main (void)
{
	int s = 95;
	int i = 0;

	while (i < 8)
	{
	_putchar(s);
	++i;
	
	if ( s == 95)
		s = 112;
	else if (s == 112)	
		s = 117;
	else if (s == 117 )
		s = 116;
	else if (s == 116)
		s = 99;
	else if (s == 99 )
		s = 104;
	else if (s == 104)
		s = 97;
	else if (s == 97 )
		s = 114;
	if (i == 7)
		s = 10;
	}	
return (0);
}
