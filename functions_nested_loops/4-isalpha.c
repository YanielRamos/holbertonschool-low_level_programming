#include "main.h"

/**
 * _isalpha - starting point
 * Return: always 0
 * @c: variable
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 121)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
