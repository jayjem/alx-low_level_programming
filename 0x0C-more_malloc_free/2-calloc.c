#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates emory for an array of elements
 * @nmemb: number of elements
 * @size: byte size
 * Return: pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);

}
