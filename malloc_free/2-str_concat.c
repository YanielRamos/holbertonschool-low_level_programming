#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: Best
 * @s2: School
 * Return: conc to be succesful
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int len1;
	int len2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	conc = malloc(len1 + len2 + 1);

	if (conc == NULL)
	{
		return (NULL);
	}
	strcpy(conc, s1);
	strcat(conc, s2);
	return (conc);
}
