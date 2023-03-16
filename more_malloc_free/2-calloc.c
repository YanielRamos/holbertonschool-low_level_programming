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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	caloc = malloc(size * nmemb);
	memset(caloc, 0, nmemb * size);
	free (caloc);
	return (caloc);
}
