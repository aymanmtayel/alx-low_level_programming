#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a dog struct
 * @d: struct name.
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			prinf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

