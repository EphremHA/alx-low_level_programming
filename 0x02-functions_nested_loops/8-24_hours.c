#include "main.h"

/**
 * jack_bauer - Count function
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i <= 50; ++i)
	{
		if (i == 48 || i == 49)
		{
			for (j = 48; j <= 57; ++j)
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
		if (i == 50)
		{
			for (j = 48; j <= 51; ++j)
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
}
