#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minumim value
 * @max: maximum value
 * Return: the pointer to the created array or NULL if fail
 */

int *array_range(int min, int max)
{
	int *ptr, size, i;

	if (min > max)
		return (NULL);

	size = max - min;
	ptr = malloc(sizeof(int) * (size + 1));
	if (ptr == NULL)
		return (NULL);


	for (i = 0; i <= size; i++)
		ptr[i] = min++;

	return (ptr);
}
