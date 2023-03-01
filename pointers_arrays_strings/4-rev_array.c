#include "main.h"

/**
 * reverse_array - function that reverses content
 * Return: 0 always
 * @a: vairable
 * @n: variable
 */

void reverse_array(int *a, int n)
{
	int b, c;
	int temp;

	for (b = 0, c = n - 1; b < c; b++, c--)
	{
		temp = a[b];
		a[b] = a[c];
		a[c] = temp;
	}
}
