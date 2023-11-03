#include "main.h"

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb : number of elements in the array.
 * @size : size of the array.
 * Return: pointer to the allocated memory or NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = malloc(sizeof(size) * nmemb);

	if (ptr == NULL || nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}
