#include "lists.h"

/**
 * dlistint_len - function that return the numbers of elements in dlistint_t
 * @h: list with elements
 * Return: Numbers of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	while (h != NULL)
	{
		h = h->prev;
		count++;
	}
	return (count);
}
