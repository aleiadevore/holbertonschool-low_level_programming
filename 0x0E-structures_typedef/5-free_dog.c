#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees structure
 * @d: pointer to structure
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
