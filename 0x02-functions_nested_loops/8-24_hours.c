#include "main.h"

/**
 * jack_bauer - Count function
 */
void jack_bauer(void)
{
	int i, j, k, l, c;

	for (i = 48; i <= 50; ++i)
	{
		if (i == 48 || i == 49)
		{
			c = 57;
		}
		else
		{
			c = 51;
		}
			for (j = 48; j <= c; ++j)
			{
				for (k = 48; k <= 53; ++k)
				{
					for (l = 48; l <= 57; ++l)
					{
						_putchar(i);
						_putchar(j);
						_putchar(58);
						_putchar(k);
						_putchar(l);
						_putchar(10);
					}
				}
			}
	}
}
