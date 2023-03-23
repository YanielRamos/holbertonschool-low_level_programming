#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for a integer
 * @array: array with all the integers
 * @size: quantity of elements inside the array
 * @cmp: function pointer
 * Return: -1 if size <= 0 or no elements otherwise indexof array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			if (cmp(array[c]))
			{
				return (c);
			}
		}
	}
	return (-1);
}

