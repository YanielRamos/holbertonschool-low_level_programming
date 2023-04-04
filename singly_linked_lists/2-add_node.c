#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * @head: list with elements
 * @str: string to be printed
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t count = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (; str[count] != '\0'; count++)
	{}

	new_node->len = count;
	new_node->next = *head;
	*head = new_node;


	return (new_node);
}
