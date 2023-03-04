#include "main.h"

/**
 * swap_int - Function that swap the values of two integers
 * Return: 0 always
 * @a: variable
 * @b: variable
 */

void swap_int(int *a, int *b)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return dest;
}
