#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes node at index
 * @head: list with elements
 * @index: position of node
 * Return: 1 if it succeeded or -1if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *actual_node, *prev_node;

	actual_node = *head;
	prev_node = NULL;

	if (actual_node != NULL && index == 0)
	{
		*head = actual_node->next;
		free(actual_node);
		return (1);
	}

	while (actual_node != NULL && index > 0)
	{
		prev_node = actual_node;
		actual_node = actual_node->next;
		index--;
	}

	if (actual_node == NULL)
		return (-1);

	prev_node->next = actual_node->next;
	free(actual_node);
	return (1);
}
