#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;
	va_list argument;

	if (n == 0)
		return (0);
	va_start(argument, n);
	for (i = 0; i < n; i++)
	{
		total = total + va_arg(argument, int);
	}
	va_end(argument);
	return (total);
}
