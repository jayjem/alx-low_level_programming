#include "main.h"

/**
 * clear_bit - this function will set the value of a specific bit to 0
 * @n: this is a  pointer to the number to change
 * @index: and this is the  index of the bit to clear
 *
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

