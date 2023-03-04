#include "main.h"

/*
 * _strpbrk - function
 * @s: string
 * @accept: variable
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
	char *s_ptr, *a_ptr;

	for (s_ptr = s; *s_ptr != '\0'; s_ptr++)
	{
        	for (a_ptr = accept; *a_ptr != '\0'; a_ptr++)
		{
			if (*s_ptr == *a_ptr)
			{
				return s_ptr;
			}
		}
	}
	return ('\0');
}
