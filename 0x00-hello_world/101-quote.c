#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 *
 */

int main(void)
{
	int write(int filedes, const char *buf, unsigned int nbyte);
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
