#include "main.h"

/**
 * _puts - Function thats prints a string
 * Return: 0 always
 * @str: variable
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
