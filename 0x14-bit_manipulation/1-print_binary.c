#include "main.h"

/**
 * print_binary - this function prints the binary figure
 *  of a decimal number
 * @n: this represents the  number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int cur;

	for (i = 63; i >= 0; i--)
	{
		cur  = n >> i;

		if (cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
