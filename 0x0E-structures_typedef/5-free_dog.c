#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function that frees the dogs.
 * @d: the dog struct to be freed
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
