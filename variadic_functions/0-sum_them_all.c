#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum
 * @n: variable
 * Return: succesfull
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int i;
	unsigned int sum;

	va_start(al, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(al, int);
	}

	return (sum);
}
