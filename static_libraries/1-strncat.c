#include "main.h"

/**
 * _strncat - starting point
 * @dest: variables
 * @src: variables
 * @n: variables
 * Return: dest always
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, i;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
}
