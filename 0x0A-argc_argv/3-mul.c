#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies arguments
 * @argc: number of arguments
 * @argv: argument strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
