#include "dog.h"

/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: pointer for the dog structure
 *@name: name of the dog
 *@age: age of the dog
 *@owner: dog owner
 *Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
