#include "main.h"

/**
 * *_strstr - function that finds first occurence of substring in a string
 * @haystack: string to be analyzed
 * @needle: substring
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;

	char *p2 = needle;

	while (*p1 != '\0')
	{
		if (*p1 == *p2)
		{
			char *p1_A = p1;

			while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
			{
				p1++;
				p2++;
			}
			if (*p2 == '\0')
			{
				return (p1_A);
			}
			else
			{
				p1 = p1_A;
				p2 = needle;
			}
		}
		else
		{
			p1++;
		}
	}
	return ('\0');
}
