#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: list with elements
 * @index: position of the node
 * Return: the node nth
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int finder = 0;
	dlistint_t *node;

	node = head;

	while (node != NULL && finder != index)
	{
		node = node->next;
		finder++;
	}

	if (node == NULL)
		return (NULL);

	return (node);
}
