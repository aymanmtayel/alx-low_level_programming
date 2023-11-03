#include "main.h"

/**
 * malloc_checked - funtion that allocated memory using malloc
 * @b: size of memory needed
 * Return: 98 if falils, pointer to the array if succeded.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
