#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z, a;

	for (x = 48; x < 58; ++x)
	{
	for (y = 48; y < 58; ++y)
	{
	for (z = 48; z < 58; ++z)
	{
	for (a = 48; a < 58; a++)
	{
		if ((z + a) > (x + y))
		{
			putchar(x);
			putchar(y);
			putchar(' ');
			putchar(z);
			putchar(a);
			if ((x + y + z + a) < 227)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	}
	}
	putchar(10);
	return (0);
}
