#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list of type listint
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t figure = 0;

	while (h)
	{
		figure++;
		h = h->next;
	}
	return (figure);

}
