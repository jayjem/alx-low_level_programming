#include "lists.h"
/**
 * print_listint - prints all the element in a linked list
 * @h: linked list to be printed out
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t figure = 0;

	while (h)
	{
		printf("%d\n", h->n);
		figure++;
		h = h->next;
	}
	return (figure);
}
