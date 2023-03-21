#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_dog - function that frees dogs
 * @d: points to function that need to be free
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
