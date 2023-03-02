#include "main.h"

/**
 * string_toupper - function that changes all lowercases of a string
 * @s: variabl
 * *Return: s
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - ('a' - 'A');
		}
	}
	return (s);
}
