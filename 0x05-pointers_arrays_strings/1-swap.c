#include "main.h"

/**
 * swap_int - swap two integers
 * @a : the first integer to be swapped
 * @b : the second value to be swapped
 * return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
