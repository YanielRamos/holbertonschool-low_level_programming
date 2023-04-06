#include "lists.h"

/**
 * insert_dnodeint_at_index - function that adds node to specific position
 * @h: list with elements
 * @idx: position to add the new node
 * @n: integers
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp, *temp2;
	size_t finder = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node = *h;
	temp = *h;
	temp2 = *h;
	new_node->n = n;

	while (new_node != NULL && finder != idx)
	{
		temp = temp->next;
		temp2 = temp2->next;
		finder++;
	}

	temp = temp->prev;
	temp2 = temp2->next;

	if (temp && temp2 == NULL)
		return (NULL);

	new_node->prev = temp;
	new_node->next = temp2;

	temp->next = new_node;
	temp2->prev = new_node;

	return (new_node);
}
