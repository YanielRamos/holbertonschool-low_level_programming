#include "main.h"

/**
 * _puts - Function thats prints a string
 * Return: 0 always
 * @str: variable
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
