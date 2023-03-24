#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints a string
 * @separator: string
 * @n: elements on string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;
	char *st;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(ls, char *);
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ls);
}
