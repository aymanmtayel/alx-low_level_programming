#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the head
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

