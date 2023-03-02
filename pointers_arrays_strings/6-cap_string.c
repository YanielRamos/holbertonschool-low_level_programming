#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 * @str: string with info
 * Return: str to have the result
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= ('a' - 'A');
	}

	while (str[i] != '\0')
	{

		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' ||
			str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' ||
			str[i] == '{' || str[i] == '}')
		{
			i++;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' ||
			str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' ||
			str[i] == '{' || str[i] == '}')
		{
			i++;
		}

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		}
		else
		{
			i++;
		}
	}
	return (str);
}
