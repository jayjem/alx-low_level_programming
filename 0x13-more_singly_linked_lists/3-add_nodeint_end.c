#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addedNode;
	listint_t *temp = *head;

	addedNode = malloc(sizeof(listint_t));
	if (addedNode == NULL)
		return (NULL);

	addedNode->n = n;
	addedNode->next = NULL;

	if (*head == NULL)
	{
		*head = addedNode;
		return (addedNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = addedNode;

	return (addedNode);

}
