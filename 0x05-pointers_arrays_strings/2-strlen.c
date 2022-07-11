/**
 * _strlen - String length counter
 * @s: parameter
 *
 * Return: none
 */

int _strlen(char *s)
{
	char str[1000000];
	int i, stop = 1;

	for (i = 0; stop != 0; ++i)
	{
		str[i] = *(s + i);
		if (str[i] == 0)
			stop = 0;
	}
	return (i - 1);
}
