#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - conctenates two strings
 * @n: bytes of string to be concatenated
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int lengthS1 = 0;
	unsigned int lengthS2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		lengthS1++;
	for (i = 0; s2[i] != '\0'; i++)
		lengthS2++;
	result = malloc(sizeof(char) * (lengthS1 + n) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= lengthS2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			result[lengthS1 + i] = s2[i];
		result[lengthS1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; i < n; i++)
			result[lengthS1 + i] = s2[i];
		result[lengthS1 + i] = '\0';
	}
	return (result);
}
