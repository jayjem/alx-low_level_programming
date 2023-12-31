#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	unsigned int i;

	if (size == 0)
		return (NULL);

	ar =  malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
