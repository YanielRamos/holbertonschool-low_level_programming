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
			printf(", ");
		b = 0;
		switch (*y)
		{
			case 'c':
				printf("%c", (c = va_arg(yan, int)));
				break;
			case 'i':
				printf("%d", (i = va_arg(yan, int)));
				break;
			case 'f':
				printf("%f", (f = va_arg(yan, double)));
				break;
			case 's':
				printf("%s", (s = va_arg(yan, const char *)) == NULL ? "(nil)" : s);
				break;
			default:
				b = 1;
				break;
		}
		y++;
	}
	printf("\n");
	va_end(yan);
}
