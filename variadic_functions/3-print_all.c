#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: string with the content
 * Return: yan that have the result
 */

void print_all(const char *format, ...)
{
	va_list yan;
	int i, b;
	char c;
	float f;
	const char *s, *y;

	va_start(yan, format);
	b = 1;
	y = format;

	while (*y != '\0')
	{
		if (!b)
		{
			printf(", ");
		}
		b = 0;
			switch (*y)
			{
			case 'c':
				c = va_arg(yan, int); printf("%c", c); break;
			case 'i':
				i = va_arg(yan, int); printf("%d", i); break;
			case 'f':
				f = va_arg(yan, double); printf("%f", f); break;
			case 's':
				s = va_arg(yan, char *); printf("%s", s == NULL ? "(nil)" : s); break;
			default:
				b = 1;
				break;
			}
		y++;
	}
	printf("\n");
	va_end(yan);
}
