#include "main.h"

/**
 * swap_int - Function that swap the values of two integers
 * Return: 0 always
 * @a: variable
 * @b: variable
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
}
