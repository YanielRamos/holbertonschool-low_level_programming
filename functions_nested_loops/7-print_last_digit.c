#include "main.h"

/**
 * print_last_digit - starting point
 * Return: end point
 * @y: variable
 */

int print_last_digit(int y)
{
	int x = (y % 10);

	if (x < 0)
	{
		x = (x * -1);
	}

	_putchar('0' + x);
	return (x);
}
