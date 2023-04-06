#include "lists.h"

/**
 * add_dnodeint_end - function tha add node at end
 * @head: ponter to list
 * @n: integers
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *temp;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;
	new_node->prev = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		temp->prev = NULL;
	}

	return (new_node);
}
