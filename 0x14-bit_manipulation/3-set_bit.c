#include "main.h"

/**
 * set_bit - this function sets the value of a bit to 1
 * when at a given index
 * @n: this represents a pointer to the number to change
 * @index: this is the  index of the bit to set to 1
 * Return: 1in the case success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
