#include "main.h"

/**
 * _strlen - Function that print the lenght of a string.
 * Return: 0 always
 * @s: pointer variable
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return a;
}
