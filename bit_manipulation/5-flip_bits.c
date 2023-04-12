#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: first number
 * @m: second numeber
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ret = 0, flip;

	flip = n ^ m;

	while (flip)
	{
		ret += flip & 1;
		flip >>= 1;
	}
	return (ret);
}
