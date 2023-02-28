#include "main.h"

/**
 * print_rev - starting point
 * Return: 0 succesful
 * @s: variable
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
	a++;
	}

	for (a -= 1; a >= 0; a--)
	{
	_putchar(s[a]);
	}
	_putchar('\n');
}
