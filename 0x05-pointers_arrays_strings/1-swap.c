/**
 * swap_int - Swaping function
 * @a: parameter
 * @b: Parameter
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
