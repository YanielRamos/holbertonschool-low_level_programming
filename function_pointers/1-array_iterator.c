#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/** array_iterator - function that executes a function
 * @array: 
 * @size:
 * @action:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
