#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog.
 * @age: new dog's age.
 * @owner: new dog's owner.
 * Return: Void.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *n_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		;
	i += 1;
	n_dog->name = malloc(i);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		n_dog->name[k] = name[k];
	n_dog->age = age;
	for (j = 0; owner[j]; j++)
		;
	j += 1;
	n_dog->owner = malloc(j);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		n_dog->owner[k] = owner[k];
	return (n_dog);
}
