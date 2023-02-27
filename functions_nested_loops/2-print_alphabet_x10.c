#include "main.h"

/**
 * print_alphabet_x10 - printea el alfabeto 10 veces
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	j = 0;

	while (j <= 9)
	{
	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');
	j++;
	}
}
