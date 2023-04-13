#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the hash table
 */
/*
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}*/


/**
 * hash_table_create - Create a new hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the new hash table or NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = NULL;
    unsigned long int i;

    if (size == 0)
        return (NULL);

    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    return (ht);
}
