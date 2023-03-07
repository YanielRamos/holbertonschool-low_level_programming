#include "main.h"

/**
 * factorial - function that return the factorial
 * @n: variable with num
 * Return: 1 is above 0 and return -1 if lower than 0
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
