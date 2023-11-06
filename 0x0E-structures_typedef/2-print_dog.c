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
		printf("Name: %s\n", dog.name ? dog.name : "(nil)");
		printf("Age: %f\n", dog.age);
		printf("Owner: %s\n", dog.owner ? dog.owner : "(nil)");
	}
}

