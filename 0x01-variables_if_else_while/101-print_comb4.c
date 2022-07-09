#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x < 58; ++x)
	{
		for (y = 48; y < 58; ++y)
		{
			for (z = 48; z < 58; ++z)
			{

				if ((y > x) && (z > y))
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x + y + z < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
