#include "main.h"

/**
 * flip_bits - return the number of bits one will flip to get
 * from one nuber to another
 * @n: the  first number
 * @m:and the  second number
 * Return: the  number of bits to change to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int value;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		value = ex >> i;
		if (value & 1)
			count++;
	}

	return (count);
}
