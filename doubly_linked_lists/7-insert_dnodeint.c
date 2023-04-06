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

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h == NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	temp = *h;

	while (temp != NULL && finder < idx)
	{
		temp = temp->next;
		finder++;
	}

	if (finder != idx)
	{
		free(new_node);
		return (NULL);
	}

	temp2 = temp->next;
	new_node->prev = temp;
	new_node->next = temp2;

	if (temp2 == NULL)
		temp->next = new_node;

	temp->next = new_node;
	return (new_node);
}
