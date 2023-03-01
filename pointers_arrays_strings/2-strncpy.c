#include "main.h"

/**
 * *_strncpy - Function that copies
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*p  = src[i];
	}
	return (dest);
}
