#include "lists.h"

/**
 * sum_dlistint - function that sums all the elements
 * @head: list with elements
 * Return: the sum of all nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
