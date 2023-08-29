#include "lists.h"

/**
 * pop_listint - this  deletes the head node of linked list
 * @head:this is a  pointer to the first element in the linked list
 *
 * Return: we will return the data inside the elements that was deleted,
 * or return 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int figure;

	if (!head || !*head)
		return (0);

	figure = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (figure);

}
