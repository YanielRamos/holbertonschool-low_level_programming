#include "lists.h"

/**
 * list_len - function that return the number of elements
 * @h: list with elements
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
