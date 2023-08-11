#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memeory using malloc
 * @b : size of the memory
 * Return: pointer to the now allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);

	if (result == NULL)
		exit(98);
	else
		return (result);
}
