#include "dog.h"

/**
 * print_dog - function that prints a dog struct
 * @d: struct name.
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		if (!d->name)
			printf("Name: %s\n", "(nil)");
		if (!d->age)
			printf("Age: %s\n", "(nil)");
		if (!d->owner)
			printf("Owner: %s\n", "(nil)");
	}
}

