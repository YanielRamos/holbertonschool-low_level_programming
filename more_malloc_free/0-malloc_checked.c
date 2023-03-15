#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory
 * @b: variable
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = (void *) malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	free (ptr);
	return (ptr);
}
