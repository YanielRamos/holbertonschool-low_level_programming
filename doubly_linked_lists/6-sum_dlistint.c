#include "lists.h"

/**
 * sum_dlistint - function that sums all the elements
 * @head: list with elements
 * Return: the sum of all nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	int sum = 0;
	
	node = head;
	node->n = head->n;

	if (node == NULL)
		return (0);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
