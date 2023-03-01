#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * Return: 0 always
 * @dest: variables
 * @src: varianles
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;
	
	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
			
}
