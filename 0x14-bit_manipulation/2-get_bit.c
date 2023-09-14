#include "main.h"

/**
 * get_bit - this function will return the value
 * of a bit at an index in a decimal number
 * @n: this represents the particular  number to be  search
 * @index: index of the bit starting
 * from 0 of the bit we want to get
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int gottenValue;

	if (index > 63)
		return (-1);

	gottenValue = (n >> index & 1);

	return (gottenValue);
}
