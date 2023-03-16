#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: size of memery
 * @size: size of bytes
 * Return: cal
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *caloc;
	unsigned int s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = nmemb * size;
	caloc = malloc(s);
	if (caloc == NULL)
	{
		return (NULL);
	}
	memset(caloc, 0, s);
	return (caloc);
}
