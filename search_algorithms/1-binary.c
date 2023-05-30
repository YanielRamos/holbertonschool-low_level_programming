#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted
 *                 array using Binary search algorithm
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the value in the array,
 * or -1 if value is not present or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0, mid, high = size - 1, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
