#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: argument strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	i = argc;
	i = 0;
	return(i);
}
