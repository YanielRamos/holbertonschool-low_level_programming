#include <stdio.h>
#include "main.h"

/**
 * print_array - starting point
 * @a: pointer
 * @n: variable
 * Return: 0 always
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
