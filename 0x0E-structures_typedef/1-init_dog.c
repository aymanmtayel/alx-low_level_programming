#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struc dog.
 * @d: struct name.
 * @name: name of the dog.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
