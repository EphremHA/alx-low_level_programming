#include "main.h"

/**
 * *cap_string - capitalize words
 * @str: parameter
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i, j, state = 0;
	int sepChar[13] = {10, 9, 32, 44, 46, 59, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		for (j = 0; j <= 12; ++j)
		{
			if (*(str + i) == sepChar[j])
			{
				state = 0;
				break;
			}
		}
		if ((*(str + i) >= 97 && *(str + i) <= 122) && state == 0)
		{
			*(str + i) -= 32;
			state = 1;
		}
		if ((*(str + i) >= 65 && *(str + i) <= 90) && state == 0)
			state = 1;
		if (*(str + i) >= 48 && *(str + i) <= 57)
			state = 1;
	}
	return (str);
}
