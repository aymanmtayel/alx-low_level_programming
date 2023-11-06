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
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		if (!d->age)
			printf("Age: %s\n", "(nil)");
		printf("Owner: %s\n", *d->owner ? d->owner : "(nil)");
	}
}

