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

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	ptr[0] = min;
	for (i = 1; i < size; i++)
		ptr[i] = min + i;
	ptr[i] = max;
	return (ptr);
}
