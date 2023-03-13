#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * @str: string
 * Return: Null succes
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str) + 1;
	s = (char *) malloc(len * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
