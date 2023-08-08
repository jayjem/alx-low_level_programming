#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int lengthS2 = 0;
	int lengthS1 = 0;
	int i;
	char *output;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; s1[i] != '\0'; i++)
		lengthS1++;
	for (i = 0; s2[i] != '\0'; i++)
		lengthS2++;

	output = malloc(sizeof(char) * (lengthS1 + lengthS2) + 1);

	if (output == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		output[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		output[lengthS1 + i] = s2[i];
	return (output);
}
