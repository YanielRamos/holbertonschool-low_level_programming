#include <string.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: 0 minimun of integers
 * @max: 10 maximun of integers
 * Return: range have the array with integers
 */

int *array_range(int min, int max)
{
	int *range;
	int add;

	if (min > max)
		return (NULL);

	range = malloc((max - min + 1) * sizeof(int));

	if (range == NULL)
		return (NULL);

	for (add = 0; max - min >= add; add++)
		range[add] = min + add;

	return (range);
}
