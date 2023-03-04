#include "main.h"

/**
 * _strpbrk - function that searches for any set of bytes
 * @s: string to be searched
 * @accept: other string
 * Return: pointer to bytes
 */

char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	for (; *s != '\0'; s++)
	{
		while (*a != '\0')
		{
			a++;
			{
				if (*s == *a)
				{
					return (s);
				}
			}
		}
	}
	return ('\0');
}
