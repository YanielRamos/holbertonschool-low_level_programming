#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - function that concatenates
 * @s1: first string
 * @s2: second string
 * @n: unsigned int
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	str = malloc(len1 + n + 1 *sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(str, s1);
	strcat(str, s2);
	str[len1 + n] = '\0';

	return (str);
}
