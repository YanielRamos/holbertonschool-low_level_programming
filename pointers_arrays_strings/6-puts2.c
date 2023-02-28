#include "main.h"

/**
 * puts2 - starting point
 * @str: variable
 * Return: 0 always
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}
