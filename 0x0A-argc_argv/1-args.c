#include <stdio.h>

/**
 * main - prints argc
 * @argc: number of arguments
 * @argv: argument strings
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	long fix;

	fix = (long) argv[0];
	fix = 0;
	printf("%d\n", argc);
	return (fix);
}
