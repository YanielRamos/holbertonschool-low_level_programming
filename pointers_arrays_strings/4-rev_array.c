#include "main.h"

/**
 * reverse_array - function that reverses content
 * Return: void
 * @a: vairable
 * @n: variable
 */

void reverse_array(int *a, int n)
{
	int b, c;
	int e;

	for (b = 0, c = n - 1; b < c; b++, c--)
	{
		e = a[b];
		a[b] = a[c];
		a[c] = e;
	}
}
