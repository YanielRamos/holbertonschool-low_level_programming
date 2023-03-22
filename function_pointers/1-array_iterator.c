#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_iterator - function that executes a function
 * @array: array with elements
 * @size: quantity of elements in array
 * @action: function that gives the info of the array
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
}
