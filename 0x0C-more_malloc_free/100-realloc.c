#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory to be changed.
 * @old_size: the old size of the memory before change.
 * @new_size: the new size of the memory after change.
 * Return: pointer to the new memory blocks or NULL if fail
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_loc;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_loc = malloc(new_size);
	if (new_loc == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		*((char *)new_loc + i) = *((char *)ptr + i);
	free(ptr);

	return (new_loc);
}
